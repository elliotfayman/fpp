// ======================================================================
// \title  Modules3SerializableAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Modules3 struct
// ======================================================================

#ifndef Modules3SerializableAc_HPP
#define Modules3SerializableAc_HPP

#include "Fw/Types/BasicTypes.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"
#include "Modules1SerializableAc.hpp"

class Modules3 :
  public Fw::Serializable
{

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the serial representation
      SERIALIZED_SIZE =
        M::Modules1::SERIALIZED_SIZE
    };

  public:

    // ----------------------------------------------------------------------
    // Constructors
    // ----------------------------------------------------------------------

    //! Constructor (default value)
    Modules3();

    //! Member constructor
    Modules3(const M::Modules1& x);

    //! Copy constructor
    Modules3(
        const Modules3& obj //!< The source object
    );

    //! Copy assignment operator
    Modules3& operator=(
        const Modules3& obj //!< The source object
    );

    //! Equality operator
    bool operator==(
        const Modules3& obj //!< The other object
    ) const;

    //! Inequality operator
    bool operator!=(
        const Modules3& obj //!< The other object
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

    //! Get member x
    const M::Modules1& getx() const;

    // ----------------------------------------------------------------------
    // Setter functions
    // ----------------------------------------------------------------------

    //! Set all values
    void set(const M::Modules1& x);

    //! Set member x
    void setx(const M::Modules1& x);

  private:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    M::Modules1 x;

};

#endif
