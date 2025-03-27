#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>


using namespace std;

int lin_regression(const std::vector<float>& x,
    const std::vector<float>& y,
    float &slope,
    float &intercept)
{
    if (x.size() != y.size() || x.empty())
    {
        std::cout << "size of x not matching size of y, or empty data set" << std::endl;
        return 0; // Return {0, 0} for invalid input
    }

    int n = x.size();

    // Calculate means
    float sum_x = std::accumulate(x.begin(), x.end(), 0.0);
    float sum_y = std::accumulate(y.begin(), y.end(), 0.0);
    float mean_x = sum_x / n;
    float mean_y = sum_y / n;

    // Calculate slope (b) and intercept (a)
    float numerator = 0.0;
    float denominator = 0.0;
    for (int i = 0; i < n; ++i)
    {
        numerator += (x[i] - mean_x) * (y[i] - mean_y);
        denominator += std::pow(x[i] - mean_x, 2);
    }

    slope = denominator != 0 ? numerator / denominator : 0;
    intercept = mean_y - slope * mean_x;

    return 1;
}

int ransac_fitting(const vector<int> x,
    const vector<int> y,
    const int n_iterations,
    float threshold=1,
    int min_inliers=0,
    float &best_slope,
    float &best_intercept,
    vector<int> &best_inliers)
{
    int best_inlier_count = 0;
    float best_slope = 0;
    float best_intercept = 0;

    int n_samples = x.size();
    vector<int> inliers = vector(n_samples, 0);  // all points are initialized to be outliers

    for (int n = 0; n < n_iterations; ++n)
    {
        // randomly select two points from the samples
        int idx1 = rand() % num_samples;
        int idx2 = rand() % n_samples;

        int x1 = x[idx1];
        int y1 = y[idx1];

        int x2 = x[idx2];
        int y2 = y[idx2];

        // same point, or infinite slope
        if (x2 == x1)
            continue;

        // compute slope and intercept based on two points selected
        float slope = (y2 - y1) / (x2 - x1);
        float intercept = y1 - slope * x1;

        int inlier_count = 0;
        for (int m = 0; m < n_samples; ++m)
        {
            float x_m = x[m];
            float y_m = y[m];

            // distance from one point to the line
            float distances = abs(slope * x[m] + intercept - y[m]) / sqrt(slope *slope + 1);

            if (distances < threshold)
            {
                inlier_count ++;
                inliers[m] = 1;
            }
        }

        // if indeed the current results are better than existing
        if (inlier_count > best_inlier_count && inlier_count >= min_inliers)
        {
           best_inlier_count   = inlier_count;
           best_slope          = slope;
           best_intercept      = intercept;
           best_inliers        = inliers;
        }
    }

    // check final number of inliers in the data set
    int num_inliers = 0;
    vector<int> inlier_x;
    vector<int> inlier_y;
    for(int n == 0; n < num)
    {
        if (n > 0)
        {
            num_inliers += n;
            inlier_x
        }
    }

    if (num_inliers > 0)
    {
        int ret = lin_regression(const std::vector<float>& x,
    const std::vector<float>& y,
    float &slope,
    float &intercept)
    }
}


int main()
{

    float p = 0.9999;      // probability of success after running ransac
    int n = 2;              // of points selected to generate a line
    float w = 0.5;         // inlier ratio

    int n_iterations = floor(log(1-p)/log(1-pow(w,n)));

    for (int i = 1; i <= 100; i++)
    int n = rand() % 10;
    std::cout << n << std::endl;
    return 0;
}


