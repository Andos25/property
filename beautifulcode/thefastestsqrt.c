//this code is from http://kb.cnblogs.com/page/189867/
// which is based on Newton's Method first show in quake3's game engine
// the key to this code is the number 0x5f3759df
#include "stdio.h"

float InvSqrt (float x) 
{
    float xhalf = 0.5f*x;
    int i = *(int*)&x;
    i = 0x5f3759df - (i>>1);
    x = *(float*)&i;
    x = x*(1.5f - xhalf*x*x);
    return x;
}

int main(int argc, char const *argv[])
{
    /* code */
    float num = 65535;
    printf("%f", InvSqrt(num));
    return 0;
}