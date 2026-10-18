class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) 
    {
        if(abs(arrivalTime+delayedTime)<24)
        {
            return arrivalTime+delayedTime;
        }
        else
        {
            return abs(arrivalTime+delayedTime)/24;
        }
    }
};