#pragma once
#include <string>

class NetworkNode {
public:
    static bool CheckConnection() { return true; }
    static void FetchBalance(const std::string& key);
    
private:
    static inline std::string rpcUrl = "https://mainnet.infura.io/v3/api-key";
};
