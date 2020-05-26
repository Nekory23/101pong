/*
** EPITECH PROJECT, 2019
** 101Pong
** File description:
** compute the trajectory of the pong ball
*/

#include "my.h"

void compute_angle(float xv, float yv, float zv, float z0)
{
    float norm_h = sqrt(powf(xv, 2) + powf(yv, 2) + powf(zv, 2));
    float angle = fabs(asinf(z0 / norm_h) * (180 / PI));

    printf("The incidence angle is:\n");
    printf("%.2f degrees\n", angle);
}

int will_reach_paddle(float z0, float z1)
{
    if (z1 == z0) {
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    if ((z1 > 0 && z0 > 0 && z0 < z1) || (z1 < 0 && z0 < 0 && z0 > z1 )) {
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    if ((z0 > 0 && z1 < 0) || (z0 < 0 && z1 > 0)) {
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    return (1);
}

void Pong(float x0, float y0, float z0, float x1, float y1, float z1, int n)
{
    float xv = x1 - x0;
    float yv = y1 - y0;
    float zv = z1 - z0;
    float x = x1 + (xv * n);
    float y = y1 + (yv * n);
    float z = z1 + (zv * n);

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", xv, yv, zv);
    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f, %.2f, %.2f)\n", x, y, z);
    if (will_reach_paddle(z0, z1) == 1)
        compute_angle(xv, yv, zv, z0);
}

void convert_all_value(char *x0, char *y0, char *z0, char *x1,
                       char *y1, char *z1, char *n)
{
    float xa = atof(x0);
    float ya = atof(y0);
    float za = atof(z0);
    float xb = atof(x1);
    float yb = atof(y1);
    float zb = atof(z1);
    int t = atoi(n);

    Pong(xa, ya, za, xb, yb, zb, t); 
}
