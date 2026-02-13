#include <iostream>
using namespace std;

struct Barco{
    string nombre;
    float largo;
    int muelle; //# de muelle
};

struct Carro{
    string marca;
    int cilindros;
    float km;
};

int main(){
    Barco barcos[5];
    Carro carros[4];

    //barcos
    for (int i=0; i<5; i++){
        cout<<"Barco #"<<i+1<<endl;
        cout<<"Escribe su nombre: ";
        cin>> barcos[i].nombre;
        cout<<"Escribe el largo: ";
        cin>> barcos[i].largo;
        cout<<"Escribe el # de muelle: ";
        cin>> barcos[i].muelle;
    }

    //carros
    for (int i=0; i<4; i++){
        cout<<"Carro #"<<i+1<<endl;
        cout<<"Escribe la marca: ";
        cin>> carros[i].marca;
        cout<<"Indica el número de cilindros: ";
        cin>> carros[i].cilindros;
        cout<<"Escribe el kilometraje: ";
        cin>> carros[i].km;
    }

    cout<<endl;
    cout<<"Información"<<endl;

    cout<<"Barcos: "<<endl;;
    for(int i=0; i<5; i++){
        cout<<"#"<<i+1<<":"<<endl;
        cout<<"nombre - "<<barcos[i].nombre <<endl;
        cout<<"largo - "<<barcos[i].largo <<"m"<<endl;
        cout<<"numero muelle - "<<barcos[i].muelle<<endl;
        cout<<endl;
    }

    cout<<"Carros: "<<endl;;
    for(int i=0; i<4; i++){
        cout<<"#"<<i+1<<":"<<endl;
        cout<<"marca - "<<carros[i].marca <<endl;
        cout<<"cilindraje - "<<carros[i].cilindros <<endl;
        cout<<"kilometraje - "<<carros[i].km<<"km"<<endl;
        cout<<endl;
    }

    return 0;
}