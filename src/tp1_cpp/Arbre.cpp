#include "Arbre.hpp"

Arbre::Arbre() {

}

void Arbre::croissance() {
    if(mCroissanceStrategie) {
        // A strategy is setted
        setTaille(mCroissanceStrategie->nouvelleTaille(getTaille()));
    }
    else {
        // No strategy is setted
        setTaille(getTaille() + 1);
    }
}

void Arbre::setCroissanceStrategie(std::unique_ptr<ICroissanceStrategie>&& croissance_strategie) {
    mCroissanceStrategie = std::move(croissance_strategie);
}