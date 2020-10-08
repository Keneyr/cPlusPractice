#pragma once

//模板放在头文件中定义
//template <typename T>
//T add(const T &a, const T &b)
//{
//	return a + b;
//}

//模板在头文件中声明，在cpp中定义
template<typename T>
T add(const T &a, const T &b);
