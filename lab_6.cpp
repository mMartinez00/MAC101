#include <iostream>
using namespace std;

int main() {
    string mta_stops[22] = { "Flushing-Main St", "Mets-Willets Point", "111 St", "103 St-Corona Plaza", "Junction Blvd",
        "90 St-Elmhurst Av", "82 St-Jackson Hts", "74 St-Broadway", "69 St", "61 St-Woodside", "52 St", "46 St-Bliss St", "40 St-Lowery St", "33 St-Rawson St", "Queensboro Plaza", "Court Sq", "Hunters Point Av", "Vernon Blvd-Jackson Av", "Grand Central-42 St", "5 Av", "Times Sq-42 St", "34 St-Hudson Yards"
    };

    int array_size = sizeof(mta_stops) / sizeof(mta_stops[0]);

    for(int i = 0; i < array_size; i++){
        cout << mta_stops[i] << endl;
    };

    return 0;
}