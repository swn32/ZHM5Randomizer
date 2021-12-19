#pragma once
#include "Randomizer.h"
class CustomItemSelection :
	public RandomisationStrategy
{
	int i = 0, j = 0;
	const RepositoryID* randomize(const RepositoryID* in_out_ID) override final;
	void initialize(Scenario scen, const DefaultItemPool* const default_pool) override
	{
		i = 0;
		j = 0;
	}
};


class CustomStashItemSelection :
	public RandomisationStrategy
{
	int i = 0;
	const RepositoryID* randomize(const RepositoryID* in_out_ID) override final;
	void initialize(Scenario scen, const DefaultItemPool* const default_pool) override
	{
		i = 0;
	}
};
