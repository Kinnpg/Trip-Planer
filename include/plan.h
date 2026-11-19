
#ifndef TRIP_PLANER_INCLUDE_PLAN_H
#define TRIP_PLANER_INCLUDE_PLAN_H

#include <string>

// ---------- Plan ----------
class Plan {
public:
    int plan_id;
    int version;
    std::string destination;
    std::string author;

    Plan(int plan_id, int version, std::string destination, std::string author);

    std::string describe_plan() const;
};

#endif //TRIP_PLANER_INCLUDE_PLAN_H