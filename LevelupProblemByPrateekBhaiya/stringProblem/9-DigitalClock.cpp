#include <string>
using namespace std;

string convert_to_digital_time(int minutes)
{
    // complete this function
    string hr = to_string(minutes / 60);
    int rem = minutes % 60;
    string mm;
    if (rem == 0)
    {
        mm = "00";
    }
    else if (rem > 0 and rem < 10)
    {
        mm = "0" + to_string(rem);
    }
    else
    {
        mm = to_string(rem);
    }
    string res = hr + ":" + mm;
    return res;
}