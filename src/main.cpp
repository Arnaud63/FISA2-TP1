
#include <FenetrePrincipale/FenetrePrincipale.hpp>
#include <QApplication>

#include <iostream>
#include "tp1_cpp/Arbre.hpp"
#include "tp1_cpp/croissance_strategies/Dormance.hpp"
#include "tp1_cpp/croissance_strategies/CroissancePrintaniere.hpp"
#include "tp1_cpp/croissance_strategies/CroissanceEstivale.hpp"
#include "tp1_cpp/croissance_strategies/Secheresse.hpp"

int main(int argc, char* argv[])
{
  // QApplication app(argc, argv);

  // TP1::FenetrePrincipale::MainWindow fenetre;
  // fenetre.show();

  // return app.exec();

  Arbre arbre1;

  while (true)
  {
    std::cout << "Taille actuelle : " << arbre1.getTaille() << std::endl;;

    int choix = 0;
    std::cout << "Choix : 0-Quitter, 1-Pas de changement, 2-Dormance, 3-CroissancePrintaniere, 4-CroissanceEstivale, 5-Secheresse" << std::endl;
    std::cin >> choix;
    switch (choix)
    {
        case 0: break;
        case 1: break;
        case 2:
          arbre1.setCroissanceStrategie(std::make_unique<Dormance>());
          break;
        case 3:
          arbre1.setCroissanceStrategie(std::make_unique<CroissancePrintaniere>());
          break;
        case 4:
          arbre1.setCroissanceStrategie(std::make_unique<CroissanceEstivale>());
          break;
        case 5:
          arbre1.setCroissanceStrategie(std::make_unique<Secheresse>());
          break;
    }
    if (choix == 0) 
      break; // Quitte la boucle while (true)
    
    arbre1.croissance();
    std::cout << "Taille apres croissance : " << arbre1.getTaille() << std::endl;
    std::cout << " ----- " << std::endl;
  }

  std::cout << "Fermeture de programme ..." << std::endl;

  return 0;  
}