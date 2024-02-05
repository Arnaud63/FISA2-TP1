#ifndef ARBRE_H
#define ARBRE_H

#include <memory>

#include "Vegetal.hpp"
#include "croissance_strategies/ICroissanceStrategie.hpp"

class Arbre : public Vegetal {
public:
    Arbre();
    virtual ~Arbre() = default;

    virtual void croissance() override;
    virtual void setCroissanceStrategie(std::unique_ptr<ICroissanceStrategie>&& croissance_strategie);

private:
    std::unique_ptr<ICroissanceStrategie> mCroissanceStrategie;

};

#endif // ARBRE_H