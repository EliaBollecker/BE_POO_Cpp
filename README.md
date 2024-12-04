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

Etapes à Suivre :

1. Lancer le .ino dans l'interface Arduino
2. Le bouton touch sensor permet de sélectionner le mode d'instrument : appuyer pour séléctionner l'instrument potentio sinon, l'instrument capteur ultrason sera selectionné par défaut
3. Utiliser le capteur pour jouer les notes, une séquence de 10 notes peut être réalisée
--> tourner le potentiomètre pour jouer les différentes notes



