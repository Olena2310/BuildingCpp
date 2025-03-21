#include <iostream>
#include  "Flat.h"
int main()
{
    Flat flat1("Apricot", 2, 56);
    std::cout << flat1 << std::endl; 
    flat1.removeRoom(20);
    std::cout << flat1 << std::endl; 

    flat1.removeRoom(10);

    std::cout << "Comparison with Apricot street: "
        << (flat1 == "Apricot" ? "True" : "False") << std::endl;  

    std::cout << "Comparison with Peach street: "
        << (flat1 == "Peach" ? "True" : "False") << std::endl;   

    Flat flat2("Apricot", 3, 80);
    std::cout << "Comparison with another flat: "
        << (flat1 == flat2 ? "True" : "False") << std::endl;     

  
    
}
