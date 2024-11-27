#ifndef INSTRUMENT_H
#define INSTRUMENT_H

class Instrument {

    protected :
        long mesure ; 
        char type_mesure ;
    
    public :    
        Instrument() ;
        virtual void mesureCapteur()=0;
        char get_type_mesure();
        virtual float lierNoteMesure() =0 ; 
        
        void setMesure(float mesure) ; //permet de chager la mesure manuellement POUR LE TEST 
        friend class NoteAirInstrument ; 
};
 
#endif 