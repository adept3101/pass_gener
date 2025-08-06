#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <ios>
#include <iostream>

char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b',
              'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'o',
              'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
              'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
              'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void pass_gen(int size) {

  char *pass = new char[size + 1];
  std::ofstream out("pass.txt", std::ios::app);
  for (int i = 0; i < size; i++) {
    pass[i] = arr[rand() % 62];
    std::cout << pass[i];
  }
  pass[size] = '\0';

  out << pass << "\n";
  out.close();

  std::cout << std::endl;
  delete[] pass;

  return;
}

void arr_pass(int count, int size) {
  srand(time(NULL));
  char passwords;
  for (int i = 1; i < count; i++) {
    pass_gen(size);
  }

  return;
}

int main() {

  std::ofstream out;
  int pass_size;
  int choose;
  int count;

  std::cout << "Введите размер пароля:";
  std::cin >> pass_size;

  // char *res = pass_gen(pass_size);

  // std::cout << res << std::endl;

  // char *res2 = arr_pass(count, pass_size);

  // std::cout << res2 << std::endl;
  std::cout << "Введите количество паролей:";
  std::cin >> count;

  pass_gen(pass_size);
  arr_pass(count, pass_size);

  return 0;
}
