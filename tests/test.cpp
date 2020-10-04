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
  std::any a{std::string("4.25")};
  EXPECT_EQ(cast_avg(a),"| 4.25");
}

TEST(test_debt, test_debt_cast){
  std::any a(nullptr);
  EXPECT_EQ(cast_debt(a),"| null");
}

TEST(test_debt, test_avg_cast_1){
  std::any a{std::string("C++")};
  EXPECT_EQ(cast_debt(a),"| C++");
}

TEST(test_group, test_group_cast){
  std::any a(size_t(31));
  EXPECT_EQ(cast_group(a),"| 31 ");
}

TEST(test_group, test_group_cast_1){
  std::any a{std::string("IU8-31")};
  EXPECT_EQ(cast_group(a),"| IU8-31");
}

/*TEST(test_avg, test_avg_cast){
  std::any a(size_t(4));
  EXPECT_EQ(cast_avg(a),"| 4");
}*/