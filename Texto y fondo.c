#include <stdio.h>
#include <windows.h>

#define RESET_COLOR  "\x1b[0m"    //Reseteo de color
#define Black_t      "\x1b[30m"   //Color negro en el texto
#define Black_b      "\x1b[40m"   //Color negro de fondo
#define Red_t        "\x1b[31m"   
#define Red_b        "\x1b[41m"   
#define Green_t      "\x1b[32m"
#define Green_b      "\x1b[42m"
#define Yellow_t     "\x1b[33m"
#define Yellow_b     "\x1b[43m"
#define Blue_t       "\x1b[34m"
#define Blue_b       "\x1b[44m"
#define Purple_t     "\x1b[35m"
#define Purple_b     "\x1b[45m"
#define Cyan_t       "\x1b[36m"
#define Cyan_b       "\x1b[46m"
#define White_t      "\x1b[37m"
#define White_b      "\x1b[47m"

int main() 
{
	system("cls");
	printf(Red_t " Color rojo " Blue_t " Color Azul " Black_t Green_b " Edwin " RESET_COLOR "\n");

Sleep(10000);
return 0;
}