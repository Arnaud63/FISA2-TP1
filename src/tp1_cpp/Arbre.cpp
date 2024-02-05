#include "Arbre.hpp"

Arbre::Arbre() {

}

void Arbre::croissance() {
    setTaille(mCroissanceStrategie->nouvelleTaille(getTaille()));
}

void Arbre::setCroissanceStrategie(std::unique_ptr<ICroissanceStrategie>&& croissance_strategie) {
    mCroissanceStrategie = std::move(croissance_strategie);
}