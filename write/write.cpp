#include "write.h"
void addNewBook(){
  std::string bookName;
  std::string bookImpression;
  std::string bookDifficulty;
  std::cin >> bookName;
  std::cin >> bookImpression;
  std::cin >> bookDifficulty;
  std::ofstream file;
  file.open("books.txt", std::ofstream::app);
  file << "0 " << bookName << " " << bookImpression << " "<< bookDifficulty<< std::endl;
  file.close();
}
