
#ifndef TIPO_H_
#define TIPO_H_

typedef struct{

	int id;
	char descripcion[20];


}eTipo;

int cargarDescripcionTipo(eTipo tipos[],int tam,int idTipo,char descripcion[]);

#endif /* TIPO_H_ */
