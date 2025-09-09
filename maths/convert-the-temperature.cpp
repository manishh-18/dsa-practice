// Problem: Convert the Temperature (LeetCode #2469)
// Link: https://leetcode.com/problems/convert-the-temperature/
// Difficulty: Easy


class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin=celsius + 273.15;
        double Fahrenheit=celsius*1.80 + 32.00;
        return {kelvin,Fahrenheit};
    }
};