#include <iostream>
#include <string>
#include <yaml-cpp/yaml.h>
using namespace std;
int main(){
    YAML::Node config = YAML::LoadFile("textyaml.yml");
    string TextStr = config["text"].as<string>();
    cout<<TextStr<<endl;
    return 0;
}
