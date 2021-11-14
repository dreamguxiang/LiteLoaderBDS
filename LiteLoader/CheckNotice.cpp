#define LL_UPDATE_CHECK "https://lxl-upgrade.amd.rocks/LXL/LXL.json"

#include "CheckNotice.h"
#include <string>
#include <LoggerAPI.h>
#include <Utils/NetworkHelper.h>
#include <nlohmann/json.hpp>
using namespace Logger;
using namespace std;

void ProcessData(int code, string body)
{
	if(code == 200)
	{
		try
		{
			nlohmann::json data = nlohmann::json::parse(body);

			//公告信息
			if (data["notice"].is_array())
			{
				for (auto& element : data["notice"])
					Info() << element.get<string>() << endl;
			}
		}
		catch (nlohmann::json::exception& e) {
			Debug("LL通知信息解析失败。{}", e.what());
		}
	}
	else
	{
		Debug("LL获取通知信息失败。错误码：{}", code);
	}
}

void CheckNotice()
{
	if (!HttpGet(LL_UPDATE_CHECK, ProcessData))
	{
		Debug("LL获取通知信息失败。");
	}
}