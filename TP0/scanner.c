#include "scanner.h"

    enum token
  {
    C,
    S,
    FDT
  };
  
void imprimir_Token(int Token)
{
    if (Token == C)
    {
       printf("Cadena: ");
    }
    if (Token == S)
    {
       printf("Separador: ");
    }
    if (Token == FDT)
    {
       printf("Fin de Texto: ");
    }
}


void get_token(caracter)
{
    while (caracter != EOF)
    {
       do
       {
        if (isspace(caracter) == 0)
        {
            if (caracter == ',')
            {
                Print_Token(S);
                putchar(caracter);
                printf("\n");
                caracter = getchar();
            }

            else
            {
                Print_Token(C);
                while (caracter != EOF && caracter != ',' )
                {
                    putchar(caracter);
                    caracter = getchar();
                }
                printf("\n");
            }
        }
        else
        {
            caracter = getchar();
        }

       } 
    }

       if (caracter == EOF)
    {
        Print_Token(FDT);
        putchar(caracter);
        printf("\n");
    }
}


