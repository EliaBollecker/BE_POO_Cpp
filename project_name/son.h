#ifndef SON_H
#define SON_H 

#include "note_air_instrument.h"
#include "AirInstrument.h"
#include <cppQueue.h>
#include "reccord.h"


//#include ""



class Son{
    protected : 
        bool MusicLive  ;//permet de selectionner le mode de sortie de son 
        //Reccord Enregistrement ; 
    public : 
        Son(bool ML) ; 
        virtual void PlayMusic() =0; 
};

#endif 
