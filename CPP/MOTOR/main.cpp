#include "motor.h"
 //qué voy a usar
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//Defino enteros porq los necesito para las velocidades
int v1 = 0, v2 = 0;

main(){
//Obtengo del usuario a la velocidad objetivo y creo una instancia
  cout << "Introduzca la velocidad deceada" << endl;
  cin >> v1;
  motor.m1(v1);
//Obtengo del usuario a la velocidad de inicio y la setteo
  cout << "Introduzca la velocidad de inicio" << endl;
  cin >> v2;
  m1.set_Va(v2);
 //Mecanismo que modifica la Velocidad_actual hasta llegar a Velocidad_objetivo  
  while(!(m1.get_Va() == m1.get_Vo()){
    if(m1.get_Va() < m1.get_Vo()){
      m1.Incrementar();      
    }else{
      m1.Decrementar();
    }
  }
}
