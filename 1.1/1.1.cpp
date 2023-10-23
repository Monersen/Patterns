#include <iostream>
#include "SqlSelectQuery.h"
using namespace std;

int main()
{
	SqlSelectQueryBuilder queryBuilder;

	queryBuilder.AddColumn("name").AddColumn("phone");
	queryBuilder.AddFrom("students");
	queryBuilder.AddWhere("id", "42").AddWhere("name", "John");

	cout << queryBuilder.BuildQuery() << endl;

	return 0;
}