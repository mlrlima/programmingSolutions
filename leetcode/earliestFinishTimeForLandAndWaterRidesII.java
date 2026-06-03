class Solution {
    public int earliestFinishTime(int[] landStartTime, int[] landDuration, int[] waterStartTime, int[] waterDuration) {

        //land first
        int earliest=0;
        for(int i=0;i<landStartTime.length;i++){
            if(earliest==0 || landStartTime[i]+landDuration[i]<earliest) earliest=landStartTime[i]+landDuration[i];
        }

        int tempEarliest=0;
        for(int i=0;i<waterStartTime.length;i++){
            int wait=0;
            if(waterStartTime[i]>earliest) wait=waterStartTime[i]-earliest;

            if(tempEarliest==0 || (earliest+wait+waterDuration[i])< tempEarliest) tempEarliest=earliest+wait+waterDuration[i];
        }

        earliest=tempEarliest;

        //water first
        tempEarliest=0;
        for(int i=0;i<waterStartTime.length;i++){
            if(tempEarliest==0 || waterStartTime[i]+waterDuration[i]<tempEarliest) tempEarliest=waterStartTime[i]+waterDuration[i];
        }

        int tempEarliest2=0;
        for(int i=0;i<landStartTime.length;i++){
            int wait=0;
            if(landStartTime[i]>tempEarliest) wait=landStartTime[i]-tempEarliest;

            if(tempEarliest2==0 || (tempEarliest+wait+landDuration[i])< tempEarliest2) tempEarliest2=tempEarliest+wait+landDuration[i];
        }

        return Math.min(earliest, tempEarliest2);
    }
}
