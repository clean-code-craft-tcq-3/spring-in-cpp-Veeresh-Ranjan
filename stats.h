#include<vector>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class IAlerter
{
public:
    IAlerter()
    {

    }

};
class EmailAlert:public IAlerter
{
    public:
        bool emailSent;
};
class LEDAlert:public IAlerter
{
    public:
        bool ledGlows;
};
class StatsAlerter:public IAlerter
{
    float maxThreshold;
    std::vector<IAlerter*> alerters;
public:
    StatsAlerter(float maxThreshold1,std::vector<IAlerter*> alerters)
    {
        this->maxThreshold = maxThreshold1;
        this->alerters = alerters;

    }
    void checkAndAlert(const std::vector<double>& a)
    {
        for (std::size_t i = 0; i < a.size(); i++)
        {
            if(a.at(i)>maxThreshold)
            {
                static_cast<EmailAlert*>(alerters.at(0))->emailSent = 1;
                static_cast<LEDAlert*>(alerters.at(1))->ledGlows = 1;
                break;
            }

        }

    }
};



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


