#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ids[100];
char nomes[100][50];
int idades[100];
char dataNascimento[100][20];
char enderecos[100][100];
char telefones[100][9];
char emails[100][50];
char generos[100][10];
char cursos[100][20];
char anosSemestre[100][20];
int total_alunos = 0;

void menu(){
	system("cls");
	printf("===== SITEMA DE CADSTRO DE ALUNOS DA UNIKIV 'INGENHARIA INFORMÁTICA'");
	printf("1. Cadastrar Alunos\n");
	printf("2. Remover Alunos\n");
	printf("3. Listar Alunos\n");
	printf("4. Atualizar Cadastro\n");
	printf("0. sair\n");
}

void cadastrarAluno(){
	if(total_alunos >= 100){
		printf("Não eh possivel cadastrar mais alunos.\n");
		return;
	}
	
	int id, i, idade;
	
	printf("Id do  Aluno: ");
	scanf("%d", &id);
	getchar();
	
	for(i = 0; i < total_alunos; i++){
		if(ids[i] == id){
			printf("Ja existe um Aluno cadastrado com esse Id.\n");
			system("pause");
			return;
		}
	}
	
	printf("Nome Completo: ");
	fgets(nomes[total_alunos], 50, stdin);
	nomes[total_alunos][strcspn(nomes[total_alunos], "\n")] = '\0';
	
	printf("Idade: ");
	scanf("%d",&idade);
	getchar();
	
	if(idade < 18){
		printf("Apenas Alunos maiores de 18 anos podem ser cadastrados.\n");
		system("pause");
		return;
	}
	
	ids[total_alunos] = id;
	idades[total_alunos] = idade;
	
	printf("Data de nascimento (dia/mes/ano): ");
	fgets(dataNascimento[total_alunos], 20, stdin);
	dataNascimento[total_alunos][strcspn(dataNascimento[total_alunos], "\n")]= '\0';
	
	printf("Endereco: ");
	fgets(enderecos[total_alunos], 100, stdin);
	telefones[total_alunos][strcspan(enderecos[total_alunos], "\n")]= '\0';
	
	printf("Numero de Telefone: ");
	fgets(telefones[total_alunos], 9, stdin);
	telefones[total_alunos][strcspn(telefones[total_alunos], "\n")] = '\0';
	
	printf("Email: ");
	fgets(emails[total_alunos],50,stdin);
	emails[total_alunos][strcspn(emails[total_alunos], "\n")] = '\0';
	
	printf("Genero (opcional): ");
	fgets(generos[total_alunos], 10, stdin);
	generos[total_alunos][strcspn(generos[total_alunos], "\n")]= '\0';
	
	printf("Curso: ");
	fgets(cursos[total_alunos], 50, stdin);
	cursos[total_alunos][strcspn(cursos[total_alunos], "\n")] = '\0';
	
	printf("Ano/Semestre: ");
	fgets(anosSemestre[total_alunos], 20, stdin);
	anosSemestre[total_alunos][strcspn(anosSemestre[total_alunos], "\n")]= '\0';
	
	total_alunos++;
	printf("Aluno cadastrado com sucesso!\n");
	sytem("pause");	

}

void removerAluno(){
	int id, i,j;
	printf("Digite o Id do aluno a ser removido: ");
	scanf("%d", &id);
	
	for(i = 0; i < total_alunos; i++){
		if(ids[i] == id){
			for(j = i; j < total_alunos -1; j++){
				ids[j] = ids[j + 1];
				strcpy(nomes[j], nomes[j + 1]);
				idades[j] = idades[j + 1];
				strcpy(dataNascimento[j], dataNascimento[j + 1]);
				strcpy(enderecos[j], enderecos[j + 1]);
				strcpy(telefones[j], telefones[j + 1]);
				strcpy(emails[j], emails[j + 1]);
				strcpy(generos[j], generos[j + 1]);
				strcpy(cursos[j], generos[j + 1]);
				strcpy(anosSemestre[j], anosSemestre[j + 1]);
			}
			total_alunos--;
			printf("Aluno Removido com secesso!\n");
			system("pause");
			return;
		}
	}
	printf("Aluno com Id %d nao encontrado\n",id);
	system("pause");
}

void listarAlunos(){
	int i;
	if(total_alunos == 0){
		printf("Nenhum aluno cadastrado\n");
		system("pause");
		return;
	}
	
	printf("=== LISTAR ALUNOS ===\n");
	for(i = 0; i < total_alunos; i++){
		printf("Id: %d\n", ids[i]);
		printf("Nome Completo: %s\n", nomes[i]);
		printf("Idade: %d\n", idades[i]);
		printf("Data de Nascimento: %s\n", dataNascimento[i]);
		printf("Numero de Telefone: %s\n", telefones[i]);
		printf("Email: %s\n", emails[i]);
		printf("Genero: %s\n", generos[i]);
		printf("Curso: %s\n", cursos[i]);
		printf("Ano/Semestre: %s\n", anosSemestre[i]);
		printf("------------------------------------\n");
	}
	system("pause");
}

void buscarAluno(){
	int id,i;
	char nome[50];
	int encontrado=0;
	
	printf("Digite o Id ou nome do aluno a ser buscado: ");
	fgests(nome, 50, stdin);
	nome[strcspn(nome, "\n")] = '\0';
	
	if(sscanf(nome, "%d", &id) == 1){
		for(i = 0; i < total_alunos; i++){
			if(ids[i] == id){
				printf("Id: %d\n", ids[i]);
				printf("Nome completo: %s\n", dataNascimento[i]);
				printf("Endereco: %s\n", enderecos[i]);
				printf("Numeros de  Telefone: %s\n", telefones[i]);
				printf("Email: %s\n", emails[i]);
				printf("Genero: %s\n", generos[i]);
				printf("Curso: %s\n", cursos[i]);
				printf("Ano/Semestre: %s\n", anosSemestre[i]);
				encontrado = 1;
				break;
			}
		}
			}else{
			for(i = 0; i < total_alunos; i++){
				if(strcasecmp(nomes[i], nome) == 0){
				printf("Id: %d\n", ids[i]);
				printf("Nome completo: %s\n", dataNascimento[i]);
				printf("Endereco: %s\n", enderecos[i]);
				printf("Numeros de  Telefone: %s\n", telefones[i]);
				printf("Email: %s\n", emails[i]);
				printf("Genero: %s\n", generos[i]);
				printf("Curso: %s\n", cursos[i]);
				printf("Ano/Semestre: %s\n", anosSemestre[i]);
				printf("---------------------------------\n");
				encontrado = 1;
				break;
				}
			}
		}
		if(!encontrado){
			printf("Aluno não encintrado\n");
		}
		system("pause");
}

void atualizarCadastro(){
	int id, idade, i, opcao;
	int encontrado = 0;
	
	printf("Digite o Id do aluno a ser atualizado: ");
	scanf("%d", &id);
	getchar();
	
	for(i = 0; i < total_alunos; i++){
		if(ids[i] == id){
			encontrado = 1;
			
			printf("Aluno encontrado. O que deseja atualizar?\n");
			printf("1. Nome Completo\n");
			printf("2. Idade\n");
			printf("3. Data de Nascimento\n");
			printf("4. Endereco\n");
			printf("5. Numero de Telefone\n");
			printf("6. Email\n");
			printf("7. Genero\n");
			printf("8. Curso\n");
			printf("9. Ano/Semestre\n");
			printf("Escolha uma opcao: ");
			scanf("%d", &opcao);
			getchar();
			
			switch(opcao){
				case 1:
					printf("Novo Nome Completo: ");
					fgets(nomes[i], 50, stdin);
					nomes[i][strcspn(nomes[i], "\n")]='0';
					break;
					
				case 2:
					printf("Nova Idade: ");
					scanf("%d", &idade);
					getchar();
					if(idade < 18){
						printf("Apenas alunos maiores de 18 anos podem ser cadastrado\n");
						system("pause");
						return;
					}
					idades[i] = idade;
					break;
					
				case 3:
					printf("Nova data de Nascimento (dia/mes/ano): ");
					fgets(dataNascimento[i], 20, stdin);
					dataNascimento[i][strcspn(dataNascimento[i], "\n")]='\0';
					
				case 4: 
					printf("Novo Endereco: ");
					fgets(enderecos[i], 100, stdin);
					enderecos[i][strcspn(enderecos[i], "\n")]='\0';
					break;
					
				case 5:
					printf("Novo numero de telefone: ");
					fgets(telefones[i], 9, stdin);
					telefones[i][strcspn(telefones[i], "\n")] = '\0';
					break;
					
				case 6:
					printf("Novo Email: ");
					fgest(emails[i], 50, stdin);
					emails[i][strcspn(emails[i], "\n")] = '\0';
					break;
					
				case 7:
					printf("Novo genero (opcional): ");
					fgest(generos[i], 10, stdin);
					generos[i][strcspn(generos[i], "\n")]='\0';
					break;
				case 8:
					printf("Novo curso: ");
					fgets(cursos[i], 50, stdin);
					cursos[i][strcspn(cursos[i], "\n")]='\0';
					break;
					
				case 9:
					printf("Novo Ano/Semestre: ");
					fgest(anosSemestre[i], 20, stdin);
					anosSemestre[i][strcspn(anosSemestre[i], "\n")]='\0';
					break;
					default:
						printf("Op cao invalida tente novamente.\n");
						break;
			}
			printf("Cadastro atualizado com sucesso!\n");
			break;
		}
	}
	if(!encontrado){
		printf("Aluno com Id %d nao encontrado.\n", id);
	}
	system("pause");
}

int main() {
	int opcao;
	
	do{
		menu();
		printf("Ecolha uma opcao: ");
		scanf("%d", &opcao);
		getchar();
		
		switch(opcao){
			case 1:
				cadastroAluno();
				break;
			case 2:
				removerAluno();
			case 3:
				listarAluno();
				break;
			case 4:
				buscarAluno();
			case 5:
				atualizarCadastro();
				break;
			case 0:
				printf("Saindo...\n");
				break;
				default:
					printf("Opcao invalida! Tente novamente\n");
		}
		system("pause");
	}while(opcao!=0);
	
	return 0;
}
