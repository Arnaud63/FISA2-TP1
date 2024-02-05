
#include <FenetrePrincipale/FenetrePrincipale.hpp>
#include <QApplication>

#include <iostream>
#include "tp1_cpp/Arbre.hpp"
#include "tp1_cpp/croissance_strategies/Dormance.hpp"

int main(int argc, char* argv[])
{
  // QApplication app(argc, argv);

  // TP1::FenetrePrincipale::MainWindow fenetre;
  // fenetre.show();

  // return app.exec();

  Arbre arbre1;

  while (true)
  {
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
    }
    if (choix == 0) break; // Quitte la boucle while (true)
  }

  return 0;  
}