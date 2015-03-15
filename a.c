#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    ifstream &tools::openfileRead(ifstream &os, const string &filename)
    {
        os.close();
        os.clear();
        os.open(filename.c_str());
        return os;
    }
void makeUFT8ToUint32(xonst std::string &s, std::vector<uint32_t> &vec)
{
    int len;
    for(size_t i = 0; i != s.size(); ++ i)
    {
        len = getUTF8Len(s[i]);
        uint_t32 ut = (unsigned char)s[i];
        len --;
        while(len > 1)
        {
            len --;
            ut = (ut << 8) | ()s[++i];
        }
        vector.push_back(ut);
    }
}



















    return 0;
}
