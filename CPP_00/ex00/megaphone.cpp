#include <iostream>

int main(int argc, char **argv){
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        for (int i = 1; i < argc; i++)
        {
            std::string buf = argv[i];
            for (int j = 0; j < strlen(argv[i]); j++)
                std::cout << (char)toupper(buf[j]);
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}