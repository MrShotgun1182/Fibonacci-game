#include <iostream>

using namespace std ;

int main (){
	
	int dovom=0,aval=1,n,sum =0 , to , shomaresh ;
	int man [6] = {1 ,3 , 8 ,21 ,55 ,144} ;
	
	sleep (2);
	cout<< "khob bazi intorie ke baiad donbale fibonachi ro begi . aval man migam "<< endl ;
	

    for(int i=0 ; i <6 ; i ++)
    {
    	cout<< man [i] << endl ;
    	cin >> to ;
        sum=dovom+aval;
        dovom=aval;
        aval=sum;
        
        sum = dovom + aval ;
        dovom = aval ;
		aval = sum ;
		shomaresh ++ ;
		
		if (to != sum )
		{
			break ;
		}
		sleep (1);
		if (shomaresh == 4)
		{
			sleep (2);
		}
		if (shomaresh == 5)
		{
			sleep (4);
			for ( int m =1 ; m < 100 ; m++)
			{
				usleep(30000);
				cout << "010011";
			}
			cout << endl << "bebakhshid mohasebatesh ziad bod " << endl ;
		}
    }
    if (shomaresh < 2)
    {
    	cout<< "engar bazi ro balad nisti feshar bokhor XD XD XD XD "<< endl ;
	}
	if (shomaresh >=2 && shomaresh < 6 )
	{
		cout<< "khob bod vali be paie man nemiresi boro iebar dige bia XD XD \n" ;
	}
	if (shomaresh == 6)
	{
		sleep (4);
		cout << "to taghalob kardi chiter kheir nadide -_-" << endl ;
	}
	
	
	return 0 ;
}