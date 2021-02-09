#include<iostream.h>
#include<conio.h>
class book
{
	private:
	float price,sales,discount,n;
	char name[100];

	public:
	void get()
	{
		cout<<"\nEnter the name of the book: "<<endl;
		cin>>name;
		cout<<"Price of the book: "<<endl;
		cin>>price;
	}

	void calc()
	{
		discount=10;
		sales=price-((price*discount)/100);
	}

	void put()
	{
		cout<<name;cout<<"\t";cout<<price;cout<<"\t";cout<<sales<<endl;
	}
};

void main()
{
	clrscr();
	book obj1[5];
	int i,n;
	cout<<"Numbers of books needed: "<<endl;
	cin>>n;

	for(i=0;i<n;i++)
	{
		obj1[i].get();
	}
	cout<<"\n";

	for(i=0;i<n;i++)
	{
		obj1[i].calc();
	}
	cout<<"Book   Price   Discounted Price"<<endl;

	for(i=0;i<n;i++)
	{
		obj1[i].put();
	}

	getch();
}