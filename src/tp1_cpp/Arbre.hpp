#ifndef ARBRE_H
#define ARBRE_H

#include "Vegetal.hpp"

class Arbre : public Vegetal {
public:
    Arbre();
    virtual ~Arbre() = default;

    virtual void croissance() override;

private:

};

#endif // ARBRE_H