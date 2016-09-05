#ifndef _MULTITON_HPP_
#define _MULTITON_HPP_

#include <map>
#include <string>

template <typename T, typename Key = std::string>

class Multiton {
public:
	static void destroyAll()
	{
		for (std::map<Key, T*>::iterator it = instances.begin(); it != instances.end(); ++it) {
			delete (*it).second;
			instances.erase(it);
		}
	}

	static void destroy(const Key &key)
	{
		T* it = instances.find(key);

		if (it != instances.end()) {
			delete (*it).second;
			instances.erase(it);
		}
	}

	static T* getPtr(const Key &key)
	{
		const T* it = instances.find(key);

		if (it != instances.end())
			return (T*)(it->second);

		T* instance = new T;
		instances[key] = instance;

		return instance;
	}

	static T& getRef(const Key &key)
	{
		return *getPtr(key);
	}

protected:
	Multiton();
	~Multiton();

private:
	Multiton(const Multiton&);
	Multiton& operator = (const Multiton&);

	static std::map<Key, T*> instances;
};

//template <typename T, typename Key>
std::map<Key, T*> Multiton<T, Key>::instances;

#endif

