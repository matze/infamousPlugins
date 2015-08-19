//spencer jackson

//gpl v2 and all that

//a simple and kinda boring lfo implementation
#include<stdlib.h>
#include<time.h>
#include"lfo.h"

#define PI 3.1415926535897932384626433832795

Lfo::Lfo(double sample_rate, uint32_t fragsize)
{
    shape = 0;
    gain = 0;
    freq = 0;

    srand ((unsigned int) time (NULL));
    phase = 2*PI*rand() / (float)RAND_MAX ;
    prev_x = prev_y = 0;
    coeff = 1/(2*sample_rate);
    phastep = 2*PI*fragsize/sample_rate;//w = 2*pi*f sin(wt) = sin(2*pi*f*t) = sin(2*pi*f*n/fs)
}

Lfo::~Lfo()
{
}

float 
Lfo::out(float _shape)
{
    shape = _shape;
    return out();
}

float 
Lfo::out()
{
    phase += phastep*freq;
    if(phase > 2*PI)
        phase -= 2*PI;
    // sin approx based on an algorithm by Nicolas Capens
    double y = 1.27323954474*phase - 0.40528473456*phase*(phase>0?phase:-phase);
    float s =  0.225*(y*(y>0?y:-y) - y) + y;
    //pink noise
    float x = 2*PI*rand() / (float)RAND_MAX ;
    prev_y = coeff*(x + prev_x) + prev_y;
    prev_x = x;
    //blend shapes
    return gain*((s-prev_y)*shape + prev_y);

}