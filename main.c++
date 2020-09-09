#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
float pes, alt, imc, quad, pide, por;
int rep;

main(void){
system("color 77");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x74);

printf(">>Ola, aqui voce pode calcular o seu Indice de Massa Corporal e descobrir se voce esta acima ou abaixo do peso ideal!\n\n");
	
rep = 1;
while(rep==1){
	
	printf("---Por favor, digite seu peso em kg\n");
	scanf("%f",&pes);
	printf("---Beleza!, agora por favor digite sua altura\n");
	scanf("%f",&alt);
	
quad=pow(alt,2);
imc=pes/quad;
	
	if(imc<18.5){
		printf("Voce esta abaixo do peso ideal seu IMC e: %0.1\n", imc);
	}
	
	else if(imc>=18.5 && imc<25){
		printf("Voce esta com peso normal seu IMC e: %0.1f\n", imc);
	}
	
	else if(imc>=25 && imc<30){
		printf("Voce esta com excesso de peso, seu IMC e: %0.1f\n", imc);
	}
	
	else if(imc>=30 && imc <35){
		printf("Voce esta com obesidade grau um, seu IMC e: %0.1f\n", imc);
	}
	
	else if(imc>=35 && imc<40){
		printf("Voce esta com obesidade grau dois, seu IMC e: %0.1f\n", imc);
	}
	
	else if(imc>=40){
		printf("Voce esta com obesidade grau tres, seu IMC e: %0.1f\n", imc);
	}
	
	pide=quad*21.75;
	printf("O seu peso ideal baseado na sua altura e: %0.1fkg\n", pide);
	
	
	por=(pes*100)/pide;
	if(imc>21.75){
		printf("Voce esta acima do peso ideal %0.1f%%\n", por-100);
	}
	
	else if(imc<21.75){
		printf("Voce esta abaixo do peso ideal %0.1f%%\n", -por+100);
	}
	
	else if(imc==21.75){
		printf("Voce esta com o peso ideal, parabens!\n");
	}
	
	printf("Voce deseja reiniciar? SIM(1) NAO(2)\n");
	scanf("%d",&rep);
	
	}
}
