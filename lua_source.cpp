extern "C" {
#include "src/lstate.h"
#include "src/lauxlib.h"
#include "src/lualib.h"
}

int main(int argc, char* argv[])
{
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);

    luaL_dofile(L, "test.lua");
    lua_close(L);
    return 0;
}
