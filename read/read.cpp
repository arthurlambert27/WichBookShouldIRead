#include "read.h"
void chooseBook(){
  std::ifstream liste;
  liste.open("books.txt");
  std::string bookName;
  std::string bookImpression;
  std::string bookDifficulty;
  std::string Read;
  float average = 0;

  while(liste >> Read and liste >> bookName and liste >> bookImpression and liste >> bookDifficulty){

    if((std::stof(bookImpression)+std::stof(bookDifficulty))/2 > average){
      average = (std::stof(bookImpression)+std::stof(bookDifficulty))/2;
    }
  }
  liste.close();
  liste.open("books.txt");
  while(liste >> Read and liste >> bookName and liste >> bookImpression and liste >> bookDifficulty){
            std::cout << "Read: " << Read << " bookName: " <<bookName << " average: " << (std::stof(bookImpression)+std::stof(bookDifficulty))/2  << "\n";
            std::cout << "Average: " << average <<"\n";
    if((std::stof(bookImpression)+std::stof(bookDifficulty))/2 == average){
      std::cout << "Le livre  a lire est: " << bookName << std::endl;
    }
  }
  liste.close();

}
