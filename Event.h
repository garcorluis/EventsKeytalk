#ifndef EVENT_H
#define EVENT_H

#include <vector>
#include "EventHandler.h"

template <typename Sender, typename Args>
class Event {
public:
    using HandlerType = EventHandler<Sender, Args>;

    void operator+=(HandlerType&& handler) {
        _handlers.emplace_back(std::move(handler));
    }

    void operator()(Args& args) const {
        for (const auto& handler : _handlers) {
            handler(args);
        }
    }

private:
    std::vector<HandlerType> _handlers;
};

#endif // EVENT_H