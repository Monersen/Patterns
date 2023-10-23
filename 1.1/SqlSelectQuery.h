#pragma once
#include <string>
#include <vector>
#include <map>
using namespace std;

class SqlSelectQuery
{
public:
	vector<string> columns;
	string table;
	map<string, string> terms;
};

class SqlSelectQueryBuilder
{
public:
	SqlSelectQueryBuilder& AddColumn(const string column);
	SqlSelectQueryBuilder& AddFrom(const string table);
	SqlSelectQueryBuilder& AddWhere(const string key, const string value);
	string BuildQuery();

private:
	SqlSelectQuery db;
};