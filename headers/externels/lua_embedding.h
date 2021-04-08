// lua_embedding.cpp
// properly embeds lua scripts
// with error handling
// and script checking
// Juna Rachelle 2021

Lua_Start {
     extern "C"{
        // include lua files
    }
}

Get_Script {
    lua_State *L = luaL_newstate();
    
}