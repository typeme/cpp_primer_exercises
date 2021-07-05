#include <iostreams>
#include <string>
using namespace std;

class Screen {
private:
    unsigned height = 0;
    unsigned weight = 0;
    unsigned cursor = 0;
    string contents;
};