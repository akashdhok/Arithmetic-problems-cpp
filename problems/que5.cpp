// 5. Write a program that reads in the radius and length of a cylinder and computes the area and volume using the following formulas:
//     ```
//         area = radius * radius * π
//         volume = area * length

//         value of π (PI) is  3.14
//     ```
//     ```
//         Sample Run
//         INPUT
//         Enter the radius of a cylinder: 5.5
//         Enter the length of a cylinder: 12
        
//         OUTPUT
//         The area is 95.0331
//         The volume is 1140.4
# include<iostream>
using namespace std;
int main()
{
    cout << "radius of cylinder" << "\n";
    float radius;
    cin >> radius;
    cout << "length of cylinder" << "\n";
    float length;
    cin >> length;
  float area = radius * radius * 3.14;
  float volume = area * length;
  cout << "The area of cylinder is " << area << "\n";
  cout << "The volume of cylinder is " << volume << "\n";
  return 0;
}