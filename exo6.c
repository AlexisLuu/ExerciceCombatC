/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main ()
{
  srand (time (NULL));
  int pv_heros = 100;
  int pv_monstre = 100;
  int choix = 0;
  int choix_monstre = 0;
  int pm_heros = 0;
  int pm_monstre = 0;
  int poison_monstre = 0;
  printf ("Heros : %d PV \n", pv_heros);
  printf ("Monstre : %d PV \n", pv_monstre);
  printf ("Heros : %d PM \n", pm_heros);
  printf ("Monstre : %d PM \n", pm_monstre);
  while (pv_monstre > 0 && pv_heros > 0)
    {
      printf (" Que faire ? \n (1) Attaquer \n (2) Se defendre \n");
      if (pm_heros >= 3)
	{
	  printf ("(3) Empoisonner l'adversaire \n");
	}
      scanf ("%d", &choix);
      int choix_monstre = rand () % 2 + 1;
      if (choix == 1)
	{
	  if (choix_monstre == 1)
	    {
	      printf ("Heros attaque Monstre, Monstre perd 20 PV ! \n");
	      pv_monstre = pv_monstre - 20;
	      printf ("Monstre contre-attaque ! Heros perd 16 PV ! \n");
	      pv_heros = pv_heros - 16;
	      printf ("Heros : %d PV \n", pv_heros);
	      printf ("Monstre : %d PV \n", pv_monstre);

	    }
	  if (choix_monstre == 2)
	    {
	      printf
		("Heros attaque Monstre, mais Monstre se protege ! Monstre perd 5 PV ! \n");
	      pv_monstre = pv_monstre - 5;
	      printf ("Heros : %d PV \n", pv_heros);
	      printf ("Monstre : %d PV \n", pv_monstre);
	    }

	}
      if (choix == 2)
	{
	  if (choix_monstre == 1)
	    {
	      printf ("Heros se protege ! \n");
	      printf
		("Monstre attaque ! Mais Heros se protege ! Heros perd 4 PV \n");
	      pv_heros = pv_heros - 4;
	      printf ("Heros : %d PV \n", pv_heros);
	      printf ("Monstre : %d PV \n", pv_monstre);
	    }
	  if (choix_monstre == 2)
	    {
	      printf ("Heros se protege ! \n");
	      printf ("Monstre se protege aussi ! \n");
	      printf ("Rien ne se passe... \n");
	      printf ("Heros : %d PV \n", pv_heros);
	      printf ("Monstre : %d PV \n", pv_monstre);
	    }
	}
      if (choix == 3)
	{
	  printf ("Heros empoisonne le Monstre ! \n");
	  pm_heros = pm_heros - 3;
	  if (poison_monstre == 1)
	    {
	      printf ("Monstre est deja  empoisonne ! \n");
	    }
	     poison_monstre = 1;
	}

      printf ("Heros gagne 1 PM \n");
      printf ("Monstre gagne 1 PM \n");
      pm_heros = pm_heros + 1;
      pm_monstre = pm_monstre + 1;
      printf ("Heros : %d PM \n", pm_heros);
      printf ("Monstre : %d PM \n", pm_monstre);

      if (poison_monstre == 1)
	{
	  printf ("Le Monstre souffre du poison ! Monstre perd 5 PV ! \n");
	  pv_monstre = pv_monstre - 5;
	  printf ("Heros : %d PV \n", pv_heros);
	  printf ("Monstre : %d PV \n", pv_monstre);

	}

      if (pv_monstre <= 0)
	{
	  printf (" Monstre n'a plus de PV, Heros gagne !");
	}
      if (pv_heros <= 0)
	{
	  printf ("Heros n'a plus de PV, Monstre gagne...");
	}

    }
  return 0;
}
