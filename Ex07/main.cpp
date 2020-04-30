#include <iostream>
#include <fstream>

int main(int argc, char const **argv) {
    std::string s1;
    std::string s2;
    std::string filename;
    std::string output;
    std::string buffer;
    if (argc == 4) {
        s1 = argv[2];
        s2 = argv[3];
        filename = argv[1];
        output = filename + ".replace";
        std::ifstream   readFile(filename.c_str());
        if (readFile.fail())
        {
            std::cout << "Error open" << std::endl;
            return(0);
        }
        std::ofstream    outFile(output.c_str());
        if (outFile.fail())
        {
            std::cout << "Error creat" << std::endl;
            return(0);
        }
        while (std::getline(readFile, buffer))
        {
            while (buffer.find(s1) != std::string::npos)
            {
                buffer.replace(buffer.find(s1), s1.length(), s2);
            }
            outFile << buffer << std::endl;
        }
    }
    else
    {
        std::cout << "usage: ./a.out file s1 s2" << std::endl;
    }
    return (0);
}