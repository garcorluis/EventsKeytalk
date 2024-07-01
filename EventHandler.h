#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H

#include <memory>
#include <functional>

template <typename Sender, typename Args>
class EventHandler {
public:
    using HandlerType = std::function<void(Args&)>;

    EventHandler(const std::shared_ptr<Sender>& sender, HandlerType handler)
        : _sender(sender), _handler(std::move(handler)) {}

    void operator()(Args& args) const {
        if (_handler) {
            _handler(args);
        }
    }

private:
    std::weak_ptr<Sender> _sender;
    HandlerType _handler;
};

#endif // EVENT_HANDLER_H