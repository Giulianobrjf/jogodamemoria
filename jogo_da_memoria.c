#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char f;
    int h=0, x=0, certo=0, numero[10], gabaritoUsuario[10];

    srand(time(NULL));

    printf("Bem vindo ao jogo da memória!\n");
    Sleep(2000);
    printf("Você deverá decorar os números que aparecem na tela e depois digitar eles.\n");
    Sleep(2000);
    system("pause");

    for(h=0; h<10; h++)
    {
        numero[h] = (rand() %100);
    }
    x=10;
    do
    {
        printf("Tente decorar os números a seguir:\n");
        x--;
        for(h=0; h<10; h++)
        {
            printf("%d\t", numero[h]);
        }
    }
    while(x>10);
    Sleep(5000);
    system("cls");

    printf("------------------------------------\n\n");
    printf("Informe os números mostrados:\n");
    Sleep(1500);

    for(h=0; h<10; h++)
    {
        printf("\t%d número:",h+1);
        scanf("%d", &gabaritoUsuario[h]);
        if(gabaritoUsuario[h]==numero[h])
        {
            certo++;
        }
    }

    if(certo==10)
    {
        printf("Parabéns! Você acertou todos os números");
    }
    else if(certo==9)
    {
        printf("Parabéns! Você acertou 9 números");
    }
    else if(certo==8)
    {
        printf("Parabéns! Você acertou 8 números");
    }
    else if(certo==7)
    {
        printf("Parabéns! Você acertou 7 números, tente mais vezes para melhorar");
    }
    else if(certo==6)
    {
        printf("Parabéns! Você acertou 6 números, tente mais vezes para ir se acostumando");
    }
    else if(certo==5)
    {
        printf("Você acertou 5 números! Não desanime, continue tentando");
    }
    else if(certo==4)
    {
        printf("Você acertou 4 números! Vá com calma e tente anotar os números da próxima vez");
    }
    else if(certo==3)
    {
        printf("Você acertou apenas 3 números, não desanime, continue praticando");
    }
    else if(certo==2)
    {
        printf("Você acertou apenas 2 números, tome um chá de memória e se prepare para o próximo desafio");
    }
    else if(certo==1)
    {
        printf("Você acertou apenas um número! Nossa, isso não é um bom sinal...");
    }
    else if(certo==0)
    {
        printf("Não foi dessa vez! Você não acertou NENHUM número...");
    }
    Sleep(3000);
    return 0;
}

