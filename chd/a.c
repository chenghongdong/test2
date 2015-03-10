#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <string>
using namespace std;
void Reverse(char *pb, char * pe)
{
    char t;
    while(pb < pe)
    {
        t = *pb;
        *pb = *pe;
        *pe = t;
        pb++;
        pe--;
    }
    return ;
}

char *ReverseSentence(char *pData)
{
    char *pt;
    if(pData == NULL)
    {
        return NULL;
    }
    char *pb = pData;
    char *pe = pData;
    while(pe != '\0')
    {
        pe ++;
    }
    pe --;
    Reverse(pb, pe);
    pb = pData;
    pe = pData;
    while(*pb != '\0')
    {
        while(*pe != '\0' && *pe != ' ')
        {
            pe++;
        }
        pt = pe;
        Reverse(pb, --pe);
        pe = pt;
        if(pe == '\0')
        {
            return pData;
        }
        
        pe++;
        pb = pe;
    }
    return pData;
}


int main(int argc, const char *argv[])
{
    char s[40] ;
    char *p = NULL; 
    //cin >> p;
    cin.getline(s,40);
    int a = strlen(s);
    cout << a << endl;
    //p = ReverseSentence(s);
    //cout << p << endl;
    return 0;
}



















