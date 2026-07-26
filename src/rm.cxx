#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char** argv)
{
cout<< "WARNING: rm is still on progress, please be careful"
<< "\n";

    if (argc < 2)
    {
        cerr << "rm: missing operand\n";
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        if (!fs::exists(argv[i]))
        {
            cerr << "rm: " << argv[i]
                 << ": No such file or directory\n";
            continue;
        }

        fs::remove_all(argv[i]);
    }

    return 0;
}
