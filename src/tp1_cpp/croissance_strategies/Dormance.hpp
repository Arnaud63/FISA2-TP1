#ifndef DORMANCE_H
#define DORMANCE_H

#include "ICroissanceStrategie.hpp"

class Dormance : public ICroissanceStrategie {
public:
    Dormance();
    virtual ~Dormance() = default;

    virtual float nouvelleTaille(float taille_actuelle) override;

private:

};

#endif // DORMANCE_H