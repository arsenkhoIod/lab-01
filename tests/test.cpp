// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include <cast.h>
//TEST(Example, EmptyTest) {
//    EXPECT_TRUE(true);
//}

TEST(test_avg, test_avg_cast){
  std::any a(size_t(4));
  EXPECT_EQ(cast_avg(a),"| 4");
}

TEST(test_avg, test_avg_cast_1){
  std::any a{std::string("4.2")};
  EXPECT_EQ(cast_avg(a),"| 4.2");
}

TEST(test_debt, test_debt_cast){
  std::any a(nullptr);
  EXPECT_EQ(cast_debt(a),"| null");
}





/*TEST(test_avg, test_avg_cast){
  std::any a(size_t(4));
  EXPECT_EQ(cast_avg(a),"| 4");
}*/