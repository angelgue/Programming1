#include <cstdlib>
#include <iostream>
#include <locale.h>
/*Dado un n�mero de tres d�gitos realizar un programa que calcule la suma y el promedio
de los n�meros comprendidos entre el menor digito y el producto de los restantes.*/
using namespace std;

int main(int argc, char *argv[])
{
    system("color b4");
    int n,m,n1,n2,n3,cuentadig=0,prod,suma=0,cuenta=0,men,i;
    float prom;
    char res;
    do
    {
         cuentadig=0,prod,suma=0,cuenta=0;
         system("cls");
    setlocale(LC_ALL, "");
    cout<<endl<<"Suma y promedio de los n�meros comprendidos entre el menor digito y el producto "<<"\t \t \t de los restantes";
    cout<<endl<<endl<<"Ingrese el n�mero a validar, que debe ser de tres d�gitos ";
    cin>>n;
    m=n;
    while(n!=0)
    {
          n=n/10;
          cuentadig++; 
           }
           if(cuentadig==3)
           {
               n1=m/100;
               n2=m%100/10;
               n3=m%10;
               if(n1<=n2 && n1<=n3)
               {
                   men=n1;
                   prod=n2*n3;
                   }
                   else
                   {
                       if(n2<=n1 && n2<=n3)
               {
                   men=n2;
                   prod=n1*n3;
                   }
                   else
                   {
                       men=n3;
                   prod=n1*n2;
                       }
                       }
                       for(i=men+1;i<prod;i++)
                     {
                          cuenta++;
                          suma=suma+i;
                          } 
                          if(cuenta>0)
                          {
                       cout<<endl<<endl<<"Los n�meros comprendidos entre "<<men<<", que es el menor de los d�gitos de "<<m<<" y "<<prod<<" que es el producto de los otros dos d�gitos de "<<m<<" son:"<<endl<<endl;
                     for(i=men+1;i<prod;i++)
                     {
                                            cout<<i<<" ";
                          }  
                          prom=suma/cuenta;
                          cout<<endl<<endl<<"La suma de estos n�meros es "<<suma;
                          cout<<endl<<endl<<"El promedio de estos n�meros es aproximadamente "<<prom<<endl<<endl;
                          }
                          else
                          {
                              cout<<endl<<endl<<"No hay n�meros comprendidos entre "<<men<<", que es el menor de los d�gitos de "<<m<<" y "<<prod<<" que es el producto de los otros dos d�gitos de "<<m<<"."<<endl<<endl;
                              }
               }
               else
               {
                   cout<<endl<<endl<<"El n�mero ingresado tiene 1, 2 o m�s de tres d�gitos.  Por favor ingrese un n�mero que contenga tres cifras."<<endl<<endl;
                   }
                   cout<<endl<<endl<<"�Desea ingresar otro n�mero? s/n ";
                   cin>>res;
}while(res!='n');    
    system("PAUSE");
    return EXIT_SUCCESS;
}
