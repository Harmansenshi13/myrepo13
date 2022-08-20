#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
    int h=0,m=0,s=0;

    cout<<"Enter time in format HH:MM:SS\n\n";
    cin>>h>>m>>s;
    
    cout<<"Set alaram in HH:MM:SS\n\n"
    
	if(h<24 && m<60 && s<60)
	{
	
	start:
    
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
            	system("CLS");
                cout<<h<<" : "<<m<<" : "<<s;
                for (double i=0; i<9999999li+)
                {
                	i++;
                	i--;
				}
				
				if(h<12)
				{
					cout<<"PM";
					
				}
				else{
					cout << "AM";
		     	}
			
					
				}           }
				
            s=0;
        }
        m=0;
        
    }
    h=0;
    goto start;
    }
    else
    {
    	cout<<"Enter corect time format in HH:NN:SS\n";
	}
}
