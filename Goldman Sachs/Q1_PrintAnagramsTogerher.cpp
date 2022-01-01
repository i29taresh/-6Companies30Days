// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int n = string_list.size();
        map<string, vector<string>> mp;
        for(int i = 0; i< n; i++){
            string a = string_list[i];
            sort(a.begin(), a.end());
            mp[a].push_back(string_list[i]);
        }
        vector<vector<string>> ans;
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
