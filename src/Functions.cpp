#include <iostream>
#include "Functions.hpp"
#include "Ttimer.hpp"
int fibonacci(int how_many)
{
    if(how_many ==0)
        return 0;
    if(how_many==1)
        return(1);
    return fibonacci(how_many-2)+fibonacci(how_many-1);
}
void bubblesort(int tab[],int how_many){
    //Specjalnie to sortowanie bąbelkowe jest nieefektywne
    for(int i=0;i<how_many-1;i++){
        for(int j=0;j<how_many-i-1;j++){
            if(tab[j]>tab[j+1]){
        int tmp=tab[j];
        tab[j]=tab[j+1];
        tab[j+1]=tmp;
            }
        }
    }
}
bool check_answer(int ans)
{
    if(!isdigit(ans)){
        if(ans>0&& ans<4)
            return true;
    }
    std::cout<<"Error, please try again."<<std::endl;
    return(false);
}

