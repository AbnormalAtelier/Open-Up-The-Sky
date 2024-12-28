#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "one_zero.h"

int main()
{
    int nx = 41;
    float dx = (float)2 / 40;
    int nt = 25;
    float dt = .025;
    int c = 1;

    float u[nx];
    ones(u, nx);
    int i, j;
    for (i = (int)(0.5f / dx); i < (int)(1.0f / dx + 1); i++)
    {
        u[i] = 2;
    }

    float un[nx];
    for (i = 0; i < nt; i++)
    {
        memcpy(un, u, nx * sizeof(float));
        for (j = 1; j < nx; j++)
        {
            u[j] = un[j] - c * dt / dx * (un[j] - un[j - 1]);
        }
    }
    for (i = 0; i < nx; i++)
    {
        printf("%f\n", u[i]);
    }
}
