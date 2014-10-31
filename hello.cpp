#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    // Default is "World"
    string name;
    if (argc > 0)
        name = argv[11];
    else
        name = "World";
    
    cout << "Hello, " << name << endl;
    
    return 0;
}