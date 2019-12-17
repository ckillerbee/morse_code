#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string a[26],str,i;
    std::string::iterator it;
    a[0]="._";a[1]="_...";a[2]="_._.";a[3]="_..";a[4]=".";a[5]=".._.";a[6]="_ _.";a[7]="....";a[8]="..";a[9]="._ _ _";a[10]="_._";
    a[11]="._..";a[12]="_ _";a[13]="_.";a[14]="_ _ _";a[15]="._ _.";a[16]="_ _._";a[17]="._.";a[18]="...";a[19]="_";a[20]=".._";
    a[21]="..._";a[22]="._ _";a[23]="_.._";a[24]="_._ _";a[25]="_ _..";
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    cout<<endl<<"Morse for '"<<str<<"' is"<<endl;
    for (it=str.begin(); it!=str.end(); it++)
    {
        if(*it>=65 && *it<=92)
	    {
		*it=*it+32;
	    }
        if(*it==' ')
            cout<<"  ";
        else
            cout<<a[*it-'a']<<" ";
    }
    return 0;
}
