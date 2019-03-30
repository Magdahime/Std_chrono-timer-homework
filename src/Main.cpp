#include "Ttimer.hpp"
#include "Functions.hpp"
#include "Ttimer.hpp"
void test1(void);
void test2(void);
void test3(void);
int main (void){
    //test1();
    //test2();
    test3();
    return(0);
}
void test1()
{
    std::cout<<"Start test1:Bubblesort and fibonacci."<<std::endl;
    int tab[]={1,89,67,23,44,19,14,3,97,64};
    std::cout<<"SORTOWANIE BĄBELKOWE"<<std::endl;
    std::cout<<"Przed sortowaniem:"<<std::endl;
    for(int i=0; i<10;i++){
        std::cout<<"["<<i+1<<"] "<<tab[i]<<std::endl;
    }
    bubblesort(tab, 10);
    std::cout<<"Po sortowaniu:"<<std::endl;
    for(int i=0; i<10;i++){
        std::cout<<"["<<i+1<<"] "<<tab[i]<<std::endl;
    }
    std::cout<<"Wciśnij dowolny klawisz, aby kontynuować:"<<std::endl;
    std::cin.get();
    long long int fib = fibonacci(42);
    std::cout<<"Fibonacci(42)= "<<fib<<std::endl;
    std::cout<<"End of the test."<<std::endl;
}
void test2()
{
    std::cout<<"Start test2: Making timers"<<std::endl;
    Ttimer timer;
    timer.measure();
    std::cout<<"End of the test."<<std::endl;
}
void test3(){
     std::cout<<"Start test3:Measuring time."<<std::endl;
    int tab[]={1,89,67,23,44,19,14,3,97,64};
    std::cout<<"Bubblesort for 10 int array: "<<std::endl;
    Ttimer timer1("Sort",type_of_clock::Sorting);
    bubblesort(tab, 10);
    timer1.measure();
    std::cout<<"Calculating 42th of Fibonacci number."<<std::endl;
    Ttimer timer2("Recur", type_of_clock::Recurrency);
    long long int fib = fibonacci(42);
    timer2.measure();
    std::cout<<"Fibonacci(42)= "<<fib<<std::endl;
    std::cout<<"End of the test."<<std::endl;
}
