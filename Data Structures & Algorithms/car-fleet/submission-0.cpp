class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<std::pair<int,int>> posSpeed;
        for (int i{0}; i < position.size(); i++){
            posSpeed.push_back({position[i], speed[i]});
        }
        std::sort(posSpeed.begin(), posSpeed.end(), std::greater<>());
        std::stack<double> arrivalTimes;
        int fleets{0};
        for (const auto& [x, v] : posSpeed){
            double arrival{static_cast<double>((target-x)) / v};
            if (arrivalTimes.empty()){
                arrivalTimes.push(arrival);
                fleets++;
                continue;
            }
            if (arrival <= arrivalTimes.top()){
                // Joins fleet case
                continue;

            } else if (arrival > arrivalTimes.top()){
                // Starts a new fleet
                arrivalTimes.push(arrival);
                fleets++;
            }
        }
        return fleets;
    }
};
