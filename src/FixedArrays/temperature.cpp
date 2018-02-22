const int daysOfTheYear(365);

namespace TestItRetVal
{
enum TestItRetVal
{
    SUCCESS,
    FAILURE,
};
}

TestItRetVal::TestItRetVal test_it(const double temperatures[daysOfTheYear]);


int main()
{
    double temperatures[daysOfTheYear] {};

    return test_it(temperatures);
}

TestItRetVal::TestItRetVal test_it(const double temperatures[daysOfTheYear])
{

    for (int day=0; day < daysOfTheYear; ++day)
    {
        if (temperatures[day] != 0.0)
        {
            return TestItRetVal::FAILURE;
        }
    }
    return TestItRetVal::SUCCESS;
}
