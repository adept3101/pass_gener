#include <ctime>
#include <iostream>

char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b',
              'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'o',
              'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
              'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
              'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char pass_gen(int size) {
  srand(time(NULL));

  char *pass = new char[size - 1];
  for (int i = 0; i < size; i++) {
    pass[i] = arr[rand() % 60];
    std::cout << pass[i];
  }

  std::cout << std::endl;
  delete[] pass;

  return 0;
}

int main() {
  int pass_size;
  int choose;

  std::cout << "Введите размер пароля:";
  std::cin >> pass_size;

  pass_gen(pass_size);

  return 0;
}
