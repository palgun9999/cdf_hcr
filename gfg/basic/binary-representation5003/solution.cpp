class Solution {
  public:
    string getBinaryRep(int n) 
    {
        return bitset<32>(n).to_string();
    }
};