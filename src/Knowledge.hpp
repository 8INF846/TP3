#pragma once

struct Knowledge {
public:
    // Attributes
    bool odor;
    bool wind;
    bool light;
    bool up;
    bool down;
    bool left;
    bool right;
    bool visited;
};

enum Movement {
    RUNOUT,
    GONORTH,
    GOWEST,
    GOSOUTH,
    GOEAST,
    SHOOTNORTH,
    SHOOTWEST,
    SHOOTSOUTH,
    SHOOTEAST,
    DONOTHING
};
