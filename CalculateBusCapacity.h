#ifndef CALCULATE_BUS_CAPACITY_H
#define CALCULATE_BUS_CAPACITY_H

#include <vector>

/*
 * function: calculating the capacity of a bus
 * return: the number of capacity (int)
 * parameters: passengers (a vector of pairs),
 *             passengers[i].first = the number of exiting passengers at i-th stop
 *             passengers[i].second = the number of entering passengers at i-th stop
 */
int CalculateBusCapacity(std::vector< std::pair <int, int> > passengers);

#endif // CALCULATEBUSCAPACITY_H
