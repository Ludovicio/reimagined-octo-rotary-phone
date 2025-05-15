#include <string>
#include <vector>
#include <memory>
#include "Sys.h"
#include <iostream>

class OCTOAPI Octo {
public:
    std::string dame();
};

class OCTOAPI Rotary {
public:
    Rotary();
    std::string redame();
private:
std::vector<Octo> vo;
};

class OCTOAPI SysTime {
public:
    SysTime(const SysTime&) = delete;
    void operator=(const SysTime&) = delete;

    ~SysTime() = default;

    /** \brief Get the singleton instance of the SystemTime.
     * \return Singleton instance of the SystemTime.
     */
    static std::shared_ptr<SysTime> getInstance() {
    static std::shared_ptr<SysTime> instance(new SysTime());
    return (instance);
    }

    /** \brief Get the total time passed until the end of last frame.
     * \return Total time passed until last frame.
     */
    std::shared_ptr<SysTime> clone() {
    return getInstance();
    }

    inline void setSystemTimer(std::shared_ptr<Octo> timer) {
    if (!timer) {
        std::cout << "ERROR: System timer can only be set once";
    } else {
        this->timer = timer;
    }
    }

private:
    SysTime() : timer(nullptr) {}  //!< Basic constructor to be used internally.

    std::shared_ptr<Octo> timer;      //!< Actual implementation of Timer to be used.

    uint64_t _getTotalTime() {
        return endT - lostTime;
    }

    uint64_t _getInitTime() {
        return endT;
    }

    uint64_t endT;
    uint64_t lostTime;
};