#include <vector>
#include "CalculateBusCapacity.h"

using namespace std;

/*
 * function: calculating the capacity of a bus
 * return: the number of capacity (int)
 * parameters: passengers (a vector of pairs),
 *             passengers[i].first = the number of exiting passengers at i-th stop
 *             passengers[i].second = the number of entering passengers at i-th stop
 */
int CalculateBusCapacity(vector< pair <int, int> > passengers)
{
    /* the number of pairs */
    int i32size = passengers.size();

    /* the current number of bus */
    int i32current = 0;

    /* the capacity of bus */
    int i32capacity = 0;

    /* check the number of passengers at every stop */
    for (int i = 0; i < i32size; i ++)
    {
        /* first exit then enter */
        i32current -= passengers[i].first;
        i32current += passengers[i].second;

        /* check the capacity of the bus */
        if (i32current > i32capacity) i32capacity = i32current;
    }

    return i32capacity;
}
