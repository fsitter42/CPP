#include <climits>
#include <cmath>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

/*

struct Test {
public:
  static int _construct;
  static int _bomb;
  Test() {
    if (_construct > _bomb)
      throw Bomb();
    _construct++;
  };
  
  ~Test() {};
  struct Bomb : public std::exception {
  public:
    const char *what() const throw() { return "BOOM!!!!!!"; }
  };
  Test &operator=(const Test &other) {
    (void)other;
    throw Bomb();
  }
  Test(const Test &other) {
    (void)other;
    throw Bomb();
  }
};

int Test::_construct = 0;
int Test::_bomb = 100;

int main()
{



try {
    Test::_construct = 0;
    Array<Test> j(5);
    Array<Test> k;
    Test::_construct = 0;
    Test::_bomb = 3;
    k = j;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
      Array<Test> h(5);
      Array<Test> i;
      Test::_construct = 0;
      Test::_bomb = 3;
  
      i = h;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }

}
*/
