#include"ctest.h"
#include"lib.h"

CTEST(sqrequat_suite, two_root) {
    // Given
    const double a = 1;
    const double b = 3;
    const double c = 2;

    // When
    double x1, x2;
    const int result = Quadratic_equation(a, b, c, &x1, &x2);

    // Then
    const double expected_x1 = -1, expected_x2 = -2;

    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
    ASSERT_EQUAL(2, result);
}
CTEST(sqrequat_suite, one_root) {
    // Given
    const double a = 1;
    const double b = 4; 
    const double c = 4;

    // When
    double x1, x2;
    const int result = sqrequat(a, b, c, &x1, &x2);

    // Then
    const double expected_x1 = -2;

    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_EQUAL(1, result);
}

CTEST(sqrequat_suite, no_root) {
    // Given
    const double a = 1;
    const double b = 2;
    const double c = 3;

    // When
    double x1, x2;
    const int result = sqrequat(a, b, c, &x1, &x2);

    // Then
    ASSERT_EQUAL(0, result);

}
