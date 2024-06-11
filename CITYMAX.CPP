#include<iostream.h>
#include<conio.h>
using namespace std;

class city
{
    string name[10];
    int population;
    static int max;

public:
    void getData()
    {
	cout << "Enter City Name :: ";
	getline(cin, name);
        cout << "Enter Population :: ";
        cin >> population;
        cin.ignore();
    }
    void putData()
    {
	cout << name << endl;
        cout << population << endl;
    }

    // void value(city &p)
    // {
    //     static int i=0;
    //     cout << "test case :: " << i+1 << endl;
    //     if (p.population < population)
    //     {
    //         max = population;
    //     }
    //     else
    //     {
    //         max = p.population;
    //     }
    // }
    void value()
    {
	static int i=0;
        cout << "test case :: " << i+1 << endl;
        if (max < population)
        {
            max = population;
        }
        
    }
    void display()
    {
        if (population == max)
        {
            cout << "\nCity That Has Maximum Population\n";
	    cout << name << " :: " << population << endl;
        }
    }
};

int city ::max = 0;
int main()
{
    city *c;

    int n;

    cout << "Enter Total Number Of City :: ";
    cin >> n;
    cin.ignore();

    city *c1 = new city[n];
    c = &c1[0];

    for (int i = 0; i < n; i++)
    {
        c[i].getData();
    }

    for (int i = 0; i < n; i++)
    {
        // c[i].value(c[i+1]);
        c[i].value();
    }

    for (int i = 0; i < n; i++)
    {
        c[i].display();
    }

    return 0;
}
