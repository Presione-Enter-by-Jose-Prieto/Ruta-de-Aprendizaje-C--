#include <iostream> // cout cin
using namespace std;

// Aquí se pueden agregar funciones

int main(){
    // define las variables primero
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "El numero es par" << endl;
    }else{
        cout << "El numero es impar" << endl;
    }
    
}