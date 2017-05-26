#include "Chef.h"

Chef::Chef(string PlatilloFavorito,int Rating){
    this->PlatilloFavorito=PlatilloFavorito;
    this->Rating=Rating;
}
Chef::Chef(){

}void Chef::setPlatilloFavorito(string PlatilloFavorito){
   this-> PlatilloFavorito=PlatilloFavorito;
}
string Chef::getPlatilloFavorito(){
   return PlatilloFavorito;
}
void Chef::setRating(int Rating){
   this-> Rating=Rating;
}
int Chef::getRating(){
   return Rating;
}
