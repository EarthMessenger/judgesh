#include <iostream>

void dfs()
{
  dfs();
}

int main()
{
  int a, b;
  std::cin >> a >> b;
  if (a == 0) a = 1;
  if (a < 0) dfs();
  if (a + b == 0) {
    while (true) ;
  }
  std::cout << a + b << std::endl;
  std::cerr << "Hello from stderr" << std::endl;
}
