#include "stats.h"


Stats Statistics::ComputeStatistics(const std::vector<double>& a) {
    //Implement statistics here
    Stats stats_obj;
    if(a.size()==0)
    {
        stats_obj.min=stats_obj.max=0.0/0.0;
    }
    else
    {
        stats_obj.min = *min_element(a.begin(), a.end());
        stats_obj.max = *max_element(a.begin(), a.end());
    }
    stats_obj.average = stats_obj.calculate_Avg(a);
    return stats_obj;
}

