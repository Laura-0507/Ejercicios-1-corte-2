#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // valor -> índice

        for (int i = 0; i < nums.size(); i++) {
            int complemento = target - nums[i];

            // Si ya vimos el complemento, devolvemos indices
            if (seen.count(complemento)) {
                return {seen[complemento], i};
            }

            // Guardamos el número con su índice
            seen[nums[i]] = i;
        }

        return {}; // solo para evitar warnings, siempre habrá solución
    }
};

