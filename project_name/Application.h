/*********************************************************************
 * @file  Apllication.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef APPLICATION_H_
#define APPLICATION_H_

//#include <Arduino.h>
#include "AirInstrument.h"
#include "reccord.h" 
#include "PotentioInstrument.h"
//#include "SwitchInstrument.h" 

/*#define err1 1; //problème dans la mesure de distance : distance négative avec ultrasonic ranger 
#define err2 2; //problème dans la mesure de ditance : distance trop grande avec ultrasonic ranger 
#define err3 3; //problème dans la mesure de l'angle : angle négatif avec potetiomètre
#define err4 4; //problème dans la mesure de l'angle : angle >198 cad limite maxdu potentiomètre
#define err5 5; //problème dans l'enregistrement de la séquence : pas de notes enregistrée */
/**
  * @class Application
  * @brief Classe Application 
*/    
class Application
{
  public :
    /**
     *  @brief Variable statique publique d'erreur 
     */
    /* static const int err1=1 ; //problème dans la mesure de distance : distance négative avec ultrasonic ranger 
     static const int err2=2 ; //problème dans la mesure de ditance : distance trop grande avec ultrasonic ranger 
     static const int err3=3 ; //problème dans la mesure de l'angle : angle négatif avec potetiomètre
     static const int err4=4 ; //problème dans la mesure de l'angle : angle >198 cad limite maxdu potentiomètre
     static const int err5=5 ; //problème dans l'enregistrement de la séquence : pas de notes enregistrée
     */
    /**
     * @fn Application();
     * @brief Constructeur par defaut
    */    
    Application();
    /**
     * @fn Application();
     * @brief Destructeur
    */    
    ~Application();    
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation de l'application
    */
    void init(void);
    /**
     * @fn void run(void)
     * @brief Fonction de lancement de l'application
    */
    void run(void);
};
#endif
