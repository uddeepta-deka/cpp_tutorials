#include <iostream>

/* When you pass data into a function, it is passed-by-value
Whatever changes you make to the parameter in the function
does NOT affect the argument that was passed in.*/

using namespace std;

/* const double PI{3.14159};

double calc_area_circle(double r=1.0); // Function prototype
double calc_volume_cylinder(double r=1.0, double h=1.0);
void area_circle();
void volume_cylinder();

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_area_circle(double r)
{
    return PI * r * r;
}

double calc_volume_cylinder(double r, double h)
{
    return calc_area_circle(r) * h;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is: " << calc_volume_cylinder(radius, height) << endl;
}
*/

// Illustrating pass by reference in a function
void print(const vector<int> &v);
int main()
{
    vector<int> data{1, 2, 3, 4, 5};
    print(data);
    return 0;
}

void print(const vector<int> &v)
{
    for (auto num : v)
        cout << num << endl;
}
