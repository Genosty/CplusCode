#include <iostream>
#include <vector>

namespace first{
    int x = 99;
}
int main (){
    // using namespace std;
    using std::string;

    typedef std::vector<std::pair<std::string, int>> pairlist_t; //_t ofr the name convention of typedefs.
    pairlist_t xxx;

    std::cout << "i likje it" << '\n';
    std::cout << " yeeessss" << std::endl;
    int x; //decleration
    x = 7;
    std::cout << x*x << "\n";
    int age = 27;
    std:: string name = "Genotsy";
    string LastName = "lastname";
    std::cout << "your name is " << name << " and your age is: " << age << " year old";

    return 0;
}
