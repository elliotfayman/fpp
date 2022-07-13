// ======================================================================
// \title  PrimitiveSerializableAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Primitive struct
// ======================================================================

#ifndef PrimitiveSerializableAc_HPP
#define PrimitiveSerializableAc_HPP

#include "Fw/Types/BasicTypes.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

//! Top-level annotation, line 1
//! Top-level annotation, line 2
class Primitive :
  public Fw::Serializable
{

  public:

    // ----------------------------------------------------------------------
    // StringSize80 class
    // ----------------------------------------------------------------------

    class StringSize80 :
      public Fw::StringBase
    {

      public:

        enum {
          SERIALIZED_SIZE = 80 + sizeof(FwBuffSizeType) //!< Size of buffer + storage of two size words
        };

        //! Default constructor
        StringSize80();

        //! Char array constructor
        StringSize80(const char* src);

        //! String base constructor
        StringSize80(const Fw::StringBase& src);

        //! Copy constructor
        StringSize80(const StringSize80& src);

        //! Destructor
        ~StringSize80();

        //! Copy assignment operator
        StringSize80& operator=(const StringSize80& other);

        //! String base assignment operator
        StringSize80& operator=(const Fw::StringBase& other);

        //! char* assignment operator
        StringSize80& operator=(const char* other);

        //! Retrieves char buffer of string
        const char* toChar() const;

        NATIVE_UINT_TYPE getCapacity() const;

      private:

        char m_buf[80]; //!< Buffer for string storage

    };

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the serial representation
      SERIALIZED_SIZE =
        sizeof(F32) * 3 +
        sizeof(F64) +
        sizeof(I16) +
        sizeof(I32) +
        sizeof(I64) +
        sizeof(I8) +
        sizeof(U16) +
        sizeof(U32) +
        sizeof(U64) +
        sizeof(U8) +
        sizeof(bool) +
        StringSize80::SERIALIZED_SIZE
    };

  public:

    // ----------------------------------------------------------------------
    // Constructors
    // ----------------------------------------------------------------------

    //! Constructor (default value)
    Primitive();

    //! Member constructor
    Primitive(
        const F32 (&mF32)[3],
        F64 mF64,
        I16 mI16,
        I32 mI32,
        I64 mI64,
        I8 mI8,
        U16 mU16,
        U32 mU32,
        U64 mU64,
        U8 mU8,
        bool m_bool,
        const StringSize80& m_string
    );

    //! Copy constructor
    Primitive(
        const Primitive& obj //!< The source object
    );

    //! Member constructor (scalar values for arrays)
    Primitive(
        F32 mF32,
        F64 mF64,
        I16 mI16,
        I32 mI32,
        I64 mI64,
        I8 mI8,
        U16 mU16,
        U32 mU32,
        U64 mU64,
        U8 mU8,
        bool m_bool,
        const StringSize80& m_string
    );

    //! Copy assignment operator
    Primitive& operator=(
        const Primitive& obj //!< The source object
    );

    //! Equality operator
    bool operator==(
        const Primitive& obj //!< The other object
    ) const;

    //! Inequality operator
    bool operator!=(
        const Primitive& obj //!< The other object
    ) const;

  public:

    // ----------------------------------------------------------------------
    // Member functions
    // ----------------------------------------------------------------------

    //! Serialization
    Fw::SerializeStatus serialize(
        Fw::SerializeBufferBase& buffer //!< The serial buffer
    ) const;

    //! Deserialization
    Fw::SerializeStatus deserialize(
        Fw::SerializeBufferBase& buffer //!< The serial buffer
    );

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

    //! Convert struct to string
    void toString(
        Fw::StringBase& sb //!< The StringBase object to hold the result
    ) const;

#endif

    // ----------------------------------------------------------------------
    // Getter functions
    // ----------------------------------------------------------------------

    //! Get member mF32
    const F32* getmF32() const;

    //! Get member mF64
    F64 getmF64() const;

    //! Get member mI16
    I16 getmI16() const;

    //! Get member mI32
    I32 getmI32() const;

    //! Get member mI64
    I64 getmI64() const;

    //! Get member mI8
    I8 getmI8() const;

    //! Get member mU16
    U16 getmU16() const;

    //! Get member mU32
    U32 getmU32() const;

    //! Get member mU64
    U64 getmU64() const;

    //! Get member mU8
    U8 getmU8() const;

    //! Get member m_bool
    bool getm_bool() const;

    //! Get member m_string
    const StringSize80& getm_string() const;

    // ----------------------------------------------------------------------
    // Setter functions
    // ----------------------------------------------------------------------

    //! Set all values
    void set(
        const F32 (&mF32)[3],
        F64 mF64,
        I16 mI16,
        I32 mI32,
        I64 mI64,
        I8 mI8,
        U16 mU16,
        U32 mU32,
        U64 mU64,
        U8 mU8,
        bool m_bool,
        const StringSize80& m_string
    );

    //! Set member mF32
    void setmF32(const F32 (&mF32)[3]);

    //! Set member mF64
    void setmF64(F64 mF64);

    //! Set member mI16
    void setmI16(I16 mI16);

    //! Set member mI32
    void setmI32(I32 mI32);

    //! Set member mI64
    void setmI64(I64 mI64);

    //! Set member mI8
    void setmI8(I8 mI8);

    //! Set member mU16
    void setmU16(U16 mU16);

    //! Set member mU32
    void setmU32(U32 mU32);

    //! Set member mU64
    void setmU64(U64 mU64);

    //! Set member mU8
    void setmU8(U8 mU8);

    //! Set member m_bool
    void setm_bool(bool m_bool);

    //! Set member m_string
    void setm_string(const StringSize80& m_string);

  private:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    F32 mF32[3];
    F64 mF64;
    I16 mI16;
    I32 mI32;
    I64 mI64;
    I8 mI8;
    U16 mU16;
    U32 mU32;
    U64 mU64;
    U8 mU8;
    bool m_bool;
    StringSize80 m_string;

};

#endif
