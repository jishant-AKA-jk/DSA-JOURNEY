// https://leetcode.com/problems/maximum-population-year/description/
class Solution {
    public:
        int maximumPopulation(vector<vector<int>>& logs) {
            std::vector<int> freq(101, 0);
            for (int i = 0; i < logs.size(); i++) {
                freq[logs[i][0] - 1950]++;
                freq[logs[i][1] - 1950]--;
            }

            int max_year = freq[0],max_ind=0;
            for(int i=1;i<freq.size();i++){
                freq[i] = freq[i-1] + freq[i];
                if(freq[i]>max_year)
                {
                    max_year=freq[i];
                    max_ind=i;
                }
            }

            return 1950 + max_ind;
        }
    };
