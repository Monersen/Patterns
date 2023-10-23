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
	SqlSelectQueryBuilder& AddColumn(const vector<string>& columns) noexcept;
	SqlSelectQueryBuilder& AddFrom(const string table);
	SqlSelectQueryBuilder& AddWhere(const map<string, string>& kv) noexcept;
	string BuildQuery();

private:
	SqlSelectQuery db;
};