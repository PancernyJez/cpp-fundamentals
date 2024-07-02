#include "validation.hpp"

std::string getErrorMessage(ErrorCode error) {
    switch (error) {
        default:
            return "";

        case ErrorCode::Ok:
            return "Ok";

        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs at least nine characters";

        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs at least one number";

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs at least one special character";

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs at least one uppercase letter";

        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
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
