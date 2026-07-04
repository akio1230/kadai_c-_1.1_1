#pragma once
template<class T>
T add(T a, T b)
{
	T result = a + b;
	std::cout << result << std::endl;
	return result;
}

template<class T>
T sub(T a, T b)
{
	T result = a - b;
	std::cout << result << std::endl;
	return result;
}

template<class T>
T mul(T a, T b)
{
	T result = a * b;
	std::cout << result << std::endl;
	return result;
}

template<class T>
T div(T a, T b)
{
	T result = a / b;
	std::cout << result << std::endl;
	return result;
}