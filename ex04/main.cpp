#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if(argc != 4)
    {
		std::cerr << "Wrong parameters\nRight usage : <filename> <s1> <s2>\n";
        return (1);
    }
	std::string line;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if(s1.empty())
	{
		std::cerr <<"Error: s1 cannot be empty\n";
		return 1;
	}

    //ouvrir le fichier
    std::ifstream inputFile(argv[1]);
    if(!inputFile.is_open())
    {
        std::cerr << "Error: file: " << argv[1] << " cannot be openned\n";
        return (1);
    }

    //creer le fichier de sortie
    std::string outputFilename = std::string(argv[1]) + ".replace";
    

    std::ofstream outputFile(outputFilename.c_str());
    if(!outputFile.is_open())
    {
        std::cerr << "Error cannot create file" << outputFilename << "\n";
        return 1;
    }



    while(std::getline(inputFile, line))
    {
        size_t pos = 0;
        std::string result;

        while (pos < line.length())
        {
            size_t found = line.find(s1,pos);
            if(found != std::string::npos)
            {
                result += line.substr(pos, found - pos);
                result += s2;
                pos = found + s1.length();
            }
            else
            {
                result += line.substr(pos);
                break;
            }
        }
        outputFile << result << "\n";
    }
    inputFile.close();
    outputFile.close();

    return 0;

}