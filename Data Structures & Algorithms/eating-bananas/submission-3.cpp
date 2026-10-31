class Solution {
public:

    int eat(vector<int>& piles, int k){
        long long h{0};
        for (int i{0}; i < piles.size(); i++){
            if (piles[i] < k){
                h++;
                continue;
            }
            if (piles[i] % k == 0){
                h += piles[i]/k;
            } else h+= piles[i]/k +1;
        }
        return h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int i {1};
        int j{*std::max_element(piles.begin(),piles.end())};

        while (i < j){
            int test = (i +j)/2;

            if (eat(piles, test) <= h){
                j = test;
            } else i = test +1;
        }
        return i;
    }
};
