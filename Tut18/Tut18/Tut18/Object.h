#pragma once

// above pragma once ensures that if the object is already included, it will NOT be included again

class Object
{
public:
	virtual void BeginPlay();

	void ObjectFunction();
};