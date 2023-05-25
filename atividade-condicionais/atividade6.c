#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
    char nomeSalvo[250] = "aluno", senhaSalva[250] = "cachorro";
    char login[250], senha[250];

    printf("Digite seu login: ");
    gets(login);

    fflush(stdin);

    printf("Senha: ");
    gets(senha);

    if(strcmp(login,nomeSalvo) == 0 && strcmp(senha,senhaSalva) == 0){
        printf("Acesso liberado.");
    }else{
        printf("Acesso negado.");
    }

    return 0;
    system("pause");
}