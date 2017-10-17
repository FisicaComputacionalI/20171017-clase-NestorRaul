// Programa que calcula la suma de numeros impares del 1 al 10
//Nestor Raul Mancilla Xinto
//ultima modificacion 17 octubre 2017
//Resultado 110
#include <iostream>
using namespace std;

int main()
{
 int sum=0;
 int count=1;
 while (count<21){
   if ((count%2)<=0)
   {
     sum=sum+count;
   }
   count++;
 }
 cout<<"suma"<<sum<<endl;
 return 0; 
}
