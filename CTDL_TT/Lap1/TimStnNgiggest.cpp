
#include <iostream>
using namespace std ;
int main()
{
    double m;
    std::cin >> m;
 
    double sum = 0.0;
    int i = 1;
    while (true)
    {
        sum += 1.0 / i;
        if (m < sum)
        {
            break;
        }
        i++;
 
    }
    if(i == 1)
    {
        std::cout << "NULL";
    }
    else{
        std::cout << i - 1;
    }
 
    return 0;
}