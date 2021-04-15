#include <assert.h>

// TODO: Declare a generic, templatized average function
template <typename T> T average(T a, T b) { return (a+b)/2; }

int main() { assert(average(2.0,5.0) == 3.5); }




#include <assert.h>
#include <string>
#include <sstream>

// TODO: Add the correct template specification
template <typename KeyType, typename ValueType>
class Mapping {
public:
  Mapping(KeyType key, ValueType value) : key(key), value(value) {}
  std::string Print() const {
    std::ostringstream stream;
    stream << key << ": " << value;
    return stream.str();
  }
  KeyType key;
  ValueType value;
};

// Test
int main() {
  Mapping<std::string, int> mapping("age", 20);
  assert(mapping.Print() == "age: 20");
}