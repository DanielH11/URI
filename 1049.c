#include <stdio.h>
#include <string.h>

int main (){
	int fil, clas, al;
	char filo[13], classe[9], alim[10];
	scanf ("%s", &filo);
	//analise do filo
	if (strcmp(filo, "vertebrado")==0)
		fil=1;
	else if (strcmp(filo, "invertebrado")==0)
		fil=0;
	//analise da classe
	scanf ("%s", &classe);
	//se vertebrado
	if (fil){
		if (strcmp(classe, "ave")==0)
			clas=1;
		else 
			clas=0;
	}
	//se invertebrado
	else{	
		if (strcmp(classe, "inseto")==0)
			clas=1;
		else
			clas=0;
	}
	//analise de alimento
	scanf ("%s", &alim);
	if (strcmp(alim, "carnivoro")==0)
		al=0;
	else if (strcmp(alim, "onivoro")==0)
		al=1;
	else if (strcmp(alim, "herbivoro")==0)
		al=2;
	else if (strcmp(alim, "hematofago")==0)
		al=3;
	//classificar
	if (fil){
		if (clas){
			if (!al)
				printf ("aguia\n");
			else
				printf ("pomba\n");
		}
		else{
			if (al==1)
				printf ("homem\n");
			else if(al==2)
				printf ("vaca\n");
		}
	}
	else {
		if (clas){
			if (al==3)
				printf ("pulga\n");
			else if (al==2)
				printf ("lagarta\n");
		}
		else{
			if (al==3)
				printf ("sanguessuga\n");
			else if (al==1)
				printf ("minhoca\n");
		}
	}
	return 0;
}