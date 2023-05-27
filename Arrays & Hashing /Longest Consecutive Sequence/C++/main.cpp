// if(nums.empty()) { return 0; }
//         if(nums.size() == 1) { return 1; }
//         int answer = 0, min = nums[nums.size()-1], sequence = 0;
//         for(int x = 0; x < nums.size(); x++)
//         {
//             if(nums[x] < min) { min = nums[x]; }
//         }
//         answer++;
//         int middle = min+1;
//         while(sequence < nums.size())
//         {
//             if(nums[sequence] == middle)
//             {
//                 answer++;
//                 middle++;
//                 sequence = 0;
//             }
//             else { sequence++; }
//         }
//         return answer;
//     }
