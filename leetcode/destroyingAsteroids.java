class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        Arrays.sort(asteroids);
        long planet=mass;
        for(int i=0;i<asteroids.length;i++){
            if(planet >= asteroids[i]) planet += asteroids[i];
            else return false;
        }

        return true;
    }
}
