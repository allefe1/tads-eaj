/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago.  */

#include <iostream>
using namespace std;

int main (){

    int ano;
    float preco, imposto;

    cout << "qual o ano do seu carro? ";
    cin >> ano;
    cout << "qual o preco do seu carro? ";
    cin >> preco;


    if (ano < 1990){
        imposto = preco*0.01;
    }
    else if (ano >= 1990){
        imposto = preco*0.015;
    }
    cout << "o imposto que voce vai pagar no seu carro é de: " << imposto << "R$";

    return 0;
}