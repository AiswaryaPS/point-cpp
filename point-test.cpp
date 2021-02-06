#include "Point.h"
#include <gtest/gtest.h>
#include <cmath>
namespace{
TEST(Point,Empty_Constructor) {
    Point P;
    EXPECT_EQ(0.0,P.distanceFromOrigin());
    EXPECT_EQ(true,P.isOrigin());
    EXPECT_EQ(false,P.isOnXaxis());
    EXPECT_EQ(false,P.isOnYaxis());
}

TEST(Point,Parameterized_Cosnstructor) {
    Point P(5,12);
    EXPECT_EQ(13.0,P.distanceFromOrigin());
    EXPECT_EQ(1,P.quadrant());
    EXPECT_EQ(false,P.isorigin());
    EXPECT_EQ(false,P.isonXaxis());
    EXPECT_EQ(false,P.isonYaxis());

}

TEST(Point,Copy_Cosnstructor) {
    Point P1(-5,-12);
    Point P2(P3);
    EXPECT_EQ(13,P4.distanceFromOrigin());
    EXPECT_EQ(3,P4.quadrant());
    EXPECT_EQ(false,P4.isorigin());
    EXPECT_EQ(false,P4.isonXaxis());
    EXPECT_EQ(false,P4.isonYaxis());

}
}









