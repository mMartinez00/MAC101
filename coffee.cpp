#include <iostream>
using namespace std;

int main () {
    int coffeeBronx = 1;
    int coffeeBrooklyn = 2;
    int temp;

    cout << "coffeeBronx is " << coffeeBronx << " & coffeeBrooklyn is " << coffeeBrooklyn << endl;

    /* Write code that will make the variable coffeeBronx the value of coffeeBrooklyn 
    & the variable of coffeeBrooklyn the value of coffeeBronx. */
    temp = coffeeBronx;
    coffeeBronx = coffeeBrooklyn;
    coffeeBrooklyn = temp;


    cout << "CHANGED VALUES: " << endl << "coffeeBronx is " << coffeeBronx << " & coffeeBrooklyn is " << coffeeBrooklyn << endl;




    return 0;


  
}