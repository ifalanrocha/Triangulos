#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std; 

float a,b,c,per,area;
char tecla;

int main() 
{
 setlocale(LC_ALL,"Portuguese");
 system("cls");
 Menu :
    cout << "\n\n1. Para executar, exibir\n";
    cout << "2. finalizar\n";
    cout << "\n";
    cin >> tecla;
    switch (tecla)
    {
    case '1':
        cout << "\nDigite o lado a:\n";
        cin >> a;
        cout << "Digite o lado b:\n";
        cin >> b;
        cout << "Digite o lado c:\n";
        cin >> c;

        if (a < b + c && b < a + c && c < a + b)
        {
            cout << ("trata se de um triangulo!");
            cout << "\n";
            per = a+b+c / 2;
            area= sqrt(per *(per - a)*(per - b)*(per - c));
            cout << "O semi-Perimetro deste Triangulo é: "<< per << endl;
            cout << "\n";
            cout << "A área deste Triangulo é: "<< area << endl; 
            cout << "n";
            system ("pause");
            goto Menu;
        }

        else
        {
            cout << ("Uma figura qualquer com 3 lados!");
            goto Menu;
        }
    case '2':
        return 0;
        break;
    }
    return 0;
}                                                                                                                                                      
