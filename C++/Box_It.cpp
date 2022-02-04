#include<bits/stdc++.h>

using namespace std;


class Box{
    private:
        int l, b, h;
        
        
    public:
    
    //Default Constructor
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    
    //Parameterized Constructor
    Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }
    
    //Copy Constructor
    Box(Box &B){
        l = B.getLength();
        b = B.getBreadth();
        h = B.getHeight();
    }
    
    //Getter Function
    int getLength(){
        return l;
    }
    
    int getBreadth(){
        return b;
    }
    
    int getHeight(){
        return h;
    }
    
    long long CalculateVolume(){
        return (long long)l*b*h;
    }

    //Operating Overloading
    bool operator < (Box &B){  
        
        int l1 = B.getLength();
        int b1 = B.getBreadth();
        int h1 = B.getHeight();
        
        if((l<l1) || (b<b1 && l==l1) || (h<h1 && b<b1 && l==l1)){
            return 1;
        }
        
        else{
            return 0;
        }
          
    } 
    
};

//Overloading (Output)
ostream& operator<<(ostream& out, Box B){
        int l = B.getLength();
        int b = B.getBreadth();
        int h = B.getHeight();
        
        return out<<l<<' '<<b<<' '<<h;
    }


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
