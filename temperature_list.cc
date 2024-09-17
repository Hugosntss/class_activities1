#include <iostream>
using namespace std;

int main() {
    int temperature_list;
    cout << "How many temperatures would you like to enter? ";
    cin >> temperature_list;

    double temperatures[temperature_list];
    double total_temperatures = 0.0;

    cout << "Enter the temperatures: " << endl;
    for (int i = 0; i < temperature_list; i++) {
        cin >> temperatures[i];
        total_temperatures += temperatures[i];
    }

    double average = total_temperatures / temperature_list;
    cout << "The average temperature is: " << average << endl;

    return 0;
}
