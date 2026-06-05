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
)
