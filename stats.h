
#ifndef STATS_H
#define STATS_H


#include <cstdint>
#include <cmath>
#include <numeric>
#include <vector>

using namespace std;

static inline vector<double> stats(vector<double> v) {
    double sum = std::accumulate(v.begin(), v.end(), 0.0);
    double mean = sum / v.size();
    double sq_sum = std::inner_product(v.begin(), v.end(), v.begin(), 0.0);
    double stdev = std::sqrt(sq_sum / v.size() - mean * mean);
    double min = *std::min_element(v.begin(), v.end());
    double max = *std::max_element(v.begin(), v.end());
    
    cout << "mean: " << mean << endl;
    cout << "stdev: " << stdev << endl;
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    
    vector<double> ret;
    ret.push_back(mean);
    ret.push_back(stdev);
    ret.push_back(min);
    ret.push_back(max);
    return ret;
}

#endif //STATS_H
