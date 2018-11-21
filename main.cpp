#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "matriculado.h"
#include <cmath>


using namespace std;
int main()
{
  int i;
  int alt;
  int cadastro;

  for(i=0;;i++){ // loop infinito

  cout << endl <<"Aproxime o cartão(0) ou aperte o botão(1) " << endl;
  cin >> alt;
  if(alt == 0)
  {
    cout << "Insira seu numero de matricula" << endl;
    cin >> cadastro;
    std::string Cadast = std::to_string(cadastro);

    matriculado regist;
    regist.cadast(Cadast);
    cout << "Registro:" << regist.regis() << endl;
    
  } 
  if(alt == 1)
  {
    cout << "Retire seu tichet" << endl;
  }
     if  (alt != 1 && alt != 0) {
     cout << "*** OPERACAO INVALIDA! ***" << endl;
     }

time_t timer;
struct tm *horarioLocal;

time(&timer); // Obtem informações de data e hora
horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

  int dia = horarioLocal->tm_mday;
  int mes = horarioLocal->tm_mon + 1;
  int ano = horarioLocal->tm_year + 1900;

  int hora = horarioLocal->tm_hour;
  int min = horarioLocal->tm_min;
  int sec = horarioLocal->tm_sec;

cout << "Horário: " << (hora-2) << ":" << min << ":" << sec << endl;
cout << "Data: " << dia << "/" << mes << "/" << ano << endl;

}

  return 0;

}

/*Estacionamento
Duas classes cadastrado e Visitante Ok
No Main, escolher se é cadastrado ou visitante Ok
Caso seja visitante, contar o tempo de permanencia 
Caso seja cadastrado: Escrever numero e procurar em lista com ponteiro Nº do cadastro e retornar Nome. Contar o tempo de permanencia também */









