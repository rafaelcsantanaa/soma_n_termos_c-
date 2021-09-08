///Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
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
cout<<"Digite o número: ";
cin>>n;
cout<<"\n\tSoma dos cubos de todos os números até "<<n<<" é: "<<soma(n);
return 0;
}
