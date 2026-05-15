#include <iostream>
#include <list>
#include <string>
#include "Taxi.h"

using namespace std;

void showAll(const list<Taxi>& taxis) {
    for (const auto& t : taxis) t.show();
}

int main() {
    list<Taxi> onTaxi;

    onTaxi.push_front(Taxi("AA1111BB", "Toyota", "Ivanov I.I."));
    onTaxi.push_front(Taxi("BC2222CB", "Skoda", "Petrov P.P."));

    onTaxi.insert(onTaxi.begin(), Taxi("AI3333IA", "Ford", "Sidorov S.S."));

    cout << "All Taxis:" << endl;
    showAll(onTaxi);

    string searchNum = "AA1111BB";

    for (auto& t : onTaxi) {
        if (t.number == searchNum) {
            t.onCall = true;
            break;
        }
    }

    cout << "\nFree Taxis:" << endl;
    for (const auto& t : onTaxi) {
        if (!t.onCall) t.show();
    }

    onTaxi.remove_if([&](const Taxi& t) { return t.number == "BC2222CB"; });

    cout << "\nAfter deletion:" << endl;
    showAll(onTaxi);

    return 0;
}