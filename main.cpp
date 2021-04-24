#include <iostream>
using namespace std;

//Entrada
int main() {
 float salario, emprestimo, emprestimoMensal;
 int parcelas = 0;

  cout<<"Infome seu salario: R$";
  cin>>salario;
  cout<<endl;
  cout<<"Informe o valor desejado de emprestimo:  R$";
  cin>>emprestimo;
  cout<<endl;
  cout<<"Informe a quantidade de parcelas desejadas: ";
  cin>>parcelas;

 emprestimoMensal = emprestimo / parcelas;

if(salario <= 0 || emprestimo <= 0 || parcelas <=0){
  cout<<"Valores não podem ser menores ou iguais a zero";
}else if(emprestimoMensal >= salario*0.30){
  cout<<" Credito NEGADO "<<endl;
}else{
  cout<<" Credito APROVADO ";
}
return 0;
}