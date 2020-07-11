#include <iostream>
#include <fstream>

#include "rapidjson/prettywriter.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cerr << "ERROR: You provided too few command line arguments" << std::endl;
        return 0;
    }
    else
    {
        rapidjson::StringBuffer s;
        rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(s);
        writer.StartArray();
        for (size_t i = 0; i < argc; i++)
        {
            std::cout << argv[i] << std::endl;
            writer.String(argv[i]);
        }
        writer.EndArray();
        writer.EndObject();
        std::ofstream fout("arg.txt");
        fout << s.GetString();
        fout.close();
    }
    return 0;
}
