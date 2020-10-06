// Recursive  approch in C++
// Author: vatsal-verma

#include<iostream>

int fizzz(int n){
    if (n==101)
        return 0;
    if (n%3 == 0 && n%5 == 0)
        std::cout<<"FizzzBuzz ";
    else if (n%5 == 0)
       std::cout<<"Buzz ";
    else if (n%3 == 0)
       std::cout<<"Fizzz ";
    else
        std::cout<<n<<" ";
    return fizzz(n+1);
}

int main(){
    fizzz(1);
    return 0;
}
