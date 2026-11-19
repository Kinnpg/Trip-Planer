
#ifndef TRIP_PLANER_PLAN_H
#define TRIP_PLANER_PLAN_H

#include <string>
#include <vector>

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

#endif //TRIP_PLANER_PLAN_H