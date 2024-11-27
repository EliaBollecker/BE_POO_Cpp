//#include "AirInstrument.h"
#include "Application.h"
#include "note_air_instrument.h"
#include "reccord.h"

int main(){
    AirInstrument I ; 
    //float note=I.lierNoteMesure() ; 
    //cout<< note <<endl ; 
    Reccord Sauv(&I) ; 
    //cout<<"test2"<<endl ; 
    Sauv.enregistrer() ; 
    //I.setMesure(20) ; 

    //I.setMesure(40) ; 

    //I.setMesure(25) ; 
    cout<<"****************"<<endl ; 
    Sauv.jouer() ; 

    return 0 ; 
}