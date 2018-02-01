#include <cstdlib>
#include <iostream>

using namespace std;

void mass_based();
void volume_based();

int main()
{
	char buffer='v';
	cout<<"enter 'v' for volume based density calculation and 'm' for mass based\n";
	cin>>buffer;
	if(buffer=='v')
		volume_based();
	else if(buffer=='m')
		mass_based();
	else
		cout<<"error";
} 
void volume_based()
{
    cout<<"输入两物质密度（kg/m3）及混合时体积比，输出混合完密度"<<endl; 
    double p1,p2,m,n;
    cin>>p1; 
    cout<<"kg/m3"<<endl; 
    cin>>p2;
    cout<<"kg/m3"<<endl;
    cin>>m; 
    cout<<":"<<endl;
    cin>>n; 
    cout<<(m*p1+n*p2)/(m+n)<<"kg/m3"; 
    system("PAUSE");
}

void mass_based()
{
    cout<<"输入两物质密度（kg/m3）及混合时质量比，输出混合完密度"<<endl; 
    double p1,p2,m,n;
    cin>>p1; 
    cout<<"kg/m3"<<endl; 
    cin>>p2;
    cout<<"kg/m3"<<endl;
    cin>>m; 
    cout<<":"<<endl;
    cin>>n; 
    cout<<(m+n)/(m/p1+n/p2)<<"kg/m3"; 
    system("PAUSE");
}
