#include <vector>
#include <iostream>

std::vector<int> Merge(const std::vector<int>& v1, const std::vector<int>& v2)
{
	std::vector<int> v;
	int i1 = 0;
	int i2 = 0;
	while (i1 < v1.size() && i2 < v2.size())
	{
		if (v1[i1] < v2[i2])
		{
			v.push_back(v1[i1++]);
		}
		else
		{
			v.push_back(v2[i2++]);
		}
	}
	while (i1 < v1.size())
	{
		v.push_back(v1[i1++]);
	}
	while (i2 < v2.size())
	{
		v.push_back(v2[i2++]);
	}
	return v;
}
void MergeSort(std::vector<int>& v)
{
	if (v.size() == 1)
	{
		return;
	}
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < v.size() / 2; ++i)
	{
		v1.push_back(v[i]);
	}
	for (int i = v.size() / 2; i < v.size(); ++i)
	{
		v2.push_back(v[i]);
	}
	MergeSort(v1);
	MergeSort(v2);
	v = Merge(v1, v2);
}

int main()
{
	std::vector<int> v{ 25, 58, 3, 90, 14, 27 };
	std::cout << "Initial vector \n";
	for (int i : v)
	{
		std::cout << i << " ";
	}

	std::cout << "\n";
	MergeSort(v);
	std::cout << "Sorted vector \n";
	for (int i : v)
	{
		std::cout << i << " ";
	}

}
