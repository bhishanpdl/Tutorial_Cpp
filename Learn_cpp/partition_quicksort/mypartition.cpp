#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <forward_list>
using namespace std;


template <class ForwardIt>
void quicksort(ForwardIt first, ForwardIt last)
{
  if (first == last)
    return;
  
  // pivot is from next iterator.
  auto pivot = *next(first, distance(first, last) / 2);

  //middle1 and middle2 are two partitions
  ForwardIt middle1 = partition(first, last,
                                     [pivot](const auto &em) { return em < pivot; });
  ForwardIt middle2 = partition(middle1, last,
                                     [pivot](const auto &em) { return !(pivot < em); });

  // after declaring middle1 and middle2 we do quicksort on them.
  quicksort(first, middle1);
  quicksort(middle2, last);
}

int main()
{
  vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << "Original vector:\n    ";
  for (int elem : v)
    cout << elem << ' ';

  auto it = partition(v.begin(), v.end(), [](int i) { return i % 2 == 0; });

  cout << "\nPartitioned vector:\n    ";
  copy(begin(v), it, ostream_iterator<int>(cout, " "));
  cout << " * ";
  copy(it, end(v), ostream_iterator<int>(cout, " "));

  forward_list<int> fl = {1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92};
  cout << "\nUnsorted list:\n    ";
  for (int n : fl)
    cout << n << ' ';
  cout << '\n';

  quicksort(begin(fl), end(fl));
  cout << "Sorted using quicksort:\n    ";
  for (int fi : fl)
    cout << fi << ' ';
  cout << '\n';
}