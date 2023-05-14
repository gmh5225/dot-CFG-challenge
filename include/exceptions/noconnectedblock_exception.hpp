//--------------------------------------------------------------------*- C++ -*-
// CFG: example of CFG
//
// @file noconnectedblock_exception.hpp
// @brief Exception for when there's a disconnected block

#ifndef NOCONNECTEDBLOCK_EXCEPTION_HPP
#define NOCONNECTEDBLOCK_EXCEPTION_HPP

namespace exceptions
{
    /// @brief Exception when no entry block is found
    class NoConnectedBlockException : public std::exception
    {
        /// @brief message to show with the exception
        std::string _msg;

    public:
        
        /// @brief Constructor of exception
        /// @param msg message to show to the user
        NoConnectedBlockException(const std::string &msg) : _msg(msg)
        {}

        /// @brief Return error message
        /// @return error message in a c string style
        virtual const char* what() const noexcept override
        {
            return _msg.c_str();
        }
    };
} // namespace exceptions

#endif