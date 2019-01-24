#include <iostream>
#include <vector>
#include <cmath>


  

std::ostream& operator<<(std::ostream& os, const std::vector<int> &input)
{
    for (auto const& i: input) {
        os << i << " ";
    }
    return os;
}

std::vector<int> aleatoire(const int &x0 ,const  long &a, const int &c, const long &m, const int &taille){
        std::vector<int> x;
        std::cout << taille << "\n";
        x.resize(taille);
        x[0] = x0;
        for (int i = 1; i<x.size() ; ++i){
            x[i] = (a*x[i-1] + c) % m;
        }
//        for (int i = 0; i<x.size() ; ++i){
//            x[i] = 1.0* x[i]/m;
//        }
        return x;
}

int main()
{

    std::cout << aleatoire(1,13,0,31,10) << std::endl << std::endl;
    std::cout << aleatoire(1,13,0,31,50) << std::endl;
    std::cout << " ******************" << std::endl;
    std::cout << aleatoire(1,1229,1,2048,10) << std::endl << std::endl;
    std::cout << aleatoire(1,1229,1,2048,50) << std::endl;
    std::cout << " ******************" << std::endl;
    std::cout << aleatoire(1,1597,51749,244944,10) << std::endl<<std::endl;
    std::cout << aleatoire(1,1597,51749,244944,50) << std::endl;
    std::cout << " ******************" << std::endl;
    std::cout << aleatoire (1,pow(2,16)+3,0,pow(2,31),10) << std::endl<<std::endl;
    std::cout << aleatoire (1,pow(2,16)+3,0,pow(2,31),50) << std::endl<<std::endl;
    




    return 0;
}
