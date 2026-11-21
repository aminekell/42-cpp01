#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Argument Most Be Like This "<< av[0] << " [filename] [s1] [s2]" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if(s1.empty() || s2.empty() || filename.empty())
    {
        std::cout << "[s1 And s2 And Filename Canno't Be Empty !!]" << std::endl;
        return 1;
    }
    std::ifstream in_file(filename.c_str());
    if(!in_file.is_open())
    {
        std::cout << "[ Error!! Problem With Open The In_file :( ]" << std::endl;
        return 1;
    }
    std::string outfile = filename + ".replace";
    std::ofstream out_file(outfile.c_str());
    if(!out_file.is_open())
        {
            in_file.close();
            std::cout << "[ Error !! Problem With Open Out_file :( ]" << std::endl; 
            return 1;
        }
    std::string line;
    while(std::getline(in_file, line))
    {
         size_t i = 0;
         while((i = line.find(s1 , i)) != std::string::npos)
         {
            line.erase(i, s1.length());
            line.insert(i, s2);
            i += s2.length();
         }
        out_file << line;
        if(!in_file.eof())
            out_file << "\n";
    }
    in_file.close();
    out_file.close();
    return 0;
}