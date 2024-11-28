/*********************************************************************
 * @file  Instrument.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier HEADER de Instrument, défini un instrument, sa mesure, son type de mesure
 *********************************************************************/


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