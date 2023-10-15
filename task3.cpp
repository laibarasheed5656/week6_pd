#include <iostream>
using namespace std;

string findZodiacSign(int day, string month);

int main()
{
    int day;
    string month;

    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;

    string zodiacSign = findZodiacSign(day, month);
    cout << "Zodiac Sign: " << zodiacSign << endl;

    return 0;
}

string findZodiacSign(int day, string month)
{
    string zodiacSign;

    if ((month == "March" && day >= 21) || (month == "April" && day <= 19))
    {
        zodiacSign = "Aries, The Ram";
    }
    else if ((month == "April" && day >= 20) || (month == "May" && day <= 20))
    {
        zodiacSign = "Taurus, The Bull";
    }
    else if ((month == "May" && day >= 21) || (month == "June" && day <= 20))
    {
        zodiacSign = "Gemini, The Twins";
    }
    else if ((month == "June" && day >= 21) || (month == "July" && day <= 22))
    {
        zodiacSign = "Cancer, The Crab";
    }
    else if ((month == "July" && day >= 23) || (month == "August" && day <= 22))
    {
        zodiacSign = "Leo, The Lion";
    }
    else if ((month == "August" && day >= 23) || (month == "September" && day <= 22))
    {
        zodiacSign = "Virgo, The Virgin";
    }
    else if ((month == "September" && day >= 23) || (month == "October" && day <= 22))
    {
        zodiacSign = "Libra, The Scales";
    }
    else if ((month == "October" && day >= 23) || (month == "November" && day <= 21))
    {
        zodiacSign = "Scorpio, The Scorpion";
    }
    else if ((month == "November" && day >= 22) || (month == "December" && day <= 21))
    {
        zodiacSign = "Sagittarius, The Archer";
    }
    else if ((month == "December" && day >= 22) || (month == "January" && day <= 19))
    {
        zodiacSign = "Capricorn, The Goat";
    }
    else if ((month == "January" && day >= 20) || (month == "February" && day <= 18))
    {
        zodiacSign = "Aquarius, The Water Bearer";
    }
    else if ((month == "February" && day >= 19) || (month == "March" && day <= 20))
    {
        zodiacSign = "Pisces, The Fishes";
    }
    return zodiacSign;
}
