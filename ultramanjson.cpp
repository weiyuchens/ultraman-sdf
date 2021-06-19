#include <iostream>

using namespace std;

/**
 * JSON作为树状结构，仅包含六种数据类型
 * 
 * null     :   表示空
 * boolean  :   表示true或者false
 * number   :   表示数字，一般通过浮点数表示
 * string   :   表示字符串
 * array    :   表示数组[]
 * object   :   表示对象{}
 * 
 * **/
typedef enum{
    ULTRAMAN_NULL,
    ULTRAMAN_TRUE,
    ULTRAMAN_FALSE,
    ULTRAMAN_NUMBER,
    ULTRAMAN_STRING,
    ULTRAMAN_ARRAY,
    ULTRAMAN_OBJECT
} ultraman_type;

typedef struct {
    ultraman_type type;
} json_value;

int ultraman_json_parse(json_value* value, const char* json); // 是解析JSON函数

ultraman_type ultraman_get_json_value_type(const json_value* value); // 获取json的值类型的函数

int main()
{
    cout << "This is a project dealing with serialized data format." << endl;
    return 0;
}