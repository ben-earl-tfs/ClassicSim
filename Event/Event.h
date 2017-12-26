#ifndef EVENT_H
#define EVENT_H

class Event {
public:
    friend bool operator<(const Event&, const Event&);
    friend bool operator>(const Event&, const Event&);
    friend bool operator<=(const Event&, const Event&);
    friend bool operator>=(const Event&, const Event&);

    virtual ~Event() {}
    virtual void act(void) = 0;
protected:
    float get_priority(void) const;
    float priority;
private:
};


class Compare {
public:
    bool operator() (Event*&, Event*&);
};


#endif // EVENT_H