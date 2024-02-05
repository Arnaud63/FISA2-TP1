#include "Vegetal.hpp"

Vegetal::Vegetal() :
    mTaille(0.0) {

}

Vegetal::~Vegetal() {
    
}

float Vegetal::getTaille() const {
    return mTaille;
}

void Vegetal::setTaille(float taille) {
    mTaille = taille;
}