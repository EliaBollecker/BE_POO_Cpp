# Projet : Réalisation d'instruments à l'aide d'un capteur ultrason et d'un potentiomètre
Elise Weltzer et Elia Bollecker

--Branchement des capteurs

1. Capteur ultrason ( ultrasonic ranger) --> pin D7
2. Buzzer --> pin D3
3. Touch sensor --> pin D8
4. Potentiomètre (rotary angle sensor) --> pin A0

-- Fonctionnement du code : 

Le code permet de jouer des notes de musiques avec soit le capteur ultrason, soit le potentiomètre.
Une séquence de 10 note peut être jouée pour chaque capteur, celles-ci sont enregistrées en parallèle puis rejouées par le buzzer une fois la séquence terminée.
Il est possible de jouer autant de séquence que l'on veut.

Etapes à Suivre :

1. Lancer le .ino dans l'interface Arduino
2. Le bouton touch sensor permet de sélectionner le mode d'instrument : appuyer sur le touch sensor pour séléctionner l'instrument potentio sinon, l'instrument capteur ultrason sera selectionné par défaut
3. Utiliser le capteur pour jouer les notes : une séquence de 10 notes peut être réalisée (la mesure est effectuée toutes les 2 secondes)
--> tourner le potentiomètre pour jouer les différentes notes 
--> rapprocher ou éloigner sa main du capteur ultrason pour jouer différentes notes
4. La séquence de 10 notes est enregistrée en parallèle et rejouée par le buzzer
5. Selectionner à nouveau l'instrument choisi puis une nouvelle séquence de 10 notes peut être jouée


Note : si la main est trop éloignée du capteur ultrason ou qu'il ne détecte rien, aucune note ne sera jouée


