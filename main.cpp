#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    while (true)
    {
        // Get raw number representing degree
        double degree;
        cout << "Please enter the temprature for conversion: ";
        cin >> degree;

        // Get scale of temprature degree
        char scale;
        cout << "Which scale is this? [C]elsius/[F]ahrenheit/[K]elvin: ";
        cin >> scale;

        // Get destination scale
        char finalScale;
        cout << "To which scale do you want to convert? [C]elsius/[F]ahrenheit/[K]elvin: ";
        cin >> finalScale;

        // Repeat input process for scales if scale and destinationScale are equal
        if (scale == finalScale)
        {
            cout << "Scale and destination scale are the same. Please input units again...";
            continue;
        }

        // Use formula to convert
        double finalDegree;
        if ((scale == 'C') || (scale == 'c'))
        {
            if ((finalScale == 'F') || (finalScale == 'f')) finalDegree = 1.8 * degree + 32;
            else if ((finalScale == 'K') || (finalScale == 'k')) finalDegree = degree + 273.15;
        }
        else if ((scale == 'F') || (scale == 'f'))
        {
            if ((finalScale == 'C') || (finalScale == 'c')) finalDegree = (degree - 32) / 1.8;
            else if ((finalScale == 'K') || (finalScale == 'k')) finalDegree = (degree - 32) / 1.8 + 273.15;
        }
        else if ((scale == 'K') || (scale == 'k'))
        {
            if ((finalScale == 'C') || (finalScale == 'c')) finalDegree = degree - 273.15;
            else if ((finalScale == 'F') || (finalScale == 'f')) finalDegree = 1.8 * degree - 459.67;
        }

        // Final output
        cout << degree << " " << (char)248 << scale << " is " << finalDegree << " " << (char)248 << finalScale << endl;
    }

    return 0;
}
