class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        unordered_set<int> candies;

        for(int i : candyType) {
            
            candies.insert(i);

            if(candies.size() >= (candyType.size() / 2))
                break;
        } 

        if(candies.size() >= (candyType.size() / 2))
            return (candyType.size() / 2);

        return candies.size();

    }
};