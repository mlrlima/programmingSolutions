class Solution {
    public int earliestFinishTime(int[] landStartTime, int[] landDuration, int[] waterStartTime, int[] waterDuration) {
        int earliest=0;
        for(int i=0;i<landStartTime.length;i++){
            for(int j=0;j<waterStartTime.length;j++){
                //land first
                int duration=landStartTime[i]+landDuration[i];
                if(waterStartTime[j]>duration) duration+=(waterStartTime[j]-duration);
                duration+=waterDuration[j];

                if(earliest==0 || duration<earliest) earliest=duration;

                //water first
                duration=waterStartTime[j]+waterDuration[j];
                if(landStartTime[i]>duration) duration+=(landStartTime[i]-duration);
                duration+=landDuration[i];

                if(duration<earliest) earliest=duration;
            }
        }


        return earliest;
    }
}
