#include <iostream>
#include <iomanip>
#include <ctime>
#include "Main.hpp"
#include "Ttimer.hpp"
#include "Functions.hpp"
Ttimer::Ttimer()
{
    std::cout<<"This is constructor of the timer."<<std::endl;
    name_of_the_timer=get_name();
    type = get_type();
    timer_start=std::chrono::system_clock::now();
}
Ttimer::Ttimer(std::string name, type_of_clock new_type)
{
    name_of_the_timer=name;
    type =new_type;
    timer_start=std::chrono::system_clock::now();
}

void Ttimer::measure()
{
    std::string enum_types[]= {"Sorting", "Calculating", "Recurrency"};
std::chrono::system_clock::time_point end = std::chrono::system_clock::now(); 
std::cout<<enum_types[static_cast<int>(type)]<<" took: "<< std::chrono::duration_cast<std::chrono::microseconds>(end - timer_start).count()<< "us."<<std::endl;
}
void Ttimer::show_time()
{
    std::string enum_types[]= {"Sorting", "Calculating", "Recurrency"}; 
std::cout<<enum_types[static_cast<int>(type)]<<" took: "<< std::chrono::duration_cast<std::chrono::microseconds>(timer_stop-timer_start).count()<< "us."<<std::endl;
}


Ttimer::~Ttimer()
{
    std::cout<<"This is destructor of this timer "<<name_of_the_timer<<std::endl;
}
void Ttimer::reset()
{
    timer_start=timer_stop={};
}
void Ttimer::start()
{
    timer_start=std::chrono::system_clock::now();
}
void Ttimer::stop()
{
    timer_stop=std::chrono::system_clock::now();
}
std::string Ttimer::get_name(){
    char name[MAXLINE];
    std::cout<<"You are naming the timer."<<std::endl;
    std::cin.get(name,MAXLINE);
    std::cin.clear();
    std::cin.ignore(MAX_TRASH,'\n');
    return(name);
    }
type_of_clock Ttimer::get_type()
{
    std::cout<<"What do you want to measure with your timer?"<<std::endl;
    std::cout<<"Sorting(1),math problems(2),recurrency(3)"<<std::endl;
    std::cout<<"Please choose one from this options."<<std::endl;
    int ans =0;
    do{
    std::cin>>ans;
    std::cin.clear();
    std::cin.ignore(MAX_TRASH,'\n');
    }while(!check_answer(ans));
    type_of_clock new_type;
    if(ans==1){
        new_type= type_of_clock::Sorting;
    }
    if(ans==2){
        new_type = type_of_clock::Math;
    }
    if(ans==3){
        new_type = type_of_clock::Recurrency;
    }
    return(new_type);
    }
