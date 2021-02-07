#include <iostream>

int Policz(int a, int b)
{
    return (a+b)*(a-b);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
<<<<<<< HEAD
    std::cout << "W pierwszym branchu: 2*3 = " << Policz (2, 3) << std::endl;
=======
    std::cout << "W pierwszym branchu: (5+3)*(5-3) = " << Policz (5, 3) << std::endl;
>>>>>>> 03
    return 0;
}
