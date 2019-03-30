#ifndef TTIMER
#define TTIMER
#include "Main.hpp"
#include <iostream>
#include <chrono>
class Ttimer{
private:
    std::string name_of_the_timer;
    std::chrono::system_clock::time_point timer_start;
    std::chrono::system_clock::time_point timer_stop;
    type_of_clock type;
public:
    Ttimer();
    Ttimer(std::string name, type_of_clock new_type);
    ~Ttimer();
    std::string get_name();
    type_of_clock get_type();
    void show_time();
    void measure();
    void start();
    void stop();
    void reset();
};
#endif
