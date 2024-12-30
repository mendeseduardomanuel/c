#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ids[100];
char nomes[100][50];
int idades[100];
char dataNascimento[100][20];
char enderecos[100][100];
char telefones[100][9];
char emails[100][50];
char generos[100][10];
char cursos[100][50];
char anosSemestre[100][20];
int total_alunos = 0;

void menu() {
    system("cls");
    printf("=== Sistema de Cadastro de Alunos ===\n");
    printf("\n");
    printf("1. Cadastrar aluno\n");
    printf("2. Remover aluno\n");
    printf("3. Listar alunos\n");
    printf("4. Buscar aluno\n");
    printf("5. Atualizar cadastro\n");
    printf("6. Informacoes dos criadores\n");
    printf("0. Sair\n");
}

void criadores() {
	printf("\n");
    printf("=== Informacoes dos Criadores ===\n");
    printf("\n");
    printf("Ola somos o grupo numero 2 os criadores do projecto que foi criado em demandas cada elemento tendo sua demanda por fazer eh revisada por Mendes\n");
    printf("\n");
	printf("Nossa equipa:\n");
    printf("Mendes \n");
    printf("Magnunson\n");
    printf("Luis\n");
    printf("Antonio\n");
    printf("Julio\n");
    printf("Fernando\n");
    printf("Rosario\n");
    printf("Suzana\n");
    printf("Junior\n");
    printf("Obrigado por utilizar nosso sistema!\n");
    system("pause");
}

void cadastrarAluno() {
    if(total_alunos >= 100) {
        printf("Nao e possivel cadastrar mais alunos\n");
        return;
    }

    int id, i, idade;
    printf("Id do Aluno: ");
    scanf("%d", &id);
    getchar(); 

    for(i = 0; i < total_alunos; i++) {
        if(ids[i] == id) {
            printf("Ja existe um aluno cadastrado com esse Id\n");
            system("pause");
            return;
        }
    }

    printf("Nome Completo: ");
    fgets(nomes[total_alunos], 50, stdin);
    nomes[total_alunos][strcspn(nomes[total_alunos], "\n")] = '\0'; 
    
    printf("Idade: ");
    scanf("%d", &idade);
    getchar();

    if(idade < 18) {
        printf("Apenas alunos maiores de 18 anos podem ser cadastrados\n");
        system("pause");
        return;
    }

    ids[total_alunos] = id;
    idades[total_alunos] = idade;

    printf("Data de Nascimento (di/mes/ano): ");
    fgets(dataNascimento[total_alunos], 20, stdin);
    dataNascimento[total_alunos][strcspn(dataNascimento[total_alunos], "\n")] = '\0'; 
    
    printf("Endereco: ");
    fgets(enderecos[total_alunos], 100, stdin);
    enderecos[total_alunos][strcspn(enderecos[total_alunos], "\n")] = '\0'; 

    printf("Numero de Telefone: ");
    fgets(telefones[total_alunos], 9, stdin);
    telefones[total_alunos][strcspn(telefones[total_alunos], "\n")] = '\0'; 

    printf("Email: ");
    fgets(emails[total_alunos], 50, stdin);
    emails[total_alunos][strcspn(emails[total_alunos], "\n")] = '\0'; 

    printf("Genero (Escolha uma opcao): \n");
    printf("1. Masculino\n");
    printf("2. Feminino\n");
    int generoOpcao;
    scanf("%d", &generoOpcao);
    getchar(); 
    
    switch (generoOpcao) {
        case 1:
            strcpy(generos[total_alunos], "Masculino");
            break;
        case 2:
            strcpy(generos[total_alunos], "Feminino");
            break;
        default:
            printf("Opcao de genero invalida. Cadastro cancelado\n");
            system("pause");
            return;
    }

    printf("Curso (Escolha uma opcao): \n");
    printf("1. Engenharia Informatica\n");
    printf("2. Inferagem Geral\n");
    printf("3. Engenharia Agronomia\n");
    printf("4. Hidraulica\n");
    printf("5. Contabilidade Geral\n");
    
    int cursoOpcao;
    scanf("%d", &cursoOpcao);
    getchar();

    switch (cursoOpcao) {
        case 1:
            strcpy(cursos[total_alunos], "Engenharia Informatica");
            break;
        case 2:
            strcpy(cursos[total_alunos], "Inferagem Geral");
            break;
        case 3:
            strcpy(cursos[total_alunos], "Engenharia Agronomia");
            break;
        case 4:
            strcpy(cursos[total_alunos], "Hidraulica");
            break;
        case 5:
            strcpy(cursos[total_alunos], "Contabilidade Geral");
            break;
        default:
            printf("Opcao de curso invalida. Cadastro cancelado.\n");
            system("pause");
            return;
    }

    printf("Ano/Semestre: ");
    fgets(anosSemestre[total_alunos], 20, stdin);
    anosSemestre[total_alunos][strcspn(anosSemestre[total_alunos], "\n")] = '\0';

    total_alunos++;
    printf("Aluno cadastrado com sucesso!\n");
    system("pause");
}

void removerAluno() {
    int id, i, j;
    printf("Digite o Id do aluno a ser removido: ");
    scanf("%d", &id);

    for(i = 0; i < total_alunos; i++) {
        if(ids[i] == id) {
            for(j = i; j < total_alunos - 1; j++) {
                ids[j] = ids[j + 1];
                strcpy(nomes[j], nomes[j + 1]);
                idades[j] = idades[j + 1];
                strcpy(dataNascimento[j], dataNascimento[j + 1]);
                strcpy(enderecos[j], enderecos[j + 1]);
                strcpy(telefones[j], telefones[j + 1]);
                strcpy(emails[j], emails[j + 1]);
                strcpy(generos[j], generos[j + 1]);
                strcpy(cursos[j], cursos[j + 1]);
                strcpy(anosSemestre[j], anosSemestre[j + 1]);
            }
            total_alunos--;
            printf("Aluno removido com sucesso!\n");
            system("pause");
            return;
        }
    }
    printf("Aluno com ID %d nao encontrado\n", id);
    system("pause");
}

void listarAlunos() {
	int i;
	
    if(total_alunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
        system("pause");
        return;
    }
    
    printf("\n");
    printf("=== Lista de Alunos ===\n");
    printf("\n");
    printf("\n");
    for(i = 0; i < total_alunos; i++) {
        printf("Id: %d\n", ids[i]);
        printf("Nome Completo: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Data de Nascimento: %s\n", dataNascimento[i]);
        printf("Endereco: %s\n", enderecos[i]);
        printf("Numero de Telefone: %s\n", telefones[i]);
        printf("Email: %s\n", emails[i]);
        printf("Genero: %s\n", generos[i]);
        printf("Curso: %s\n", cursos[i]);
        printf("Ano/Semestre: %s\n", anosSemestre[i]);
        printf("-------------------------------\n");
    }
    system("pause");
}

void buscarAluno() {
    char busca[50];
    int id, i;
    int encontrado = 0;

    printf("Digite o Id ou Nome do aluno a ser buscado: ");
    fgets(busca, 50, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    if (scanf(busca, "%d", &id) == 1) {
        for(i = 0; i < total_alunos; i++) {
            if(ids[i] == id) {
                printf("Aluno encontrado:\n");
                printf("Id: %d\n", ids[i]);
                printf("Nome Completo: %s\n", nomes[i]);
                printf("Idade: %d\n", idades[i]);
                printf("Data de Nascimento: %s\n", dataNascimento[i]);
                printf("Endereco: %s\n", enderecos[i]);
                printf("Numero de Telefone: %s\n", telefones[i]);
                printf("Email: %s\n", emails[i]);
                printf("Genero: %s\n", generos[i]);
                printf("Curso: %s\n", cursos[i]);
                printf("Ano/Semestre: %s\n", anosSemestre[i]);
                encontrado = 1;
                break;
            }
        }
    } else {
    	
        for(i = 0; i < total_alunos; i++) {
            if(strcasecmp(nomes[i], busca) == 0) {
                printf("Aluno encontrado:\n");
                printf("Id: %d\n", ids[i]);
                printf("Nome Completo: %s\n", nomes[i]);
                printf("Idade: %d\n", idades[i]);
                printf("Data de Nascimento: %s\n", dataNascimento[i]);
                printf("Endereco: %s\n", enderecos[i]);
                printf("Numero de Telefone: %s\n", telefones[i]);
                printf("Email: %s\n", emails[i]);
                printf("Genero: %s\n", generos[i]);
                printf("Curso: %s\n", cursos[i]);
                printf("Ano/Semestre: %s\n", anosSemestre[i]);
                encontrado = 1;
                break;
            }
        }
    }

    if (!encontrado) {
        printf("Aluno nao encontrado.\n");
    }
    system("pause");
}

void atualizarCadastro() {
    int id, i, idade, generoOpcao, cursoOpcao;
    printf("Digite o Id do aluno a ser atualizado: ");
    scanf("%d", &id);
    getchar();

    for(i = 0; i < total_alunos; i++) {
        if(ids[i] == id) {
            printf("Atualizando cadastro do aluno %s:\n", nomes[i]);

            printf("Nome Completo [%s]: ", nomes[i]);
            fgets(nomes[i], 50, stdin);
            nomes[i][strcspn(nomes[i], "\n")] = '\0'; 

            printf("Idade [%d]: ", idades[i]);
            scanf("%d", &idade);
            getchar(); 
            if(idade >= 18) {
                idades[i] = idade;
            } else {
                printf("Idade invalida. Nao foi atualizada.\n");
            }

            printf("Data de Nascimento [%s]: ", dataNascimento[i]);
            fgets(dataNascimento[i], 20, stdin);
            dataNascimento[i][strcspn(dataNascimento[i], "\n")] = '\0'; 

            printf("Endereco [%s]: ", enderecos[i]);
            fgets(enderecos[i], 100, stdin);
            enderecos[i][strcspn(enderecos[i], "\n")] = '\0'; 

            printf("Numero de Telefone [%s]: ", telefones[i]);
            fgets(telefones[i], 9, stdin);
            telefones[i][strcspn(telefones[i], "\n")] = '\0'; 

            printf("Email [%s]: ", emails[i]);
            fgets(emails[i], 50, stdin);
            emails[i][strcspn(emails[i], "\n")] = '\0'; 

            printf("Genero [%s] (Escolha uma opcao): \n", generos[i]);
            printf("1. Masculino\n");
            printf("2. Feminino\n");
            scanf("%d", &generoOpcao);
            getchar();

            switch (generoOpcao) {
                case 1:
                    strcpy(generos[i], "Masculino");
                    break;
                case 2:
                    strcpy(generos[i], "Feminino");
                    break;
                default:
                    printf("Opcao de genero invalida. Nao foi atualizada\n");
            }

            printf("Curso [%s] (Escolha uma opcao): \n", cursos[i]);
            printf("1. Engenharia Informatica\n");
            printf("2. Interagem Geral\n");
            printf("3. Engenharia Agronomia\n");
            printf("4. Hidraulica\n");
            printf("5. Contabilidade Geral\n");
            scanf("%d", &cursoOpcao);
            getchar();

            switch (cursoOpcao) {
                case 1:
                    strcpy(cursos[i], "Engenharia Informatica");
                    break;
                case 2:
                    strcpy(cursos[i], "Interagem Geral");
                    break;
                case 3:
                    strcpy(cursos[i], "Engenharia Agronomia");
                    break;
                case 4:
                    strcpy(cursos[i], "Hidraulica");
                    break;
                case 5:
                    strcpy(cursos[i], "Contabilidade Geral");
                    break;
                default:
                    printf("Opcao de curso invalida. Nao foi atualizada.\n");
            }

            printf("Ano/Semestre [%s]: ", anosSemestre[i]);
            fgets(anosSemestre[i], 20, stdin);
            anosSemestre[i][strcspn(anosSemestre[i], "\n")] = '\0';

            printf("Cadastro atualizado com sucesso!\n");
            system("pause");
            return;
        }
    }
    printf("Aluno com ID %d nao encontrado.\n", id);
    system("pause");
}


int main() {
    int opcao;

    do {
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch(opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                removerAluno();
                break;
            case 3:
                listarAlunos();
                break;
            case 4:
                buscarAluno();
                break;
            case 5:
                atualizarCadastro();
                break;
            case 6:
                criadores();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

        system("pause");
    } while(opcao != 0);

    return 0;
}


