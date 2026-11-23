#include <catch2/catch_test_macros.hpp>
#include "include/plan.h"
#include <iostream>

TEST_CASE("Plan"){
    Plan p11(1,"Norway","Kinga");
    std::cout << p11.destination << std::endl;

    REQUIRE(p11.plan_id == 1);
    REQUIRE(p11.destination == "Norway");
    REQUIRE(p11.author == "Kinga");
    REQUIRE(p11.version == 1);
}