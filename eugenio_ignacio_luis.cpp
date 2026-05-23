#include <stdio.h>
#include <stdbool.h>
int const N = 6;
struct estudiante{
	int numero_leg;
	int edadal;
};
estudiante datos[N];
void carga(struct estudiante datos[]){
    for(int i=0;i<N;i++)
    {
    	printf("ingrese el numero de legajo del alumno numero %d\n",i+1);
    	scanf("%d",&datos[i].numero_leg);
    	printf("ingrese la edad del alumno numero %d\n",i+1);
    	scanf("%d",&datos[i].edadal);
	}
}
void mostrarEdad(struct estudiante datos[], int N){
	int auxiliar;
	printf("ingrese numero de legajo para mostrar edad\n");
	scanf("%d",&auxiliar);
	bool encontrar = false;
	int i = 0;
	while(i<N && encontrar == false){
		if(auxiliar==datos[i].numero_leg){
			encontrar = true;
			printf("la edad es: %d anos\n",datos[i].edadal);
		}
		i++;
	}
		if(encontrar == false){
	     	printf("no se encontró un alumno con ese numero de legajo\n");
		}
	}
float edadpromedio(struct estudiante datos[]){
	int acumulador = 0;
	for(int i=0;i<N;i++){
		acumulador = (acumulador + datos[i].edadal);
	}
	float promedio = acumulador/N;
	return(promedio);
}
void filtradoed(struct estudiante datos[], float prom){
	for(int i=0;i<N;i++){
		if(datos[i].edadal>prom){
			printf("\nla edad del alumno %d es superior al promedio",i+1);
		}
	}
}
int main()
{
	carga(datos);
	mostrarEdad(datos, N);
	float prom = edadpromedio(datos);
	printf("\nla edad promedio de los alumnos es de %.2f anos",prom);
	filtradoed(datos,prom);
	printf("\nAlumno Eugenio Ignacio Luis");
	printf("\nProfesor de teoria: Silvina Balmaceda");
}

