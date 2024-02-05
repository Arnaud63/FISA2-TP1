#ifndef VEGETAL_H
#define VEGETAL_H

class Vegetal {
public:
    Vegetal();
    virtual ~Vegetal() = 0;

    float getTaille() const;
    virtual void croissance() = 0;

protected:
    void setTaille(float taille);

private:
    float mTaille;

};

#endif // VEGETAL_H