//Character.hpp

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

class Character : public GameObject
{

public:
    Character();
    ~Character();
protected:
    bool _isHidden;
}

#endif
