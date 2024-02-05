#ifndef VEGETAL_H
#define VEGETAL_H

class Vegetal {
public:
    Vegetal();
    virtual ~Vegetal() = default; // demande l'implementation par defaut qu'aurait implementé le compilateur

    float getTaille() const;
    virtual void croissance() = 0;

protected:
    void setTaille(float taille);

private:
    float mTaille;

};

#endif // VEGETAL_H

/*
Les champs ne sont jamais placé en protected car cela detruirait l'encapsulation
(ce champs pourrait être exposé en publique dans la classe fille)
*/