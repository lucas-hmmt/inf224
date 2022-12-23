//
// main.cpp
// Created on 21/10/2018
//

#include <vector>
#include <iostream>
#include <string>

#include "Multi.hpp"
#include "Photo.hpp"
#include "Video.hpp"

int main(int argc, const char* argv[])
{
    std::vector<Multi*> listeMedia;
    listeMedia.push_back(new Photo("Photo", "src/", 10, 15));
    listeMedia.push_back(new Video("Video1", "src/home/", 4));
    listeMedia.push_back(new Video("Video2", "src/", 1));
    
    for(int i(0); i<listeMedia.size(); ++i)
    {
        listeMedia[i]->play(); //On "joue" le i-ème élément de la liste
        
        delete listeMedia[i];  //On libère la i-ème case mémoire allouée
        listeMedia[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
    }
    
    return 0;
}
