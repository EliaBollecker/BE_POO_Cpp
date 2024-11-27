#ifndef SONENREGISTRE_H 
#define SONENREGISTRE_H

#include "son.h" 


class SonEnregistre : public Son{
    protected :
        Reccord Enregistrement ; 
    public : 
        SonEnregistre(Instrument * instrument) ; 
        void PlayMusic() ;  
};


#endif