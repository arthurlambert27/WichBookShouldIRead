#include "menu.h"

void menu(){
  std::cout << "Bonjour et bienvenu sur l'outil permettant de trouver la bonne lecture\n\n";
  std::cout << "Menu:\n";
  std::cout << "1. Quel livre lire?\n";
  std::cout << "2. Ajouter un livre\n";
  std::string choice;
  std::cin >> choice;

  if(choice == "1"){
    chooseBook();
  }
  else if(choice =="2"){
    addNewBook();
  }

}
