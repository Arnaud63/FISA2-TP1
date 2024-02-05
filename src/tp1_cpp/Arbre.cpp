#include "Arbre.hpp"

Arbre::Arbre() {

}

void Arbre::croissance() {
    setTaille(getTaille() + 1.0f);
}