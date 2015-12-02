#include <iostream>

#include <string>
#include <stack>

using namespace std;



/* void test() {
    testExpression test1, test2, test3, test4;
    test1.expr = "(3 + 4) * (5 - 8) /2 * 2";
    test1.result = -21;

    test2.expr = "33.67 + 22.33 - 41.1 / 8.22 * 2 ";
    test2.result = 46;

    test3.expr = "12 * 5 + (-5) / 10";
    test3.result = 59.5;

    test4.expr = "2 + sin(1)";
    test4.result = 59.5;

    testExpression exp[] {test1, test2, test3, test4};

    for (int i = 0; i < 4; i++) {
        testExpression curExp = exp[i];
        Calculator calc(curExp.expr);
        double curRes =  calc.getResult();

        string status = (curRes == curExp.result) ? "PASS" : "FAIL";

        cout << status << " ";
        cout << curExp.expr << " = " << curExp.result << " [" << curRes << "]" << endl;
    }
}
*/

int main() {

   // test();

    cout << "Enter expression: ";

    string expression;
    getline(cin, expression);


    return 0;
}
