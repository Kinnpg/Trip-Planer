#include "include/plan.h"
#include <sstream>

// ---------- Plan ----------
Plan::Plan(int plan_id, std::string destination, std::string author, int version)
    : plan_id(plan_id), version(version),
      destination(std::move(destination)), author(std::move(author)) {}

std::string Plan::describe_plan() const {
    std::ostringstream oss;
    oss << "Plan nr " << plan_id << "." << version
        << " destination is " << destination
        << " made by " << author;
    return oss.str();
}