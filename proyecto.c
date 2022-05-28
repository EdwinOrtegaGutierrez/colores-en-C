#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

COORD coord= {0,0}; 

void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void programa()
{
    int selector;
    float s, r, d, m, n1, n2;

    gotoxy(10, 2); printf("CALCULADORA");
    gotoxy(2, 4); printf("SELECCIONE LA OPERACION QUE DESEA REALIZAR:");
    gotoxy(2, 6); printf("1- suma. 2- resta. 3- divisi%cn. 4- multiplicaci%cn.", 162, 162);
    gotoxy(2, 8); printf("OPCION:");
    scanf("%d", &selector);

    switch (selector)
    {
    case 1: 
            printf(" INGRESE EL PRIMER DIGITO: ");
            scanf("%f", &n1);
            printf("\n INGRESE EL SEGUNDO DIGITO: ");
            scanf("%f", &n2); 
            s = n1 + n2;
            printf(" RESULTADO: %f \n", s);
        break;
    case 2: 
            printf(" INGRESE EL PRIMER DIGITO: ");
            scanf("%f", &n1);
            printf("\n INGRESE EL SEGUNDO DIGITO: ");
            scanf("%f", &n2); 
            r = n1 - n2;
            printf(" RESULTADO: %f \n", r);
        break;
    case 3: 
            printf(" INGRESE EL PRIMER DIGITO: ");
            scanf("%f", &n1);
            printf("\n INGRESE EL SEGUNDO DIGITO: ");
            scanf("%f", &n2); 
            d = n1 / n2;
            printf(" RESULTADO: %f \n", d);
        break;
    case 4: 
            printf(" INGRESE EL PRIMER DIGITO: ");
            scanf("%f", &n1);
            printf("\n INGRESE EL SEGUNDO DIGITO: ");
            scanf("%f", &n2); 
            m = n1 * n2;
            printf(" RESULTADO: %f \n", m);
        break;            
    }
}

int main()
{
    system("COLOR B0");
    programa(); 
    printf("\n");

system("pause");

return main();
}