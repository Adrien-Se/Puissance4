/***********************************************************************************************
 * @file puiss4struct.h
 * @author MATTHEY-VINTAR Alexis, PETARD Adrien
 * @brief 
 * @version 0.1
 * @date 22 - 12 - 2020
 * 
 * @copyright Copyright (c) 2020
 * 
 ************************************************************************************************/

#ifndef PUISS4STRUCT_H
#define PUISS4STRUCT_H

#include "SaveAndSettings.h"

// Definition structure puiss4
typedef struct puiss4 {
    int grille[NB_LIGNE_MAX][NB_COL_MAX], 
     
    dernier_pion[NB_COL_MAX],

    quitPartie, // variable qui permet de savoir si l'utilisateur veut quitter la partie ou pas
    resetPartie; // variable qui permet de savoir si l'utilisateur veut recommencer la partie ou pas
} puiss4;

#endif
