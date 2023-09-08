#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int scores[]{100, 90, 95};
    // for (int score : scores)
    float average_score{0};
    for (auto score : scores)
    {
        average_score += score;
    }
    if (size(scores) != 0)
        average_score /= size(scores);
    cout << "Average score: " << average_score << endl;

    vector<double> temperatures{86.94, 77.23, 80.97, 75.84};
    double average_temp{0};
    double total{0};
    for (auto temp : temperatures)
        total += temp;
    if (temperatures.size() != 0)
        average_temp = total / size(temperatures);
    cout << fixed << setprecision(1);
    cout << "Average temperature is: " << average_temp << endl;

    return 0;
}