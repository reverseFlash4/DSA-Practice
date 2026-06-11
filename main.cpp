#include <iostream>

#include "Arrays/ContainsDuplicate.h"
#include "Arrays/EncodeAndDecodeStrings.h"
#include "Arrays/GroupAnagrams.h"
#include "Arrays/LongestConsecutiveSequence.h"
#include "Arrays/ProductExceptSelf.h"
#include "Arrays/TopKFrequentElements.h"
#include "Arrays/TwoSum.h"
#include "Graphs/TopologicalSort.h"
#include "Arrays/ValidAnagram.h"
#include "Arrays/ValidSudoku.h"
#include "BinarySearch/BinarySearch.h"
#include "Heap/KthLargestElementinaStream.h"
#include "Heap/LastStoneWeight.h"
#include "Intervals/MergeIntervals.h"
#include "SlindingWindow/BestTimetoBuyandSellStock.h"
#include "SlindingWindow/LongestRepeatingCharacterReplacement.h"
#include "SlindingWindow/LongestSubstringWithoutRepeatingCharacters.h"
#include "SlindingWindow/MinimumWindowSubstring.h"
#include "SlindingWindow/PermutationinString.h"
#include "Stack/MinStack.h"
#include "Stack/ReversePolishNotation.h"
#include "Stack/ValidParentheses.h"
#include "TwoPointers/ContainerWithMostWater.h"
#include "TwoPointers/ThreeSum.h"
#include "TwoPointers/TrappingRainWater.h"
#include "TwoPointers/TwoSumTwo.h"
#include "TwoPointers/ValidPalindrome.h"

int main() {
    //TopologicalSort::run();
    //ContainsDuplicate::run();
    //ValidAnagram::run();
    //TwoSum::run();
    //GroupAnagrams::run();
    //TopKFrequentElements::run();
    //MergeIntervals::run();
    //EncodeAndDecodeStrings::run();
    //ProductExceptSelf::run();
    //LongestConsecutiveSequence::run();
    //BinarySearch::run();
    // ValidSudoku::run();
    // ValidParentheses::run();
    // LastStoneWeight::run();
    // ValidPalindrome::run();
    // TwoSumTwo::run();
    // ThreeSum::run();
    // ContainerWithMostWater::run();
    // TrappingRainWater::run();
    // BestTimetoBuyandSellStock::run();
    // LongestSubstringWithoutRepeatingCharacters::run();
    // LongestRepeatingCharacterReplacement::run();
    // std::vector<int> nums = {1, 2, 3,3};
    // KthLargestElementinaStream kth_largest_elementina_stream(3, nums);
    // std::cout<<kth_largest_elementina_stream.add(3)<<std::endl;
    // std::cout<<kth_largest_elementina_stream.add(5)<<std::endl;
    // std::cout<<kth_largest_elementina_stream.add(6)<<std::endl;
    // std::cout<<kth_largest_elementina_stream.add(7)<<std::endl;
    // std::cout<<kth_largest_elementina_stream.add(8)<<std::endl;
    // PermutationinString::run();
    // MinimumWindowSubstring::run();
    MinStack minStack;
    minStack.push(1);
    minStack.push(2);
    minStack.push(0);
    std::cout<<minStack.getMin()<<std::endl;
    minStack.pop();
    std::cout<<minStack.top()<<std::endl;
    std::cout<<minStack.getMin()<<std::endl;
    ReversePolishNotation::run();
    return 0;
}
