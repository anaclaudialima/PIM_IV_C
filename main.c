/* Programa para cadastro de pacientes diagnosticados com Covid-19 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* login e cadastro do paciente */

int main(){
    /* definicao de ponteiro para o arquivo */
    FILE *Ponteiro;
    /* definicao de variaveis */
    char nome[50], cpf[11], endereco[50], telefone[11], email[50], senha[50], login[50], senha2[50], login2[50];

    /* abertura do arquivo */
    Ponteiro = fopen("cadastro.txt", "a");

    /* verificacao de erro na abertura do arquivo */
    if(Ponteiro == NULL){
        printf("Erro na abertura do arquivo!");
        exit(1);
    }
    
    /* cadastro do paciente */
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu CPF: ");
    scanf("%s", cpf);
    printf("Digite seu endereco: ");
    scanf("%s", endereco);
    printf("Digite seu telefone: ");
    scanf("%s", telefone);
    printf("Digite seu email: ");
    scanf("%s", email);
    printf("Digite seu login: ");
    scanf("%s", login);
    printf("Digite sua senha: ");
    scanf("%s", senha);
    printf("Digite seu login novamente: ");
    scanf("%s", login2);
    printf("Digite sua senha novamente: ");
    scanf("%s", senha2);

    /* verificacao de login e senha */
    if(strcmp(login, login2) == 0 && strcmp(senha, senha2) == 0){
        printf("Cadastro realizado com sucesso!");
    }else{
        printf("Login ou senha incorretos!");
    }

    /* escrita no arquivo */
    fprintf(Ponteiro, "Nome: %s CPF: %s Endereco: %s Telefone: %s Email: %s Login: %s Senha: %s Login2: %s Senha2: %s ", nome, cpf, endereco, telefone, email, login, senha, login2, senha2);

    /* fechamento do arquivo */
    fclose(Ponteiro);
    
    return 0;

    /* variavel para armazenar a opcao do menu */
    int opcao;

    /* variavel para armazenar o retorno da funcao */
    int retorno;
}