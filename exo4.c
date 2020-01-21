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
  int choix = 0;
  printf ("Heros : %d PV \n", pv_heros);
  printf ("Monstre : %d PV \n", pv_monstre);
  while (pv_monstre > 0 && pv_heros > 0)
    {
      printf (" Que faire ? \n (1) Attaquer \n (2) Se defendre \n");
      scanf ("%d", &choix);
      if (choix == 1) {
	  printf ("Heros attaque Monstre, Monstre perd 20 PV ! \n");
	  pv_monstre = pv_monstre - 20;
	  printf ("Monstre contre-attaque ! Heros perd 16 PV ! \n");
	  pv_heros = pv_heros - 16;
	  printf ("Heros : %d PV \n", pv_heros);
	  printf ("Monstre : %d PV \n", pv_monstre);
	}
      if (choix == 2) {
	  printf ("Heros se protege ! \n");
	  printf
	    ("Monstre attaque ! Mais Heros se protege ! Heros perd 4 PV \n");
	  pv_heros = pv_heros - 4;
	  printf ("Heros : %d PV \n", pv_heros);
	  printf ("Monstre : %d PV \n", pv_monstre);
	}
    }
  printf (" Monstre n'a plus de PV, Heros gagne !");
  return 0;
}
