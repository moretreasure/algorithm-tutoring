﻿#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> originarray = array;
	vector<int> result;
	for (int i = 0; i < commands.size(); i++)
	{
		//지우기
		array = originarray;
		array.erase(array.begin(),
			array.begin() + commands[i][0] - 1);
		temp = commands[i][1] - (commands[i][0] - 1);
		array.erase(array.begin() + temp,
			array.end());
		//정렬하기
		sort(array.begin(), array.end());
		//확인한 결과값을 벡터에 순서대로 저장
		result.push_back(array[commands[i][2] - 1]);
	}
	return result;
}