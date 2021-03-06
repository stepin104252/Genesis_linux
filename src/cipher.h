
#ifndef __CIPHER_H
#define __CIPHER_H

/**
 * \fn char cipher(char c, int pas, char sens)
 * \brief fonction qui renvoie le caractères chiffré/déchiffré en fonction des paramètres
 * \param c est le caractère à chiffrer/déchiffrer
 * \param pas est le pas de chiffrement
 * \param sens est le sens de chiffrement (c ou d)
 * \return l'entier représentant le décalage lu
 * */
char cipher(char c, int pas, char sens);

#endif
