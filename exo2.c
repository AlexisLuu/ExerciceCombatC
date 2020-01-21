/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int pv_heros = 100;
  int pv_monstre = 100;
  printf ("Heros : %d PV \n", pv_heros);
  printf ("Monstre : %d PV \n", pv_monstre);
  while (pv_monstre > 0)
    {
      printf ("Heros attaque Monstre, Monstre perd 20 PV ! \n");
      pv_monstre = pv_monstre - 20;
      printf ("Heros : %d PV \n", pv_heros);
      printf ("Monstre : %d PV \n", pv_monstre);
    }
  printf ("Monstre n'a plus de PV, Heros gagne !");
  return 0;
}
