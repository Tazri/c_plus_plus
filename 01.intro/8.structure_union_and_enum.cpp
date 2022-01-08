#include <iostream>

using namespace std;

// create custom datatype
enum Day {
    fri,sat,sun,mon,tue,wed,thu
};

struct Create_Date{
    int year;
    int month;
    Day day;
};

union Day_Cost{
    int eid_day;
    int eid_cost;
};

int main(void){
    Create_Date to_day;
    to_day.year = 2022;
    to_day.month = 1;
    to_day.day = sat;

    Day_Cost last_eid;
    last_eid.eid_cost = 300;

    cout << "Today = " << to_day.year << "/" << to_day.month << "/" << to_day.day << endl;
    cout << "last Eid Cost = " << last_eid.eid_cost << endl;

    return 0;
}