#ifndef CROISSANCEESTIVALE_H
#define CROISSANCEESTIVALE_H

#include "ICroissanceStrategie.hpp"

class CroissanceEstivale : public ICroissanceStrategie {
public:
    CroissanceEstivale();
    virtual ~CroissanceEstivale() = default;

    virtual float nouvelleTaille(float taille_actuelle) override;

private:

};

#endif // CROISSANCEESTIVALE_H