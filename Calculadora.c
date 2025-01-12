#include <stdio.h>
#include <stdlib.h>


void soma(){

        float valor1, valor2, result;

            printf("\nDigite o primeiro valor: ");
            scanf ("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf ("%f", &valor2);
            result = valor1 + valor2;
            printf("\nResultado: %.2f\n\n ", result);

        system ("pause");
        system("cls");

        menu();
}

void subtracao () {

        float valor1, valor2, result;

            printf("\nDigite o primeiro valor: ");
            scanf ("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf ("%f", &valor2);
            result = valor1 - valor2;
            printf("\nResultado: %.2f\n\n ", result);

        system ("pause");
        system("cls");

        menu();
}

void multiplicacao (){

        float valor1, valor2, result;

            printf("\nDigite o primeiro valor: ");
            scanf ("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf ("%f", &valor2);
            result = valor1 * valor2;
            printf("\nResultado: %.2f\n\n ", result);

        system ("pause");
        system("cls");

        menu();
}

void divisao (){

        float valor1, valor2, result;

            printf("\nDigite o primeiro valor: ");
            scanf ("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf ("%f", &valor2);
            result = valor1 / valor2;
            printf("\nResultado: %.2f\n\n ", result);

        system ("pause");
        system("cls");

        menu();
    }

void menu() {

    int selecao;

            printf("Bem vindo a Calculadora, escolha o numero da opcao desejada:\n");

            printf("\n1 - Adicao\n");
            printf("\n2 - Subtracao\n");
            printf("\n3 - Multiplicacao\n");
            printf("\n4 - Divisao\n");
            printf("\n5 - Sair\n");

            printf("\nSelecao: ");

            scanf ("%d", &selecao);

        switch (selecao) {

            case 1:

                soma();

            break;

            case 2:

                subtracao();

            break;

            case 3:

                multiplicacao();

            break;

            case 4:

                divisao();

            break;

            case 5:

                system("exit");
                printf("\nEncerrando...\n");

            break;

            default:

                printf("\nOperação invalida, tente novamente!\n");
                system ("pause");
                system ("cls");

                menu();

            break;
        }

    }


    int main(){

    menu();

    system("pause");
    return 0;
}















