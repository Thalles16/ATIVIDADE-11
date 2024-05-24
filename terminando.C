#include <stdio.h>
#include <stdlib.h>

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
			
			double nota1, nota2, nota3, nota4;
			double nota5, nota6, nota7, nota8;
			double nota9, nota10, nota11, nota12;
			double nota13, nota14, nota15, nota16;
			double nota17, nota18, nota19, nota20;
			

			
			printf("escreva as notas do primeiro aluno");
			scanf("%d",nota1);
			
			printf("escreva as notas do primeiro aluno");
			scanf("%d",nota2);
			
			printf("escreva as notas do primeiro aluno");
			scanf("%d",nota3);
			
			printf("escreva as notas do primeiro aluno");
			scanf("%d",nota4);
			
			system("pause");
			
			printf("escreva as notas do segundo aluno ");
			scanf("%d",nota5);
			
			printf("escreva as notas do segundo aluno");
			scanf("%d",nota6);
			
			printf("escreva as notas do segundo aluno");
			scanf("%d",nota7);
			
			printf("escreva as notas do segundo aluno");
			scanf("%d",nota8);
			
			system("pause");
			
			printf("escreva as notas do terceiro aluno");
			scanf("%d",nota9);
			
			printf("escreva as notas do terceiro aluno");
			scanf("%d",nota10);
			
			printf("escreva as notas do terceiro aluno");
			scanf("%d",nota11);
			
			printf("escreva as notas do quarto aluno");
			scanf("%d",nota12);
			
			system("pause");
			
			printf("escreva as notas do quarto aluno");
			scanf("%d",nota13);
		
			printf("escreva as notas do quarto aluno");
			scanf("%d",nota14);
		
			printf("escreva as notas do quarto aluno");
			scanf("%d",nota15);
		
			printf("escreva as notas do quarto aluno");
			scanf("%d",nota16);
			
			system("pause");
			
			printf("escreva as notas do quinto aluno");
			scanf("%d",nota17);
			
			printf("escreva as notas do quinto aluno");
			scanf("%d",nota18);
			
			printf("escreva as notas do quinto aluno");
			scanf("%d",nota19);
			
			printf("escreva as notas do quinto aluno");
			scanf("%d",nota20);

			double mediaaluno1 = (nota1 + nota2 + nota3 + nota4)/4;
			double mediaaluno2 = (nota5 + nota6 + nota7 + nota8)/4;
			double mediaaluno3 = (nota9 + nota10 + nota11 + nota12)/4;
			double mediaaluno4 = (nota13 + nota14 + nota15 + nota16)/4;
			double mediaaluno5 = (nota17 + nota18 + nota19 + nota20)/4;

			
			printf("a media do primeiro aluno é", mediaaluno1)
			
			printf("a media do segundo aluno é", mediaaluno2)
			
			printf("a media do terceiro aluno é", mediaaluno3)
			
			printf("a media do quarto aluno é", mediaaluno4)
			
			printf("a media do quinto aluno é", mediaaluno5)
			
			system("pause");
	
		} else if (opcao == 2){
			
			system("cls");
			
			printf("ALTERACAO DE NOTAS");
		}
	}
	return 0;
}
