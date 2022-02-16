#include "Bear.h"
#include <iostream>
#include <vector>
#include <string>


void Bear::display_bear() const {
    std::cout << "You've chosen " << English_name << ". Its species is " << bear_species << ". Its maximum length can reach: " << max_length << " m ,and its maximum weight up to " << max_weight << " kg." << std::endl; 
};







