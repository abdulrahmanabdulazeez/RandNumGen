#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    cout << "RANDOM NUMBER GENERATOR!!!\n\n\n";
    srand(time(NULL) );
    int a,i,j,input;
    string teryes;
    cout << "Input Number Of Random Numbers you want to generate: ";
    cin >> input;
    for (int i=0; i < input; i++){

            for (a=0; a <= i; a++){

    }
            j=rand();
            cout << "Random Number " << a << " : " << j << endl;
    }
    cout << "\n\n  " << a << " Random number(s) generated\n\n\n";
    cout << "Type yes to generate or no to terminate!";
    cin >> teryes;
    if (teryes == "yes"){
        main();
    }
    else if (teryes == "no"){
        return 0;
    }
    else {
        //return 0;
    }

return 0;
}
string AnyProgrammer;
string unRelated= "posts anything unrelated to programming";
string SLAP;

If (AnyProgrammer == unRelated){
return SLAP;
}😜😎
