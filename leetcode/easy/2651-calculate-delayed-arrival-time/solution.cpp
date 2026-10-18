class Solution {
public:
    int findDelayedArrivalTime(int at, int dt) 
    {
        if(at+dt<24)
        {
            return at+dt;
        }
        else
        {
            return abs(24-(at+dt));
        }
    }
};