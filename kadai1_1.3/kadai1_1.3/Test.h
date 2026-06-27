#pragma once
class Test
{
public:
	Test();

	~Test();

public:
	void State(int a);

    void StatusDisplay() const;

	static void InstanceCount();

private:
	int num = 0;
	static int count ;
};

