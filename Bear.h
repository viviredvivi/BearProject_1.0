#ifndef BEAR_H
#define BEAR_H

#include <string>
#include <vector>

class Bear 
{

private:
        std::string English_name;
        std::string bear_species;
        double max_length;
        int max_weight;

    public:
        Bear();
        Bear(std:: string English_name_val, std::string bear_species_val, double max_length_val, int max_weight_val) {
        English_name = English_name_val;    
        bear_species = bear_species_val;
        max_length = max_length_val;
        max_weight = max_weight_val;
        }
        void display_bear() const;
        void display_genus_ursus() const;
        char get_selection();
        void leave_for_second_menu();
        void quit_app();
        void unknown_input();
        void display_ursidae();
        
        void display_first_menu();
        void display_second_menu();
    
};

#endif // BEAR_H
