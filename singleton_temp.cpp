#include <mutex>
#include <memory>
#include <iostream>

// 单例模板类（CRTP设计模式，支持任意类作为单例）
template <typename T>
class Singleton {
protected:
    // 禁止外部构造/拷贝/赋值
    Singleton() = default;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;

public:
    // 线程安全的获取单例实例（懒汉模式，双重检查锁定）
    static T& GetInstance() {
        static std::once_flag flag;  // 保证初始化仅执行一次
        std::call_once(flag, []() {
            // 私有构造函数可访问（T继承Singleton，为友元）
            instance_.reset(new T());
        });
        return *instance_;
    }

private:
    static std::unique_ptr<T> instance_;  // 智能指针自动管理内存
};

// 初始化静态成员变量
template <typename T>
std::unique_ptr<T> Singleton<T>::instance_ = nullptr;

// 使用示例：定义一个单例类
class Config : public Singleton<Config> {
    friend class Singleton<Config>;  // 允许Singleton访问私有构造
private:
    Config() = default;  // 私有构造，确保仅通过GetInstance创建
public:
    void Print() { std::cout << "Config Singleton" << std::endl; }
};

int main(int argc, char const *argv[])
{
    Config& cfg = Config::GetInstance();
    cfg.Print();
    return 0;
}
