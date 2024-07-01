#ifndef EVENT_ARGS_H
#define EVENT_ARGS_H

template<typename T>
class EventArgs {
public:
    explicit EventArgs(T args) : _args(args) {}
    virtual ~EventArgs() = default;

    T Args() const { return _args; }
private:
    T _args;
};

#endif // EVENT_ARGS_H