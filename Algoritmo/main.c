
/*
Programa criado em C com o objetivo de organizar um vetor através de algoritmos de ordenação. Funções de ordenação contidas: InsertionSort;
ShellSort;
QuickSort;
*/
/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/
#include "recursos.h"

int main()
{
    int x = 0, y;

    while(x != 4){

        printf("---Menu---\n\n");
        printf("Vetor\n[1] -> Crescente\n[2] -> Decrescente\n[3] -> Aleatorio\n[4] -> SAIR\n");
        printf("Opcao:");
        scanf("%d", &x);

        if(x >= 4 || x <= 0)
        {
            break;
        }

        printf("Ordenador\n[1] -> InsertionSort\n[2] -> ShellSort\n[3] -> QuikSort\n");
        printf("Opcao:");
        scanf("%d", &y);

        printf("\n");
        
        if(y >= 4|| y <= 0)
        {
            break;
        }

        opcoes(10,x,y);
        opcoes(100,x,y);
        opcoes(1000,x,y);
        opcoes(10000,x,y);
        opcoes(100000,x,y);

    }

    return 0;
}
