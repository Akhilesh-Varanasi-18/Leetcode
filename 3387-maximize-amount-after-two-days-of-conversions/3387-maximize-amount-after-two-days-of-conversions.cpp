class Solution {
public:
    double maxAmount(string initialCurrency, vector<vector<string>>& pairs1,
                     vector<double>& rates1, vector<vector<string>>& pairs2,
                     vector<double>& rates2) {
        // Build the graphs for Day 1 and Day 2
        unordered_map<string, unordered_map<string, double>> graph1 =
            buildGraph(pairs1, rates1);
        unordered_map<string, unordered_map<string, double>> graph2 =
            buildGraph(pairs2, rates2);

        // Get the max amounts after Day 1
        unordered_map<string, double> day1Amounts =
            getMaxAmounts(initialCurrency, graph1);

        // Get the max amounts after Day 2
        unordered_map<string, double> day2Amounts =
            getMaxAmounts(initialCurrency, graph2, day1Amounts);

        // Return the maximum amount of the initial currency after Day 2
        return day2Amounts[initialCurrency];
    }

private:
    unordered_map<string, unordered_map<string, double>>
    buildGraph(vector<vector<string>>& pairs, vector<double>& rates) {
        unordered_map<string, unordered_map<string, double>> graph;

        for (int i = 0; i < pairs.size(); i++) {
            string start = pairs[i][0];
            string target = pairs[i][1];
            double rate = rates[i];

            graph[start][target] = rate;
            graph[target][start] = 1.0 / rate;
        }

        return graph;
    }

    unordered_map<string, double>
    getMaxAmounts(string startCurrency,
                  unordered_map<string, unordered_map<string, double>>& graph) {
        unordered_map<string, double> maxAmounts;
        maxAmounts[startCurrency] = 1.0;

        queue<string> q;
        q.push(startCurrency);

        while (!q.empty()) {
            string current = q.front();
            q.pop();
            double currentAmount = maxAmounts[current];

            for (auto& entry : graph[current]) {
                string neighbor = entry.first;
                double rate = entry.second;
                double newAmount = currentAmount * rate;

                if (newAmount > maxAmounts[neighbor]) {
                    maxAmounts[neighbor] = newAmount;
                    q.push(neighbor);
                }
            }
        }

        return maxAmounts;
    }

    unordered_map<string, double>
    getMaxAmounts(string startCurrency,
                  unordered_map<string, unordered_map<string, double>>& graph,
                  unordered_map<string, double>& initialAmounts) {
        unordered_map<string, double> maxAmounts = initialAmounts;
        queue<string> q;

        for (const auto& pair : initialAmounts) {
            q.push(pair.first);
        }

        while (!q.empty()) {
            string current = q.front();
            q.pop();
            double currentAmount = maxAmounts[current];

            for (auto& entry : graph[current]) {
                string neighbor = entry.first;
                double rate = entry.second;
                double newAmount = currentAmount * rate;

                if (newAmount > maxAmounts[neighbor]) {
                    maxAmounts[neighbor] = newAmount;
                    q.push(neighbor);
                }
            }
        }

        return maxAmounts;
    }
};