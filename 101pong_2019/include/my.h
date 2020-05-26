/*
** EPITECH PROJECT, 2019
** 101Pong
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);
void convert_all_value(char *x0, char *y0, char *z0, char *x1, char *y1, char *z1, char *n);

#define PI 3.1415592653589793238462643383
#define ERROR_NBR "invalid number of agruments\n"
#define ERROR_ARG "argument must be a number\n"
#define ERROR_TIME "time shift must be a positive integer\n"

#endif
