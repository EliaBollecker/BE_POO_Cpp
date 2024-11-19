/* Classe Instrument
autrices : Elia Bollecker-Fevre et Elise Weltzer
Défini un intrument pour lequel on récupère l'angle ou la distance qui va permettre de jouer la note 
*/

#ifndef INSTRUMENT_H_
#define INSTRUMENT_H_


class Instrument {
friend class note_air_instrument ;
protected :
float mesure ; 
char type_mesure ;

public :
Instrument() ;
 virtual float get_mesure()=0;
 char get_type_mesure();


};











#endif