#include <iostream>
#include <vector>
bool BinarySearch(std::vector<int>& v, int elem, int start, int end)
{
	if (start == end)
	{
		return false;
	}
	int mid = (start + end) / 2;
	if (v[mid] == elem)
	{
		return true;
	}
	if (v[mid] > elem)
	{
		return BinarySearch(v, elem, start, mid);
	}
	else
	{
		return BinarySearch(v, elem, mid + 1, end);
	}
}
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> v[i];
	}
	int x;
	while (std::cin >> x)
	{
		std::cout << (BinarySearch(v, x, 0, v.size()) ? "Element exists" : "Element does not exists");
	}
}