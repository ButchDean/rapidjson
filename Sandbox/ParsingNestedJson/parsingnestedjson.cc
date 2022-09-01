#include <cstdio>
#include <string>
#include <fstream>

#include <rapidjson/document.h>
#include <rapidjson/prettywriter.h>

void ReadJsonRaw(std::string& buffer) {
    std::fstream jsonFile;
    jsonFile.open("playingcardsdata.json", std::ios::in);

    buffer.clear();

    if(jsonFile.is_open()) {
        while(jsonFile) {
            std::string line;
            std::getline(jsonFile, line);
            buffer += line;
        }
        jsonFile.close();
        std::printf("%s\n", buffer.c_str());
    } else {
        std::perror("Could not open .json data file");
    }

    // Process the JSON mimfied buffer
    char charBuf[buffer.size()];
    memcpy(charBuf, buffer.c_str(), buffer.size());

    rapidjson::Document doc;

    if(doc.Parse(charBuf).HasParseError()) {
        std::perror("Failed to parse the json buffer");
        return;			
    }

    std::puts("Successfully parsed JSON into object.");

    std::puts("====================");
    rapidjson::Value& s = doc["1"];
    std::printf("%s\n", s.GetString());
    std::puts("====================");
}

int main() {
    std::string bufr;

    return 0;
}