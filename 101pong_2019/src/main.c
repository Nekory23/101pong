/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** main and error handling
*/

#include "my.h"

int error_handling_time(char *time_arg)
{
    for (int i = 0; time_arg[i] != '\0'; i++)
        if (time_arg[i] == '.' || time_arg[i] == '-') {
            write(2, ERROR_TIME, my_strlen(ERROR_TIME));
            return (1);
        }
    return (0);
}

int main(int ac, char **av)
{
   int i = 0;

   if (ac != 8) {
       write (2, ERROR_NBR, my_strlen(ERROR_NBR));
       return (84);
   }
   for (int nbr = 1; nbr < ac; nbr++) {
       i = 0;
       while (av[nbr][i] != '\0') {
           if ((av[nbr][i] >= '0' && av[nbr][i] <= '9') || av[nbr][i] == '.' || av[nbr][i] == '-')
               i = i + 1;
           else {
               write(2, ERROR_ARG, my_strlen(ERROR_ARG));
               return (84);
           }
       }
   }
   if (error_handling_time(av[7]) == 1)
       return (84);
   convert_all_value(av[1], av[2], av[3], av[4], av[5], av[6], av[7]);
   return (0);
}
