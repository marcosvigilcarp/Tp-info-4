#include <stdio.h>

int main(int argc, char *argv[]) {
	//TP Informatrica 4: Indice de masa corporal con IF includo//
	float peso, altura, indice_masa_corporal;
	printf("Escriba su peso: ");
	scanf("%f",& peso);
	printf("Ahora escriba su altura: ");
	scanf("%f",& altura);
	indice_masa_corporal= peso/(altura*altura);
	printf("Usted tiene un indice de masa corporal de: %f\n", indice_masa_corporal);
	if(indice_masa_corporal<18.5) {
		printf("Usted tiene un bajo peso");
	}
		else if(indice_masa_corporal <24.9) {
		printf("Usted tiene un peso normal");
	}

	else if(indice_masa_corporal<29.9) {
		printf("Usted tiene sobrepeso");
	}	
	else if (indice_masa_corporal >=30){
		printf("Usted sufre de obesidad, reeplantee su salud");
	}
	return 0;
	}
