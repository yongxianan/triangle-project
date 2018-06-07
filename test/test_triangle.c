#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}
void test_get_triangle_name_isosceles(void)
{
    TEST_ASSERT_EQUAL_STRING("isosceles", getTriangleName(2,2,5));
    printf("triangleName = %s", getTriangleName(2,2,5));
}

void test_get_triangle_name_equilateral(void)
{
    char *triangleName = getTriangleName(4,4,4);
    TEST_ASSERT_EQUAL_STRING("equilateral",triangleName);
    printf("triangleName = %s", triangleName);
}

void test_get_triangle_not_triangle_test_1(void)
{
    char *triangleName = getTriangleName(2,2,-5);
    TEST_ASSERT_EQUAL_STRING("not triangle",triangleName);
    printf("triangleName = %s", triangleName);
}

void test_get_triangle_not_triangle_test_2(void)
{
    char *triangleName = getTriangleName(2,2,0);
    TEST_ASSERT_EQUAL_STRING("not triangle",triangleName);
    printf("triangleName = %s", triangleName);
}

void test_get_triangle_not_triangle_test_3(void)
{
    char *triangleName = getTriangleName(-4,2,-5);
    TEST_ASSERT_EQUAL_STRING("not triangle",triangleName);
    printf("triangleName = %s", triangleName);
}





void test_add_2_with_5_expect_7(void)
{
    int result = add(2,5);
    printf("result = %d", result);
    TEST_ASSERT_EQUAL(7,result);
}

void test_add_9_with_minus_11_expect_minus_2(void)
{
    int result = add(9,-11);
    printf("result = %d", result);
    TEST_ASSERT_EQUAL(-2,result);
}
void test_triangle_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement triangle");
}
