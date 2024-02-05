#include "Arbre.hpp"

Arbre::Arbre() {

}

Arbre::~Arbre() {
    
}

void Arbre::croissance() {
    setTaille(getTaille() + 1);
}