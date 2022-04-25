#include <iostream>
#include <string>
#include <math.h>

using namespace std;
 
 int main (){
  //Faça um algoritmo que leia a idade de uma 
  //pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias
 

 //INFORMAÇAO ADICIONAL: NESSE ALGORITMO ADOTAMOS TODOS OS MESES COMO 30 DIAS.
 //INFORMAÇAO ADICIONAL: SERA O MES DE ABRIL E O DIA 30 COMO REFERENCIA.

 //Variaveis
  int Anos,Meses, Dias,D , Idade, X, Mes;
  int  Dias_Vividos;
  bool decisao;

 //Coleta de Dados
  cout << "Digite o ano que voce nasceu: ";
  cin >> (Anos);
  cout << "Digite o numero do mes: ";
  cin >> (Meses);
  cout << "Digite o dia que voce nasceu: ";
  cin >> (D);
  cout << "ja fez aniversario? (responda com sim ou não)";
  cin >> (decisao);
 //CALCULOS
if (decisao="sim")
{
    Idade = (2022-Anos)*360;
}

 else(decisao = "nao");
 {
    Idade = (2021-Anos)*360;
 }
 
  
  Dias = (30-D);
  X= (Meses - 04);
  Mes= (12-X)*30;

  Dias_Vividos = Idade + Dias + Mes;

  cout << "Voce possui: " << Dias_Vividos << ", dias vivo \n";

 system ("pause");
 return 0;
}