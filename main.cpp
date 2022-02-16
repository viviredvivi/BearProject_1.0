#include <iostream>
#include <string>
#include <vector>
#include "Bear.h"

void display_first_menu() {
        std::cout << "\n********we*love*bears********we*love*bears********we*love*bears********we*love*bears********\n" << std::endl;
        std::cout << "Choose one bear, enter a letter and see!" << std::endl;
        std::cout << "A - asian black bear" << std::endl;
        std::cout << "B - brown bear" << std::endl;
        std::cout << "C - polar bear" << std::endl;
        std::cout << "D - american black bear" << std::endl;
        std::cout << "E - spectacled bear" << std::endl;
        std::cout << "F - sloth bear" << std::endl;
        std::cout << "G - giant panda" << std::endl;
        std::cout << "H - sun bear" << std::endl;
        std::cout << "S - I want to know more about bears – take me to the next menu!" << std::endl;
        std::cout << "\n********we*love*bears********we*love*bears********we*love*bears********we*love*bears********\n" << std::endl;
        std::cout << "\nEnter your choice: ";
}

char get_selection() {
    char selection {};
    std::cin >> selection;
    return toupper(selection);
}


void quit_app() {
    std::cout << "Thank you beary much, see you next time!" << std::endl;
}

void leave_for_second_menu() {
    std::cout << "I want to know more about bears – take me to the next menu!" << std::endl;
}



void unknown_input() {
    std::cout << "Unknown input, please read the menu again and try one more time:)" << std::endl;
}


 std::vector<std::string> genus_ursus {"Asian black bear", "American black bear", "Brown bear", "Polar bear"};
    
    void display_genus_ursus() {
    for (auto b : genus_ursus)
        std::cout << b << std::endl;
    };

void display_second_menu() {
        std::cout << "\n********we*love*bears********we*love*bears********we*love*bears********we*love*bears********\n" << std::endl;
        std::cout << "\nA – Learn more about bears (ursidae family)." << std::endl;
        std::cout << "B - Display list of all genus ursus members." << std::endl;
        std::cout << "C - Display info about only member of genus helarctos." << std::endl;
        std::cout << "D - Display info about only member of genus melursus." << std::endl;
        std::cout << "E - Display info about only member of genus ailuropoda." << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cout << "\nEnter your choice: ";
}

void display_ursidae() {
    std::cout << "Ursidae, commonly know as bears, are carnivoran mammals. They are classified as caniforms, or doglike carnivorans. Although only eight species of bears are extant, they are widespread, appearing in a wide variety of habitats throughout the Northern Hemisphere and partially in the Southern Hemisphere. Bears are found on the continents of North America, South America, Europe, and Asia. Common characteristics of modern bears include large bodies with stocky legs, long snouts, small rounded ears, shaggy hair, plantigrade paws with five nonretractile claws, and short tails." << std::endl;
}

int main() {
    
    Bear asian_black_bear {"Asian black bear", "Ursus thibetanus", 1.90, 200};
    Bear american_black_bear {"American black bear", "Ursus americanus", 2.41, 409};
    Bear brown_bear {"Brown bear", "Ursus arctos", 3.00, 751};
    Bear polar_bear {"Polar bear", "Ursus maritimus", 3.00, 1002};
    Bear spectacled_bear {"Spectacled bear", "Tremarctos ornatus", 2.00, 200};
    Bear giant_panda {"Giant panda", "Ailuropoda melanoleuca", 1.90, 160};
    Bear sloth_bear {"Sloth bear", "Melursus ursinus", 1.90, 192};
    Bear sun_bear {"Sun bear", "Helarctos malayanus", 1.40, 80};
    
  /*  std::vector<Bear> genus_ursus;
    genus_ursus.push_back(American_black_bear);
    genus_ursus.push_back(Asian_black_bear);
    genus_ursus.push_back(Brown_bear);
    genus_ursus.push_back(Polar_bear);*/
    
    
   
    
   /* Sun_bear.display_bear_weight();*/
    
    std::cout << "Hello! Welcome to my educational app! Do you like bears? I sure do! So let me show you the fascinating facts about these wonderful creatures. " << std::endl << "Let's get started!" << std::endl; 
    
    char selection {};
    
    
    do {
        display_first_menu();
        selection = get_selection();
        switch (selection) {
            case 'A': 
                asian_black_bear.display_bear(); 
                break;
            case 'B': 
                brown_bear.display_bear();
                break;
            case 'C':
                polar_bear.display_bear();
                break;
            case 'D':
                american_black_bear.display_bear();
                break;
            case 'E':
                spectacled_bear.display_bear();
                break;
            case 'F':
                sloth_bear.display_bear();
                break;
            case 'G':
                giant_panda.display_bear();
                break;
            case 'H':
                sun_bear.display_bear();
                break;
            case 'S':
                leave_for_second_menu();
                break;
            default:
                unknown_input();
        }
    } while (selection != 'S');
    std::cout << std::endl;


    do {
        display_second_menu();
        selection = get_selection();
        if (selection == 'A') 
            display_ursidae(); 
        else if (selection == 'B')
            display_genus_ursus();
        else if (selection == 'C')
                sun_bear.display_bear();
        else if (selection == 'D')
                sloth_bear.display_bear();
        else if (selection == 'E')
                giant_panda.display_bear();
        else if (selection == 'Q')
                quit_app();
        else
                unknown_input();
        }
    while (selection != 'Q');
    std::cout << std::endl;
    
    
    

return 0;
}