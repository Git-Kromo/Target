#include <iostream>

using namespace std;

int main() {
  int indice{13};
  int soma{0};
  int k{0};

  while (k < indice) {
    k += 1;
    soma += k;
  }
  cout << soma;
  return 0;
}
