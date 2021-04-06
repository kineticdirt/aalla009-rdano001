#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, HappyBirthday) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "Happy"; test_val[2] = "Birthday";
    EXPECT_EQ("Happy Birthday", echo(3,test_val));
}
TEST(EchoTest, SingleWord) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Apple";
    EXPECT_EQ("Apple", echo(2,test_val));
}
TEST(EchoTest, LotsOfWords){
    char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "Todays"; test_val[2]="Forcast";test_val[3]="Is";test_val[4]="Sunny";
    EXPECT_EQ("Todays Forcast Is Sunny",echo(5,test_val));
}
int main(int argc, char **argv) {

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


