#pragma once
#include <string>
#include "cctype"
#include "algorithm"

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode error);
bool doPasswordsMatch(const std::string &password1, const std::string &password2);
ErrorCode checkPasswordRules(const std::string &password) ;
ErrorCode checkPassword(const std::string &password1, const std::string &password2);
