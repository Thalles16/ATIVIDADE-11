#include <stdio.h>
#include <stdlib.h>

void alteracao_notas() {
	printf("ALTERACAO DE NOTAS \n\n");
	
	system("cls");   
	
	char nome, nome2, nome3,nome4,nome5;
	
	
	
	system("pause");
	system("cls");
	
	float nota1, nota2, nota3, nota4;
	float nota5, nota6, nota7, nota8;
	float nota9, nota10, nota11, nota12;
	float nota13, nota14, nota15, nota16;
	float nota17, nota18, nota19, nota20;
	
	
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota1);
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota2);
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota3);
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota4);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do segundo aluno ");
	scanf("%f",&nota5);
	
	printf("escreva as notas do segundo aluno");
	scanf("%f",&nota6);
	
	printf("escreva as notas do segundo aluno");
	scanf("%f",&nota7);
	
	printf("escreva as notas do segundo aluno");
	scanf("%f",&nota8);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do terceiro aluno");
	scanf("%f",&nota9);
	
	printf("escreva as notas do terceiro aluno");
	scanf("%f",&nota10);
	
	printf("escreva as notas do terceiro aluno");
	scanf("%f",&nota11);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota12);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota13);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota14);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota15);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota16);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota17);
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota18);
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota19);
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota20);
	
	system("pause");
	system("cls");
	
	float mediaAluno1 = (nota1 + nota2 + nota3 + nota4)/4;
	float mediaAluno2 = (nota5 + nota6 + nota7 + nota8)/4;
	float mediaAluno3 = (nota9 + nota10 + nota11 + nota12)/4;
	float mediaAluno4 = (nota13 + nota14 + nota15 + nota16)/4;
	float mediaAluno5 = (nota17 + nota18 + nota19 + nota20)/4;
	
	
	printf("a media do primeiro aluno e %f \n ", mediaAluno1);
	
	printf("a media do segundo aluno e %f \n ", mediaAluno2);
	
	printf("a media do terceiro aluno e %f \n ", mediaAluno3);
	
	printf("a media do quarto aluno e %f \n ", mediaAluno4);
	
	printf("a media do quinto aluno e %f \n ", mediaAluno5);
	
	system("pause");
	system("cls");
	
		if(mediaAluno1>=6 ){
			printf("aluno foi aprovado \n");	
	
	}
		else if(mediaAluno1<6){
			printf("o aluno esta de recuperacao \n");
	} 
		else if(mediaAluno1<4){
			printf("o aluno esta reprovado \n");		
	}
	
	system("pause");
	
		if(mediaAluno2>=6 ){
			printf("aluno foi aprovado \n");		
	}
	
		else if(mediaAluno2<6){
			printf("o aluno esta de recuperacao \n");
	} 
		else if(mediaAluno2<4){
			printf("o aluno esta reprovado \n");		
	}
	
	system("pause");
	
	if(mediaAluno3>=6 ){
			printf("aluno foi aprovado \n");	
	
	}
	else if(mediaAluno3<6){
		printf("o aluno esta de recuperacao \n");
	} 
		else if(mediaAluno3<4){
			printf("o aluno esta reprovado \n");		
	}
	
	system("pause");
	
		if(mediaAluno4>=6 ){
			printf("aluno foi aprovado \n");	
	
	}
		else if(mediaAluno4<6){
			printf("o aluno esta de recuperacao \n");
	} 
		else if(mediaAluno4<4){
			printf("o aluno esta reprovado \n");		
	}
	system("pause");
	
		if(mediaAluno5>=6 ){
			printf("aluno foi aprovado \n");	
	
	}
		else if(mediaAluno5<6){
			printf("o aluno esta de recuperacao \n");
	} 
		else if(mediaAluno5<4){
			printf("o aluno esta reprovado \n");		
	}
	system("pause");
	
}

void cadastro_notas() {
	system("cls");   
	
	char nome, nome2, nome3,nome4,nome5;
	
	printf("CADASTRO DE ALUNOS \n\n");
	
	printf("escreva o nome do primeiro aluno: ");	
	scanf("%s", &nome);
	
	printf("escreva o nome do segundo aluno: ");
	scanf("%s", &nome2);
	
	printf("escreva o nome do terceiro aluno: ");
	scanf("%s", &nome3);
	
	printf("escreva o nome do quarto aluno: ");
	scanf("%s", &nome4);
	
	printf("escreva o nome do quinto aluno: ");
	scanf("%s", &nome5);
	
	system("pause");
	system("cls");
	
	float nota1, nota2, nota3, nota4;
	float nota5, nota6, nota7, nota8;
	float nota9, nota10, nota11, nota12;
	float nota13, nota14, nota15, nota16;
	float nota17, nota18, nota19, nota20;
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota1);
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota2);
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota3);
	
	printf("escreva as notas do primeiro aluno");
	scanf("%f",&nota4);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do segundo aluno ");
	scanf("%f",&nota5);
	
	printf("escreva as notas do segundo aluno");
	scanf("%f",&nota6);
	
	printf("escreva as notas do segundo aluno");
	scanf("%f",&nota7);
	
	printf("escreva as notas do segundo aluno");
	scanf("%f",&nota8);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do terceiro aluno");
	scanf("%f",&nota9);
	
	printf("escreva as notas do terceiro aluno");
	scanf("%f",&nota10);
	
	printf("escreva as notas do terceiro aluno");
	scanf("%f",&nota11);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota12);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota13);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota14);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota15);
	
	printf("escreva as notas do quarto aluno");
	scanf("%f",&nota16);
	
	system("pause");
	system("cls");
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota17);
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota18);
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota19);
	
	printf("escreva as notas do quinto aluno");
	scanf("%f",&nota20);
	
	system("pause");
	system("cls");
	
	float mediaAluno1 = (nota1 + nota2 + nota3 + nota4)/4;
	float mediaAluno2 = (nota5 + nota6 + nota7 + nota8)/4;
	float mediaAluno3 = (nota9 + nota10 + nota11 + nota12)/4;
	float mediaAluno4 = (nota13 + nota14 + nota15 + nota16)/4;
	float mediaAluno5 = (nota17 + nota18 + nota19 + nota20)/4;
	
	
	printf("a media do primeiro aluno e %f \n ", mediaAluno1);
	
	printf("a media do segundo aluno e %f \n ", mediaAluno2);
	
	printf("a media do terceiro aluno e %f \n ", mediaAluno3);
	
	printf("a media do quarto aluno e %f \n ", mediaAluno4);
	
	printf("a media do quinto aluno e %f \n ", mediaAluno5);
	
	system("pause");
	
	system("cls");
	
	if(mediaAluno1>=6 ){
		printf("aluno foi aprovado \n");	
	}
	else if(mediaAluno1<6){
		printf("o aluno esta de recuperacao \n");
	} 
	else if(mediaAluno1<4){
		printf("o aluno esta reprovado \n");		
	}
	
	system("pause");
	
	system("cls");
	
	if(mediaAluno2>=6 ){
		printf("aluno foi aprovado \n");		
	}
	
	else if(mediaAluno2<6){
		printf("o aluno esta de recuperacao \n");
	} 
	else if(mediaAluno2<4){
		printf("o aluno esta reprovado \n");		
	}
	
	system("pause");
	
	system("cls");
	
	if (mediaAluno3>=6 ){
		printf("aluno foi aprovado \n");	
	
	}
	else if(mediaAluno3<6){
		printf("o aluno esta de recuperacao \n");
	} 
	else if(mediaAluno3<4){
		printf("o aluno esta reprovado \n");		
	}
	
	system("pause");
	
	system("cls");
	
	if(mediaAluno4>=6 ){
		printf("aluno foi aprovado \n");	
	}
	else if(mediaAluno4<6){
		printf("o aluno esta de recuperacao \n");
	} 
	else if(mediaAluno4<4){
		printf("o aluno esta reprovado \n");		
	}
	system("pause");
	
	system("cls");
	
	if(mediaAluno5>=6 ){
		printf("aluno foi aprovado \n");	
	}
	else if(mediaAluno5<6){
		printf("o aluno esta de recuperacao \n");
	} 
	else if(mediaAluno5<4){
		printf("o aluno esta reprovado \n");		
	}
	system("pause");	

	system("cls");
}

int main () {

	int opcao=0;
	
	while ((opcao!=1 ) && (opcao!=2) && (opcao !=3)){
	
		system("cls");
		printf("MENU \n\n");
	
		printf("1 cadastro de alunos\n");
		
		printf("2 alteracao de notas\n");
		
		printf("3 SAIR\n\n");
		
		printf("escolha uma opcao: ");
		scanf("%i", &opcao);
		
		if( opcao==1 ){
			cadastro_notas();
		}
		if( opcao==2 ){
			alteracao_notas();
		}
		if (opcao == 3) {
			exit;
		}
		return 0;
	}	
}
