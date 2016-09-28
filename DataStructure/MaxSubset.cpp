#define TEST_CASE 3

#include<iostream>
#include<vector>

#include"MaxSubset.h"
#include"MaxSubsetResult.h"

#if TEST_CASE == 1

int main()
{
    int K;
    std::cin >> K;
    int i = 0;
    std::vector<int> Array(K);
    for (i = 0; i < K; i++) {
        std::cin >> Array[i];
    }
    //1 2 3 -5 -3 0 0 3 12 -23 11 4
    //Result res = MaxSubsetResult(Array);
    Result res = MaxSubSum(Array);
    std::cout << res.maxSum << " " << res.firstNum << " " << res.lastNum << std::endl;
    system("pause");
    return 0;
}

#elif TEST_CASE == 2

int main()
{
    int K;
    std::cin >> K;
    int Len = K, i = 0;
    std::vector<int> Array(K);
    for (i = 0; i < K; i++) {
        std::cin >> Array[i];
    }
    std::cout << MaxSubSet(Array) << std::endl;
    Result res = MaxSubsetResult(Array);
    std::cout << res.maxSum << " " << res.firstNum << " " << res.lastNum << std::endl;
    Result res2 = MaxSubSum(Array);
    std::cout << res2.maxSum << " " << res2.firstNum << " " << res2.lastNum << std::endl;
    system("pause");
    return 0;
}
#elif TEST_CASE == 3

int main()
{
    // Create a vector containing integers
    //std::vector<int> v = { 1, -10, -11,3,-27, -23 -12, 13, -4, -5, -3, -23, 7, -21 };
    //std::vector<int> v = { -10 ,1 ,2 ,3 ,4 ,-5 ,-23, 3, 7 ,-21 };//sample
    //std::vector<int> v = { -3,0, 0, 3, 4, -2, 1, -5, 6, 3, -12, 2, 3, -6 ,1 ,2 ,3 ,4 ,-5 ,-23, 3, 7 ,-21 };//sample换1个数字。有正负，负数开头结尾，有并列最大和
    //std::vector<int> v = { -2, 11, -4, 13, -5, -2 }; // 子列中含有负数
    //std::vector<int>v = { 1,2,3,4,-10,10 };//并列和对应相同i但是不同j，即尾是0
    //std::vector<int>v = { -10,-3 };// 全是负数
    std::vector<int> v = { 1,-2,0,0,1,2,3,4,-10,0,0,11 }; // 最大和前面有一段是0
    //std::vector<int> v = { 1, 2, 3, -5, -3, 0, 0, 3, 12, -23, 11, 4};//前面一堆零，另外含相同子列和

    for (auto item : v) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    //Result res = MaxSubsetResult(v);
    //std::cout << std::endl<<res.maxSum << " " << res.firstNum << " " << res.lastNum << std::endl;
    Result res2 = MaxSubSum(v);
    std::cout << res2.maxSum << " " << res2.firstNum << " " << res2.lastNum << std::endl;

    system("pause");
    return 0;
}
#endif