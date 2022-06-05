#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int score;
	char name[20]; 
} scoring;

int awardpoints(int lines,int points){
	switch (lines){
		case 1:
			points+=40*(lines+1);
			break;
		case 2:
			points+=100*(lines+1);
			break;
		case 3:
			points+=300*(lines+1);
			break;
		case 4:
			points+=1200*(lines+1);
			break;
		default:
			printf("error too much lines");
	}
	return points;
	}

void writeFile( scoring tab[], int size){
	FILE* file = NULL;
	file = fopen("nom.txt", "w+");
	if (file == NULL){
		printf("Ouverture fichier impossible \n");
		printf(" code erreur = %d \n", errno);
		printf(" Message d'erreur = %s \n", strerror(errno));
		exit (1);
	}
	for (int i = 0; i < size; i++){
		fprintf(file, "%s", tab[i].name);
	}
	for (int j=0; j < size; j++){
		fprintf(file, "%d", tab[j].score);
	}
	fprintf(file, "\n");
}		

scoring* readfile(int* pnmbr){
	  scoring* tab = NULL;
	  FILE* file = NULL;
	  int Letternbr;
	  file = fopen("nom.txt","r");
	  if (file == NULL){
	  	printf("Ouverture fichier impossible \n");
		  printf(" code erreur = %d \n", errno);
		  printf(" Message d'erreur = %s \n", strerror(errno));
		  exit (1);
	  }
    char playerline[1000];
    while (fgets(playerline, 999, file) != NULL){
      *pnmbr ++;
    }    
    tab = malloc(*pnmbr * sizeof(scoring));
    rewind(file);
    for (int i = 0; i < *pnmbr; i++){
      fscanf( file, "%s", tab[i].name);
      fscanf( file,"%d", &tab[i].score);
    }
  return (tab);
  }

   


    
