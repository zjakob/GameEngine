#ifndef EVENT_LISTENER_H
#define EVENT_LISTENER_H

template <typename T>
class EventListener
{
public:

	template <typename T>
	void handleEvent(T& event) = 0;

	/*
	virtual const std::string& getName() const = 0;

	virtual inline bool operator==(const EventListener &rhs) const 
	{ 
		return this->getName().compare(rhs.getName()) == 0 ? true : false; 
	}
	*/
};

#endif
