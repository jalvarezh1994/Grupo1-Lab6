#include "Personal.h"

Personal::Personal(int AnioContratado){
    this->AnioContratado=AnioContratado;
}
Personal::Personal(){

}void Personal::setAnioContratado(int AnioContratado){
   this-> AnioContratado=AnioContratado;
}
int Personal::getAnioContratado(){
   return AnioContratado;
}
