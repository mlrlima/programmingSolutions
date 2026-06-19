class Solution {
    public double angleClock(int hour, int minutes) {

        //360
        //how far it is from 0 (12)
        if(hour==12) hour=0;

        double h=hour*(360/12);
        h+=((360/12)*(double)minutes)/60;
        double m=minutes*(360/60);

        double a=Math.abs(h-m);
        if(a>180.0) a=360-a;

        return a;

        /*
        double p=(hour*60+minutes)/(60*12);
        double ang=p*360;
        if(360-ang<ang) ang=360-ang;

        return ang;
        */
    }
}
