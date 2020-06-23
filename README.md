# CodingTest
This repository is just for coding test

/**********************************************************************
 *              CalculateBusCapacity.h
 *              CalculateBusCapacity.cpp
 **********************************************************************/

/*
 * function: calculating the capacity of a bus
 * return: the number of capacity (int)
 * parameters: passengers (a vector of pairs),
 *             passengers[i].first = the number of exiting passengers at i-th stop
 *             passengers[i].second = the number of entering passengers at i-th stop
 */
int CalculateBusCapacity(std::vector< std::pair <int, int> > passengers);
