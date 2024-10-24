#include <iostream>

long silnia(int n){
    int wynik=1;
    for(i = 1; i <= n; i++)
        wynik = wynik * i;
return wynik;
}

long silniaRekurencyjnie(int n){

    if(n>1)
        return n*silniaRekurencyjnie(n-1);
    else
        return 1;

}

//___________________________________
int main(){


//n! = n * (n-1)!
// 1! =1
// 5! = 1,2,3,4,5

std::cout<<silnia(3)<<std::endln;
std::cout<<silniaRekurencyjnie(3)<<std::endln;;


return 0;
}