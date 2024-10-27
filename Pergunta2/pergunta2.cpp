#include <iostream>

using namespace std;

int main() {
  int fn{0}, f1{1}, f2{1}, number;
  cout << "Informe um número: ";
  cin >> number;

  if (number == 1 || number == 0) {
    cout << "O número pertence a sequência." << '\n';
    return 0;
  }

  while (fn < number) {
    fn = f1 + f2;
    f2 = f1;
    f1 = fn;
  }

  if (fn == number) {
    cout << "O número informado pertence a sequência." << '\n';
  } else {
    cout << "O número informado não pertence a sequência." << '\n';
  }
  return 0;
}
