#include <iostream>

int main() {

  bool isMajor = false;
  int age = 24;
  char nameStartChar = 'i';

  if (age >= 18){
    std::cout << "Salam aleykoum! \n" <<  "Ahlan Wa Sahlan you're Major"
      << " You're name start with " << nameStartChar << " chars" << " with size of " << sizeof(nameStartChar) << " byte(s) \n";
  } else {
    std::cout << "You're so little \n";
  }

  // add
  std::cout << "Addition result of 12+34 = " ;
  int addResult = 12+34;
  //int res = add(12, 24);
  std::cout << addResult  << "\n";

  // hexadecimal integral
  int zDecimal = 0xA;
  std::cout << "The value of zDecimal hexa is " <<  zDecimal << "\n";

  // floting points
  double PI = 3.14;
  double dHexa = 3.14e10;
  std::cout << "The value of PI is " << PI << " and the Value of dHexa is " << dHexa << "\n";


  // unsigned long type
  unsigned long int x = 429412386;
  std::cout << " the value of unisgned long integer variable is " << x << "\n";

  // init a var with there types
  int xAbs = 123;
  int yAbs { xAbs };
  int zAbs = { xAbs };

  std::cout << "The value of xAbs, yAbs, zAbs => " << xAbs << ", " << yAbs << ", " << zAbs << "\n"
    << "with there respecive sizes" << sizeof(xAbs) << " byte(s), " << sizeof(yAbs) << "byte(s), "
    << sizeof(zAbs) << "byte(s)\n"  ;

  return 0;
}

int add(int a , int b){
  int result = a+b;

  std::cout << "result of a + b " << a << "+" << b << result;

  return result;
}
