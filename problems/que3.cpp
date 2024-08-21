// 3. Write a program to accept `int length` and `int breadth` of rectangle from user. Calculate `int area` and `int perimeter` of rectangle. Print the `area` and `perimeter` on the console. 
//     ```
//         Formula to calculate area of square -> length * breadth
//         Formula to calculate area of square -> 2 * (length + breadth)
#include<iostream>
using namespace std;
int main()
{
    cout << "Enter length of rectangle here" << "\n";
    int length;
    cin >> length;
    cout << "Enter breath of rectangle here" << "\n";
    int breath;
    cin >> breath;
    int area = length * breath;
    int perimeter = 2 * (length * breath);
    cout << "The area of rectangle = " << area << "\n";
    cout << "The perimeter of rectangle = " << perimeter << "\n";
    return 0;
}