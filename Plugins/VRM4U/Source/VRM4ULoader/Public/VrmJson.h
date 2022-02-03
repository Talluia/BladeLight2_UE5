#pragma once

#include "json.hpp"

class VrmJson {

public:
	nlohmann::ordered_json jsonData;

	bool init(const uint8* pData, size_t size);
};

