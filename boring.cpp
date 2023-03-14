#include <iostream>

void getUserInput(int64_t& num1, int64_t& num2, char& mOperator);
auto result(int64_t& num1, int64_t num2, char& mOperator);
int main() {

  int64_t num1 {};
  int64_t num2 {};
  char mOperator;

  getUserInput(num1, num2, mOperator);
  //auto mresult = 3;
  auto mresult {result(num1, num2, mOperator)};

  std::cout << mresult;
  return 0;
}

void getUserInput(int64_t& num1, int64_t& num2, char& mOperator) {
  std::cout << "Enter first number: ";
  std::cin >> num1;

  std::cout << "Enter Operator: ";
  std::cin >> mOperator;

  std::cout << "Enter second Number: ";
  std::cin >> num2;
}

double result(int64_t& num1, int64_t num2, char& mOperator) {

  switch(mOperator) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '/':
      if (num2 == 0) {
        std::cout << "Divide by Zero";
        break;
      }
      return num1 / num2;
    case '*':
      return num1 * num2;
  }
}

