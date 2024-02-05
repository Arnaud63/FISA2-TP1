#include "Fleur.hpp"
#include <algorithm>

Fleur::Fleur(float taille_max) :
    mTailleMax(taille_max) {
}

void Fleur::croissance() {
    setTaille(std::min(getTaille() + 0.1f, getTailleMax()));
}

float Fleur::getTailleMax() const
{
    return mTailleMax;
}
