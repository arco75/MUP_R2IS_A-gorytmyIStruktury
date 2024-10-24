#include <iostream>

int main()
{
    short nominaly[9]={500,200,100,50,20,10,5,2,1};
    int reszta;
    int pozycja=0;

    std::cout << "Algorytm wydawania reszty!\n\n Podaj reszte do wydania:";
    std::cin >> reszta;

    do{
        if(nominaly[pozycja]<=reszta){    //co jeśli reszta jest większa od wybranego nominału?
            std::cout<<nominaly[pozycja]<<std::endl;
            reszta-=nominaly[pozycja];
        }
        else
        {
            pozycja++;                          //Co jeśli reszta jest mniejsza od danego nominału?
        };
    }while(reszta!=0);

return 0;
}
