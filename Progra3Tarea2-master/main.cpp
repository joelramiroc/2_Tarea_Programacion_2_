#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    int a=*ptr;
    return a;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    int c= *a;
    int d= *b;
    return (d+c);
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b){
        return true;
    }
    return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    string c=*a;
    string d=*b;
    if(c.compare(d) ==0){
        return true;
    }
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    string c=*a;
    char b = c.at(0);
    return b;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string b=*a;
int cont=b.length();

    for(int i=0;i<b.length();i++){
            cont--;
            char c= b.at(i);
            char d= b.at(cont);
            if(d!=c){
                return false;

        }
    }

    return true;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int ba=*base;
    int t=ba;
    int exp=*exponente;
    while(exp>1){
        ba*=t;
        exp--;
    }
    return ba;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
