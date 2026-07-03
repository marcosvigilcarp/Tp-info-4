#include <stdio.h>

int main(int argc, char *argv[]) {
	//TP Informatica 4: Ingreso de calificaciones en numero y salida en letras.//
	float nota;
	printf("Ingrese su calificacion ");
	scanf ("%f", &nota);
	if (nota>=90){
		printf("su calificacion final es A");
	}
		else if (nota>=80 && nota<90){
			printf("su calificacion final es B");
	}
		else if (nota>=70 && nota<80){
			printf("su calificacion final es C");
	}		
		else if (nota>=60 && nota<70){
			printf("Su calificacion final es D");
	}
		else if (nota<60){
			printf("Su calificacion final es F");
	}
	return 0;
}

