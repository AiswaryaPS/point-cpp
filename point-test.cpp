#include "Point.h"
#include <gtest/gtest.h>
#include <cmath>
namespace{
TEST(Point,Empty_Constructor) {
    Point P;
    EXPECT_EQ(0.0,P.distanceFromOrigin());
    EXPECT_EQ(true,P.isOrigin());
    EXPECT_EQ(false,P.isOnXAxis());
    EXPECT_EQ(false,P.isOnYAxis());
}

TEST(Point,Parameterized_Cosnstructor) {
    Point P(5,12);
    EXPECT_EQ(13.0,P.distanceFromOrigin());
    EXPECT_EQ(1,P.quadrant());
    EXPECT_EQ(false,P.isOrigin());
    EXPECT_EQ(false,P.isOnXAxis());
    EXPECT_EQ(false,P.isOnYAxis());

}

TEST(Point,Copy_Cosnstructor) {
    Point P1(-5,-12);
    Point P2(P3);
    EXPECT_EQ(13,P4.distanceFromOrigin());
    EXPECT_EQ(3,P4.quadrant());
    EXPECT_EQ(false,P4.isOrigin());
    EXPECT_EQ(false,P4.isOnXAxis());
    EXPECT_EQ(false,P4.isOnYAxis());

}
}









