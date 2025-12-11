#include <iostream>
using namespace std;

class P {
    public:
        float temperature;
};

class Q : public P{
    public:
        float fahrenheit;
        void setFehrenheit() {
            fahrenheit = (temperature * 9/5) + 32;
        }
};

class R : public Q{
    public:
        float kelvin;

        void setKelvin() {
            kelvin = (fahrenheit - 32) * 5/9 + 273.15;

        }

        void getData() {
            cout << "Converter For Celsius : " << temperature << endl;
            cout << "Temperature In fahrenheit : " << fahrenheit << endl;
            cout << "Temperature In Kelvin : " << kelvin << endl;
        }
};


int main () {
    R t;

    cout << "Enter Temperature To Convert : ";
    cin >> t.temperature;

    t.setFehrenheit();
    t.setKelvin();
    t.getData();

    return 0;
}