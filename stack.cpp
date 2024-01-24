#include <iostream>
#include <stack>
using namespace std;
class Mark
{
public:
  int mark;
  int date;
};
int main()
{
  stack<Mark> marks;
  // fill marks by'date'
    srand((unsigned)(time(NULL)));
  for (int i = 1; i < (365 * 5); i++)
  {
    Mark mark;
    mark.mark = rand() % 5;
    mark.date = i;
    marks.push(mark);
  }
  // get marks by last 3 year
  int years = 3;
  for (int i = 1; i < (365 * years - 10); i++)
  {

    marks.pop();
  }
  // print first 10 marks in 3 year period
  for (int i = 1; i < 10; i++)
  {
    Mark mark = marks.top();
    cout << "Date: " << mark.date << "\tMark:" << mark.mark << endl;
    marks.pop();
  }
}