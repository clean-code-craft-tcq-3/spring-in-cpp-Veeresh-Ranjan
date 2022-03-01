#include<vector>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class Stats
{
    public:
    double min,max,average;
    Stats()
    {
        //cout<<"Constructor"<<endl;
    }

    ~Stats()
    {
        //cout<<"Desc"<<endl;
    }
    double calculate_Avg(const std::vector<double>& b)
    {
        double sum = 0.0;
        for(std::size_t i = 0; i < b.size(); i++)
            sum += b.at(i);
        return sum/b.size();
    }
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& a);
}

