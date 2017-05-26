#include "Mesero.h"

Mesero::Mesero(string Platillos){
    this->Platillos=Platillos;
}
Mesero::Mesero(){

}void Mesero::setPlatillos(string Platillos){
   this-> Platillos=Platillos;
}
string Mesero::getPlatillos(){
   return Platillos;
}
