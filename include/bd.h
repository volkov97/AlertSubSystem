#include "alert.h"


class bd {
private:
	std::string fileName;
public:
	bd();
	~bd() {}
	std::vector<alert> ReadDataBase();
	int WriteDataBase(std::vector<alert>);
	int put(alert);
	int get(alert);
	int remove(alert);
	void WriteSingleObject(alert);
	int compareAlert(alert, alert);
};