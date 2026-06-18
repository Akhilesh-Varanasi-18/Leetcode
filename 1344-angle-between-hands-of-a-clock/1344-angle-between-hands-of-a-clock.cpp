class Solution {
public:
    double angleClock(int hour, int minutes) {
        //the approach will be, first find the position of each hand from 12 o’clock, then subtract.
        //to find hour hand angle  formula is --> HA = 30H + 0.5M
        //to find minute hand angle formula is --> MA = 6M
        //to find second hand angle formula is --> SA = 6S     
        double HA = 30*hour + 0.5*minutes;
        double MA = 6*minutes;
        double res = abs(HA-MA);
        return(min(res,360-res));  
    }
};