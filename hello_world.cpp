#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main() {
	char idioma;
	setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Spanish");
	printf("Ingl�s/English/Ingl�s(I), Portugu�s/Portuguese/Portugu�s(P), Espanhol/Spanish/Espa�ol(E) ou/or/o todas/all(T)? ");
	scanf("%c",&idioma);
	if (idioma == 'I' || idioma == 'i') {
		// em C
		printf("(In C)\n");
	    printf("Hello, World!\n");
	    // em C++
	   cout << endl << "(In C++)" << endl;
	   cout << "Hello, World!" << endl; 
	} else if (idioma == 'P' || idioma == 'p') {
		// em C
		printf("(Em C)\n");
		printf("Ol�, Mundo!\n");
		// em C++
	    cout << endl << "(Em C++)" << endl;
	    cout << "Ol�, Mundo!";
	} else if(idioma == 'E' || idioma == 'e') {
		//em C
		printf("(Em C)\n");
		printf("�Hola, Mundo!\n");
		// em C++
		cout << "Em C++" << endl;
		cout << "�Hola, Mundo!";
	} else if (idioma == 'T' || idioma == 't') {
		//em C
		printf("(Em C)\n");
		printf("Ol�,Mundo!\nHello,World!\n�Hola,Mundo!\n");
		//em C++
		cout << endl << "(Em C++)" << endl << "Ol�,Mundo!" << endl << "Hello,World!" << endl << "�Hola,Mundo!";
	}
}