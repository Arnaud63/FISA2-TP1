#ifndef CROISSANCEPRINTANIERE_H
#define CCROISSANCEPRINTANIERE_H

#include "ICroissanceStrategie.hpp"

class CroissancePrintaniere : public ICroissanceStrategie {
public:
    CroissancePrintaniere();
    virtual ~CroissancePrintaniere() = default;

    virtual float nouvelleTaille(float taille_actuelle) override;

private:

};

#endif // CROISSANCEPRINTANIERE_H