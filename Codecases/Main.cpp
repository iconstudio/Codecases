#include <iostream>
#include <string>
#include <array>
#include <concepts>
#include <vector>
#include <algorithm>

class Problem003052
{
public:
	constexpr Problem003052() = default;

	constexpr Problem003052(const std::vector<int>& list)
		: inputs(list)
	{}

	inline constexpr int operator()() const noexcept
	{
		int result = 0;

		std::array<bool, 42> outputs{ false };

		std::for_each(inputs.cbegin(), inputs.cend(), [&](const int& value) {
			const int fourtytwo = value % 42;

			bool& output_fourtytwo = outputs[fourtytwo];

			if (!output_fourtytwo)
			{
				result++;
				output_fourtytwo = true;
			}
		});

		return result;
	}

	std::vector<int> inputs;
};

int main()
{
	std::cout.sync_with_stdio(false);

	int index = 0;
	int value = 0;
	std::vector<int> inputs{ 10 };

	while (index < 10 && std::cin >> value)
	{
		inputs.push_back(value);
		index++;
	}

	const auto solution = Problem003052{ inputs };
	const auto result = solution();

	std::cout << "===================================\n";
	std::cout << "´ä: " << result << ".\n";
	std::cout << "===================================\n";

	return 0;
}

