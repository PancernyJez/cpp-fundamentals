#pragma once
#include <algorithm>
#include <cctype>
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode const error) {
    switch (error) {
        default:
            return "";

        case ErrorCode::Ok:
            return "Ok\n";

        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "PasswordNeedsAtLeastNineCharacters";

        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "PasswordNeedsAtLeastOneNumber";

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "PasswordNeedsAtLeastOneSpecialCharacter";

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "PasswordNeedsAtLeastOneUppercaseLetter";

        case ErrorCode::PasswordsDoNotMatch:
            return "PasswordsDoNotMatch";
    }
}

bool doPasswordsMatch(const std::string &password1, const std::string &password2) {
    if (password1 == password2) {
        return true;
    } else {
        return false;
    }
}

ErrorCode checkPasswordRules(const std::string &password) {
    //        first i will try to check if theres at least 9 characters
    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    //    if predycate if there is none of the numbers rerturn errorcode
    else if (std::none_of(password.begin(), password.end(), [](char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::none_of(password.begin(), password.end(), [](char c) { return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (std::none_of(password.begin(), password.end(), [](char c) { return std::ispunct(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else
        return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string &password1, const std::string &password2) {
    if (doPasswordsMatch(password1, password2))
        return checkPasswordRules(password1);
    else
        return ErrorCode::PasswordsDoNotMatch;
}
