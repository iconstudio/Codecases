#include <iostream>
#include <string>
#include <span>
#include <array>
#include <concepts>
#include <vector>
#include <ranges>
#include <initializer_list>
#include <algorithm>

class Problem003052
{
public:
	constexpr Problem003052()
	{}

	constexpr Problem003052()
	{}

	inline constexpr int operator()() const noexcept
	{
		int result = 0;

		std::array<int, 42> outputs{};
		outputs.fill(-1);

		auto output_it = outputs;

		std::for_each(inputs.cbegin(), inputs.cend(), [&](const int& value) {
			const int tenth = value % 10;
			const int fourtytwo = value % 42;

			//int& output_ten = outputs[tenth];
			int& output_fourtytwo = outputs[fourtytwo];

			if (-1 == output_fourtytwo)
			{
				result++;
			}

			output_fourtytwo++;
		});

		return result;
	}

	std::vector<int> inputs{ 39, 40, 41, 42, 43, 44, 82, 83, 84, 85 };
};

int main()
{
	std::cout.sync_with_stdio(false);

	int index = 0;
	int value = 0;

	while (std::cin >> value && index < 10)
	{
		index++;
	}

	const auto solution = Problem003052{};
	const auto result = solution();

	std::cout << "===================================\n";
	std::cout << "´ä: " << result << ".\n";
	std::cout << "===================================\n";

	return 0;
}

