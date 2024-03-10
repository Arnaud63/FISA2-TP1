#ifndef SECHERESSE_H
#define SECHERESSE_H

#include "ICroissanceStrategie.hpp"

class Secheresse : public ICroissanceStrategie {
public:
    Secheresse();
    virtual ~Secheresse() = default;

    virtual float nouvelleTaille(float taille_actuelle) override;

private:

};

#endif // SECHERESSE_H