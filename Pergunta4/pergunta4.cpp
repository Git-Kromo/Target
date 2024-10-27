#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double sp{67836.43}, rj{36678.66}, mg{29229.88}, es{27165.48},
      outros{19849.53};
  double total = sp + rj + mg + es + outros;

  cout << fixed << setprecision(2);

  cout << "Percentuais Aproximados:" << '\n';
  cout << "SP -> " << sp / total * 100 << '%' << '\n';
  cout << "RJ -> " << rj / total * 100 << '%' << '\n';
  cout << "MG -> " << mg / total * 100 << '%' << '\n';
  cout << "ES -> " << es / total * 100 << '%' << '\n';
  cout << "Outros -> " << outros / total * 100 << '%' << '\n';
  return 0;
}
