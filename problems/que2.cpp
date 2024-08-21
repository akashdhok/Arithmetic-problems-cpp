// 2. Write a program to accept `int side` of a Square from user. Calculate `int area` and `int perimeter` of square. Print the `area` and `perimeter` on the console.
//     ```
//         Formula to calculate area of square -> side * side
//         Formula to calculate area of square -> 4 * side
//     ```
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter side here : " << "\n";
    int side;
    cin >> side;
    int area = side * side ;
    int perimeter = 4 * side;
    cout << "The area of square = " << area << "\n";
    cout << "Perimeter of square = " << perimeter << "\n";
    return 0;
}