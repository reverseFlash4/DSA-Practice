cmake_minimum_required(VERSION 4.2)
project(DSA_Practice)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_Practice main.cpp
        Graphs/TopologicalSort.cpp
        Graphs/TopologicalSort.h
        Arrays/ContainsDuplicate.cpp
        Arrays/ContainsDuplicate.h
        Arrays/ValidAnagram.cpp
        Arrays/ValidAnagram.h
        Arrays/TwoSum.cpp
        Arrays/TwoSum.h
        Arrays/GroupAnagrams.cpp
        Arrays/GroupAnagrams.h
        Arrays/TopKFrequentElements.cpp
        Arrays/TopKFrequentElements.h
        Intervals/MergeIntervals.cpp
        Intervals/MergeIntervals.h
        Arrays/EncodeAndDecodeStrings.cpp
        Arrays/EncodeAndDecodeStrings.h
        Arrays/ProductExceptSelf.cpp
        Arrays/ProductExceptSelf.h
        Arrays/LongestConsecutiveSequence.cpp
        Arrays/LongestConsecutiveSequence.h
        BinarySearch/BinarySearch.cpp
        BinarySearch/BinarySearch.h
        Arrays/ValidSudoku.cpp
        Arrays/ValidSudoku.h
        Stack/ValidParentheses.cpp
        Stack/ValidParentheses.h
        Heap/LastStoneWeight.cpp
        Heap/LastStoneWeight.h
)
