#include <iostream>
#include "Train.h"
#include "Cargo.h"
#include "Car.h"
#include "Plane.h"
#include "string"
#include "Keeper.h"
#include <exception>
void main(void)
{
    try
    {
        Keeper four;

        std::cout << "Enter command:" << std::endl;
        std::cout << "add_car" << std::endl;
        std::cout << "add_plane" << std::endl;
        std::cout << "add_train" << std::endl;
        std::cout << "delete" << std::endl;
        std::cout << "input_from_file" << std::endl;
        std::cout << "output_to_file" << std::endl;
        std::cout << "display" << std::endl;
        std::cout << "exit" << std::endl;
        std::cout << "help" << std::endl << std::endl;
        while (1)
        {
            std::cout << "command>";
            std::string command;
            std::cin >> command;
            if (command == "add_car")
                four.add(1);

            else if (command == "add_plane")
                four.add(3);

            else if (command == "add_train")
                four.add(2);
            else if (command == "delete")
            {
                std::cout << "Enter index of element you want to delete";
                int index;
                std::cin >> index;
                four.remove(index);
            }
            else if (command == "input_from_file")
                four.InputFile();
            else if (command == "output_to_file")
                four.OutputFile();
            else if (command == "display")
                four.display();
            else if (command == "help")
            {
                std::cout << "Enter command:" << std::endl;
                std::cout << "add_car" << std::endl;
                std::cout << "add_plane" << std::endl;
                std::cout << "add_train" << std::endl;
                std::cout << "delete" << std::endl;
                std::cout << "input_from_file" << std::endl;
                std::cout << "output_to_file" << std::endl;
                std::cout << "display" << std::endl;
                std::cout << "exit" << std::endl;
                std::cout << "help" << std::endl;
            }
            else if (command == "exit")
                return;
            else std::cout << "unknown command";
        }
    }
    catch (const FileInputException& e) {
        std::cerr << "File input error: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return;
}
