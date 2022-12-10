#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int opc, n;
  float numero, cubo;
  
  cout<<"1. Cubo de un numero."<<endl;
  cout<<"2. Impar o par."<<endl;
  cout<<"3. Salir"<<endl;
  cout<<"Ingrese una opcion: "; cin>>opc;

  switch(opc){
    case 1:
      cout<<"Ingrese el numero a elevar: "; cin>>numero;
      cubo = pow(numero, 3);
      cout<<"La elevacion es: "<<cubo<<endl;
      break;
    case 2:
      cout<<"Ingresa un numero: "<<endl;
      cin>>n;
      if(n%2==0){
        cout<<"El numero ingresado es par."<<endl;
      }
      else{
        cout<<"El numero ingresado es impar."<<endl;
      }
      break;
    case 3: break;
  }

  return 0;
}
