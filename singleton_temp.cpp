#include <mutex>
#include <memory>
#include <iostream>

template <typename Derived>
class Singleton {
private:
    static std::unique_ptr<Derived> m_Instance;

protected:
    Singleton() = default;

public:
    static Derived& GetInstance() {
        static std::once_flag flag;
        std::call_once(flag, [](){
            m_Instance.reset(new Derived());
        });
        return *m_Instance;
    }
};

template <typename Derived>
std::unique_ptr<Derived> Singleton<Derived>::m_Instance = nullptr;

class SingleConfig : public Singleton<SingleConfig>
{
    friend class Singleton<SingleConfig>;

private:
    SingleConfig() = default;

public:
    void Test() {
        std::cout<<"SingleConfig test"<<std::endl;
    }
};

int main(int argc, char const *argv[])
{
    SingleConfig& sc = SingleConfig::GetInstance();
    sc.Test();
    return 0;
}