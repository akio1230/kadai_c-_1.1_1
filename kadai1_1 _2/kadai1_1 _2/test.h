#pragma once
class test
{
public:
	// コンストラクタの宣言
	test();
	test(int a, int b);
	// コピーコンストラクタの宣言
	test(const test& src);

	// デストラクタの宣言
	~test();

public:
	int hp = 0;
	int attack = 0;
};

