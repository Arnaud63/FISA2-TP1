#ifndef FLEUR_H
#define FLEUR_H

#include "Vegetal.hpp"

class Fleur : public Vegetal {
public:
    Fleur(float taille_max);
    virtual ~Fleur() = default;

    virtual void croissance() override;
    virtual float getTailleMax() const;

private:
    float mTailleMax;
};

#endif // FLEUR_H