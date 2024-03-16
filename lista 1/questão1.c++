//Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
//Obs: Considere cada mês com 30 dias.

#include <iostream>
using namespace std;

int main(){
  int idade, mes, dia, idade_total;
  
  cout << "entre com a idade em Ano, Mes e Dia:";
  
  cin >> idade >> mes >> dia;
  idade_total = idade*365 + mes*30 + dia;

  cout << "a sua idade em dias é de:" << idade_total;
  return 0;
}
