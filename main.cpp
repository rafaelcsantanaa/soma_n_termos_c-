///Escreva uma fun��o recursiva que calcule a soma dos primeiros n cubos:
#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int soma(int n){
if (n == 0){
return 0;
}else{
return (soma(n-1)+pow(n, 3));
}
}
int main(){
int n;
setlocale(LC_ALL, "Portuguese");
cout<<"Digite o n�mero: ";
cin>>n;
cout<<"\n\tSoma dos cubos de todos os n�meros at� "<<n<<" �: "<<soma(n);
return 0;
}
