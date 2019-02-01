#ifndef ENTITY_H
#define ENTITY_H

#include "utility.hpp"
#include "component.hpp"

class Entity {
public:
	Entity();
	int id;

	// Template functions MUST be defined in the header as the compiler must see it before generating code for any usages.
	template <typename T>
	T* getComponent()
	{
		for (int i = 0; i < components.size(); i++) {
			// Check if our component's typeID matches our given component's static typeID.
			// In the future, we can optimize this by simply indexing into our vector using the component's static typeID
			// assuming that the typeID corresponds to a valid index. Leave this for now.
			if (components[i]->getTypeID() == T::typeID)
			{
				// If it matches, cast it to the correct type and return a pointer to it.
				return static_cast<T*>(components[i]);
			}
		}
		return nullptr;
	}

	template <typename T>
	void setComponent(T* component)
	{
		components[T::typeID] = component;
	}
private:
	std::vector<BaseComponent*> components;
};

#endif
