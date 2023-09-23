#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
  
  int *b = new int[N_ELEMENTS];
  
  std::cout << "1-100 ertekek duplazasa";
  int egytol = 1;
  for (int i = 0; i < N_ELEMENTS; i++) {
    b[i] = egytol * 2;
    egytol++;
  }
  
  for (int i = 0; i < N_ELEMENTS; i++) {
    std::cout << "Ertek:\t" << b[i] << "\n";
  }
  std::cout << "Atlag szamitasa: " << std::endl;
  int atlag;
  
  for (int i = 0; i < N_ELEMENTS; i++) {
    atlag += b[i];
  }
  atlag /= N_ELEMENTS;
  std::cout << "Atlag: " << atlag << std::endl;
  std::cout << "Program vege" << std::endl;
  return 0;
}
