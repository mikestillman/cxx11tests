#include <iostream>
#include <thread>

int main()
{
  std::thread th([]() {
      std::cout << "hello from thread\n";
    });
  std::cout << "hello from main\n";
  th.join();
  return 0;
}
