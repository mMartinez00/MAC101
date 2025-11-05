#include <iostream>
using namespace std;

int main() {
    string mta_stops[9] = {
        "90 St-Elmhurst Av", "82 St-Jackson Hts", "74 St-Broadway", "69 St", "61 St-Woodside", "52 St", "46 St-Bliss St", "40 St-Lowery St", "33 St-Rawson St"
    };

    int array_size = sizeof(mta_stops) / sizeof(mta_stops[0]);

    for(int i = 0; i < array_size; i++){
        cout << mta_stops[i] << endl;
    };

    return 0;
}