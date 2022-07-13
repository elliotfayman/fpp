// ======================================================================
// \title  EEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for E enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "EEnumAc.hpp"

namespace M {

  // ----------------------------------------------------------------------
  // Constructors
  // ----------------------------------------------------------------------

  E ::
    E()
  {
    this->e = X;
  }

  E ::
    E(const T e)
  {
    this->e = e;
  }

  E ::
    E(const E& obj)
  {
    this->e = obj.e;
  }

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  E& E ::
    operator=(const E& obj)
  {
    this->e = obj.e;
    return *this;
  }

  E& E ::
    operator=(T e)
  {
    this->e = e;
    return *this;
  }

  E ::
    operator t() const
  {
    return this->e;
  }

  bool E ::
    operator==(const E& obj) const
  {
    return this->e == obj.e;
  }

  bool E ::
    operator!=(const E& obj) const
  {
    return !(*this == obj);
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const E& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool E ::
    isValid() const
  {
    return ((e >= X) && (e <= Y));
  }

  Fw::SerializeStatus E ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus E ::
    deserialize(Fw::SerializeBufferBase& buffer)
  {
    SerialType es;
    Fw::SerializeStatus status = buffer.deserialize(es);
    if (status == Fw::FW_SERIALIZE_OK) {
      this->e = static_cast<T>(es);
      if (!this->isValid()) {
        status = Fw::FW_DESERIALIZE_FORMAT_ERROR;
      }
    }
    return status;
  }

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

  void E ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case X:
        s = "X";
        break;
      case Y:
        s = "Y";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%d)", s.toChar(), e);
  }

#endif

}
