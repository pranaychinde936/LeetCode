class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0, n = plants.size();
        int cp = capacity;

        for(int i=0; i<n; i++){
            if(plants[i] <= cp){
                steps++;
            }
            else{
                steps = steps+i+i+1;
                cp = capacity;
            }
            cp -= plants[i];
        }

        return steps;
    }
};