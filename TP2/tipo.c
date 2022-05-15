#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassenger.h"

int cargarDescripcionTipo(eTipo tipos[],int tam,int idTipo,char descripcion[]){
	int todoOk =0;

	if(tipos != NULL && tam>0 && descripcion != NULL){

		for(int i=0;i<tam;i++){
			if(tipos[i].id == idTipo){
				strcpy(descripcion,tipos[i].descripcion);
				break;
			}
		}

		todoOk = 1;
	}
	return todoOk;
}
