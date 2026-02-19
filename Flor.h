#ifndef JARDINPROYECTOPROGRA2_FLOR_H
#define JARDINPROYECTOPROGRA2_FLOR_H
#include "Figura.h"

class Flor : public Figura {
private:
    int tam;
public:
    Flor(int x, int y, int tam);
    int get_tam();
    void dibujar(CImg<unsigned char>& img);
};

#endif //JARDINPROYECTOPROGRA2_FLOR_H

#ifndef PETALO_H
#define PETALO_H

class Petalo {
private:
    float radio;
    int colorR, colorG, colorB;

public:
    Petalo(float radio, int r, int g, int b) {
        this->radio = radio;
        this->colorR = r;
        this->colorG = g;
        this->colorB = b;
    }
    float getRadio() { return radio; }
    int getR() { return colorR; }
    int getG() { return colorG; }
    int getB() { return colorB; }
    void dibujar() {
    }
};

#endif

#ifndef CENTRO_H
#define CENTRO_H

class Centro {
private:
    float radio;
    int colorR, colorG, colorB;
public:
    Centro(float radio, int r, int g, int b) {
        this->radio = radio;
        this->colorR = r;
        this->colorG = g;
        this->colorB = b;
    }
    float getRadio() { return radio; }
    int getR() { return colorR; }
    int getG() { return colorG; }
    int getB() { return colorB; }
    void dibujar() {
    }
};

#endif
