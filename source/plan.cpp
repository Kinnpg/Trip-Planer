#include "include/plan.h"

// ---------- Plan ----------
Plan::Plan(int plan_id, int version, std::string destination, std::string author)
    : plan_id(plan_id), version(version),
      destination(std::move(destination)), author(std::move(author)) {}

std::string Plan::describe_plan() const {
    // TODO
    return "";
}