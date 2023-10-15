#include <iostream>
using namespace std;
string decideActivity(string temp, string hum);
int main()
{
    string temp;
    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    string hum;
    cout << "Enter humidity (dry or humid): ";
    cin >> hum;
    string Activity = decideActivity(temp, hum);
    cout << "Recommended activity: " << Activity;
}
string decideActivity(string temp, string hum)
{
    string Activity;
    string a = "warm", b = "cold";
    string c = "humid", d = "dry";
    if (temp == a && hum == d)
        {
            Activity = "Play tennis";
        }
    else
        {
            Activity = "swim";
        }
    if (temp==b && hum==c)
        {
            Activity="Watch tv";
        }    
    else
        {
            Activity="Play basketball";
        }   
        return Activity;
 }

