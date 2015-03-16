#include <stdio.h>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
void fun(char *s)
{
    int i = 0, j = 0;
    while(s[i] == ' ')
        i++;
    s[j++] = s[i];
    i = strlen(s) - 1;
    while(s[i] == ' ')
        i --;
    s[++i] = '\0';
    i = 0;
    while(s[i] != '\0')
    {
        while(s[i] == ' ')
        i ++;
        if(s[i] != '\0' && s[i - 1] == ' '&& s[i-2] == ' ')
        {
            s[j++] = ' ';
        }
        s[j++] = s[i++];
    }
    s[i] ='\0';
}
int main(int argc, const char *argv[])
{
    char s[] = "  aaac  de    ffff  !";
    fun(s);
    cout << s << endl;
    return 0;
}
















