#include <iostream>
#include "val.h"

Value Value::operator+(const Value &op) const {

    if (op.IsInt() && IsInt()) {
        return GetInt() + op.GetInt();
    }
    if (IsReal() && op.IsReal()) {
        return GetReal() + op.GetReal();
    }
    if (IsInt() && op.IsReal()) {
        return GetInt() + op.GetReal();
    }
    if (IsReal() && op.IsInt()) {
        return GetReal() + op.GetInt();
    }

    return Value(VERR);

}

Value Value::operator-(const Value &op) const {
    if (op.IsInt() && IsInt()) {
        return GetInt() - op.GetInt();
    }
    if (IsReal() && op.IsReal()) {
        return GetReal() - op.GetReal();
    }
    if (IsInt() && op.IsReal()) {
        return GetInt() - op.GetReal();
    }
    if (IsReal() && op.IsInt()) {
        return GetReal() - op.GetInt();
    }

    return Value(VERR);

}

Value Value::operator*(const Value &op) const {
    if (op.IsInt() && IsInt()) {
        return GetInt() * op.GetInt();
    }
    if (IsReal() && op.IsReal()) {
        return GetReal() * op.GetReal();
    }
    if (IsInt() && op.IsReal()) {
        return GetInt() * op.GetReal();
    }
    if (IsReal() && op.IsInt()) {
        return GetReal() * op.GetInt();
    }

    return Value(VERR);
}

Value Value::operator/(const Value &op) const {
    if (IsInt() && op.IsInt()) {
        if (op.GetInt() == 0) {
            return Value(VERR);
        } else {
            return GetInt() / op.GetReal();
        }
    }

    if (IsReal() && op.IsReal()) {
        return GetReal() / op.GetReal();
    }
    if (IsInt() && op.IsReal()) {
        return GetInt() / op.GetReal();
    }
    if (IsReal() && op.IsInt()) {
        return GetReal() / op.GetInt();
    }

    if (op.GetReal() == 0 || op.GetInt() == 0) { // can't divide by 0
        return Value(VERR);
    }

    return Value(VERR);
}

Value Value::operator==(const Value &op) const {
    if (op.IsInt() && IsInt()) {
        return GetInt() == op.GetInt();
    }
    if (IsReal() && op.IsReal()) {
        return GetReal() == op.GetReal();
    }
    if (IsInt() && op.IsReal()) {
        return GetInt() == op.GetReal();
    }
    if (IsReal() && op.IsInt()) {
        return GetReal() == op.GetInt();
    }
    if (IsBool() && op.IsBool()) {
        return GetBool() == op.GetBool();
    }

    return Value(VERR);

}

Value Value::operator>(const Value &op) const {
    if (op.IsInt() && IsInt()) {
        return GetInt() > op.GetInt();
    }
    if (IsReal() && op.IsReal()) {
        return GetReal() > op.GetReal();
    }
    if (IsInt() && op.IsReal()) {
        return GetInt() > op.GetReal();
    }
    if (IsReal() && op.IsInt()) {
        return GetReal() > op.GetInt();
    }

    return Value(VERR);

}

Value Value::operator<(const Value &op) const {

    if (op.IsInt() && IsInt()) {
        return GetInt() < op.GetInt();
    }
    if (IsReal() && op.IsReal()) {
        return GetReal() < op.GetReal();
    }
    if (IsInt() && op.IsReal()) {
        return GetInt() < op.GetReal();
    }
    if (IsReal() && op.IsInt()) {
        return GetReal() < op.GetInt();
    }

    return Value(VERR);

}

Value Value::operator&&(const Value &op) const {
    if (IsBool() && op.IsBool()) {
        return GetBool() && op.GetBool();
    }

    return Value(VERR);

}

Value Value::operator||(const Value &op) const {

    if (IsBool() && op.IsBool()) {
        return GetBool() || op.GetBool();
    }

    return Value(VERR);

}

Value Value::operator!() const { //NOT Unary operator
    if (IsInt()) {
        return Value(VERR);
    }
    if (IsBool()) {
        return !GetBool();
    }

    return Value(VERR);
}

