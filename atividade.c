#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    int matricula;
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[200];
    float valorMensalidade;

    printf("Cadastro de Aluno\n");
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Matrícula: ");
    scanf("%d", &matricula);
    getchar();

    printf("Endereço: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf("Curso: ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = '\0';

    printf("Período: ");
    fgets(periodo, sizeof(periodo), stdin);
    periodo[strcspn(periodo, "\n")] = '\0';

    printf("Disciplinas: ");
    fgets(disciplinas, sizeof(disciplinas), stdin);
    disciplinas[strcspn(disciplinas, "\n")] = '\0';

    printf("Valor da Mensalidade: ");
    scanf("%f", &valorMensalidade);

    
    printf("\nInformações do Cadastro:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matrícula: %d\n", matricula);
    printf("Endereço: %s\n", endereco);
    printf("Curso: %s\n", curso);
    printf("Período: %s\n", periodo);
    printf("Disciplinas: %s\n", disciplinas);
    printf("Valor da Mensalidade: R$ %.2f\n", valorMensalidade);

    return 0;
}