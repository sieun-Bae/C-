#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Version {
    uint8_t major;
    uint8_t minor;
    uint16_t patch;
} Version;

typedef struct Application {
    Version version;
    char*   name;
} Application;

/// TODO_1: Implement code.
///  It sets the version and the name to 'Application* out_app'.
///  'char* name' in 'struct Application' must be allocated and be copied from input 'const char* name'.
///  [Input]
///    - uint32_t version : 0x{patch:2bytes}{minor:1bytes}{major:1bytes}
///    - const char* name : string.
///  [Output]
///    - Application* out_app
void configure_app(Application* out_app, uint32_t version, const char* name)
{
     out_app->name = (char*)malloc(strlen(name)+1);
     out_app->name = name;
     strcpy(name, *(out_app->name));
     
     //out_app->version.major = version << 4;
     //out_app->version.minor = version<<=2;
     //out_app->version.patch = 
}

/// TODO_2: Implement code.
///  It returns TRUE(0) or FALSE(-1) after comparing app1 and app2.
///  [Input]
///    - Application* app1 : compare A
///    - Application* app2 : compare B
///  [Return]
///    - Return TRUE condition: same version and same name.
int is_same_app(Application* app1, Application* app2)
{
    bool t1, t2, t3, t4;
    
    t1 = strcmp(*(app1->name), *(app2->name));
    t2 = app1->version.major == app1->version.major;
    t3 = app1->version.minor == app1->version.minor;
    t4 = app1->version.patch == app1->version.patch;
    if(t1 && t2 && t3 && t4) { return 0; }
    return -1;
}

int main() {
    Application app1, app2;
    configure_app(&app1, 0x00040201, "app1");
    configure_app(&app2, 0x01231003, "app2");

    int ret = is_same_app(&app1, &app2);
    printf("Name(%s) Version(%d.%d.%d)\n", app1.name, app1.version.major, app1.version.minor, app1.version.patch);
    printf("Name(%s) Version(%d.%d.%d)\n", app2.name, app2.version.major, app2.version.minor, app2.version.patch);
    printf("%s and %s are %s\n", app1.name, app2.name, ret == 0 ? "same" : "different");

    return 0;
}
