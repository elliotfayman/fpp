// ======================================================================
// \title  ActiveEventsComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ActiveEvents component base class
// ======================================================================

#ifndef ActiveEventsComponentAc_HPP
#define ActiveEventsComponentAc_HPP

#include "AArrayAc.hpp"
#include "EEnumAc.hpp"
#include "FpConfig.hpp"
#include "Fw/Cmd/CmdPortAc.hpp"
#include "Fw/Cmd/CmdRegPortAc.hpp"
#include "Fw/Cmd/CmdResponsePortAc.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Log/LogPortAc.hpp"
#include "Fw/Log/LogString.hpp"
#if FW_ENABLE_TEXT_LOGGING == 1
#include "Fw/Log/LogTextPortAc.hpp"
#endif
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Prm/PrmGetPortAc.hpp"
#include "Fw/Prm/PrmSetPortAc.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Fw/Tlm/TlmPortAc.hpp"
#include "Os/Mutex.hpp"
#include "SSerializableAc.hpp"
#include "TypedPortAc.hpp"

//! \class ActiveEventsComponentBase
//! \brief Auto-generated base for ActiveEvents component
//! 
//! An active component with events
class ActiveEventsComponentBase :
  public Fw::ActiveComponentBase
{

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    friend class ActiveEventsComponentBaseFriend;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    //! Enumerations for numbers of special input ports
    enum {
      NUM_CMDIN_INPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed input ports
    enum {
      NUM_TYPEDASYNC_INPUT_PORTS = 1,
      NUM_TYPEDGUARDED_INPUT_PORTS = 1,
      NUM_TYPEDSYNC_INPUT_PORTS = 3,
    };

    //! Enumerations for numbers of serial input ports
    enum {
      NUM_SERIALASYNC_INPUT_PORTS = 1,
      NUM_SERIALGUARDED_INPUT_PORTS = 1,
      NUM_SERIALSYNC_INPUT_PORTS = 1,
    };

    //! Enumerations for numbers of special output ports
    enum {
      NUM_CMDREGOUT_OUTPUT_PORTS = 1,
      NUM_CMDRESPONSEOUT_OUTPUT_PORTS = 1,
      NUM_EVENTOUT_OUTPUT_PORTS = 1,
      NUM_PRMGETOUT_OUTPUT_PORTS = 1,
      NUM_PRMSETOUT_OUTPUT_PORTS = 1,
      NUM_TEXTEVENTOUT_OUTPUT_PORTS = 1,
      NUM_TIMEGETOUT_OUTPUT_PORTS = 1,
      NUM_TLMOUT_OUTPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed output ports
    enum {
      NUM_TYPEDOUT_OUTPUT_PORTS = 1,
    };

    //! Enumerations for numbers of serial output ports
    enum {
      NUM_SERIALOUT_OUTPUT_PORTS = 5,
    };

    //! Event IDs
    enum {
      EVENTID_EVENTACTIVITYHIGH = 0x0, //! An activity high event with no params
      EVENTID_EVENTACTIVITYLOWTHROTTLED = 0x10, //! An activity low, throttled event with primitive params
      EVENTID_EVENTCOMMAND = 0x11, //! A command event with string params
      EVENTID_EVENTDIAGNOSTIC = 0x12, //! A diagnostic event with enum params
      EVENTID_EVENTFATALTHROTTLED = 0x13, //! A fatal, throttled event with array params
      EVENTID_EVENTWARNINGHIGH = 0x20, //! A warning high event with struct params
      EVENTID_EVENTWARNINGLOWTHROTTLED = 0x21, //! A warning low, throttled event with no params
    };

    //! Event throttle values: sets initial value of countdown variables
    enum {
      EVENTID_EVENTACTIVITYLOWTHROTTLED_THROTTLE = 5, //! Throttle reset count for EventActivityLowThrottled
      EVENTID_EVENTFATALTHROTTLED_THROTTLE = 10, //! Throttle reset count for EventFatalThrottled
      EVENTID_EVENTWARNINGLOWTHROTTLED_THROTTLE = 10, //! Throttle reset count for EventWarningLowThrottled
    };

  public:

    // ----------------------------------------------------------------------
    // Getters for special input ports
    // ----------------------------------------------------------------------

    //! Get special input port at index
    //! 
    //! \return cmdIn[portNum]
    Fw::InputCmdPort* get_cmdIn_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get typed input port at index
    //! 
    //! \return typedAsync[portNum]
    InputTypedPort* get_typedAsync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //! 
    //! \return typedGuarded[portNum]
    InputTypedPort* get_typedGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //! 
    //! \return typedSync[portNum]
    InputTypedPort* get_typedSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for serial input ports
    // ----------------------------------------------------------------------

    //! Get serial input port at index
    //! 
    //! \return serialAsync[portNum]
    Fw::InputSerializePort* get_serialAsync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get serial input port at index
    //! 
    //! \return serialGuarded[portNum]
    Fw::InputSerializePort* get_serialGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get serial input port at index
    //! 
    //! \return serialSync[portNum]
    Fw::InputSerializePort* get_serialSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Connect special input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputCmdRegPort* port //!< The input port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputCmdResponsePort* port //!< The input port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputLogPort* port //!< The input port
    );

    //! Connect port to prmGetOut[portNum]
    void set_prmGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputPrmGetPort* port //!< The input port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputPrmSetPort* port //!< The input port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputLogTextPort* port //!< The input port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputTimePort* port //!< The input port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputTlmPort* port //!< The input port
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to prmGetOut[portNum]
    void set_prmGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

  public:

    // ----------------------------------------------------------------------
    // Connect typed input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to serial output ports
    // ----------------------------------------------------------------------

    //! Connect port to serialOut[portNum]
    void set_serialOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to serialOut[portNum]
    void set_serialOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputPortBase* port //!< The port
    );

#endif

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction, initialization, and destruction
    // ----------------------------------------------------------------------

    //! Construct ActiveEventsComponentBase object
    ActiveEventsComponentBase(
        const char* compName = "" //!< The component name
    );

    //! Initialize ActiveEventsComponentBase object
    void init(
        NATIVE_INT_TYPE queueDepth, //!< The queue depth
        NATIVE_INT_TYPE msgSize, //!< The message size
        NATIVE_INT_TYPE instance = 0 //!< The instance number
    );

    //! Destroy ActiveEventsComponentBase object
    virtual ~ActiveEventsComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special input ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdIn input ports
    //! 
    //! \return The number of cmdIn input ports
    NATIVE_INT_TYPE getNum_cmdIn_InputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed input ports
    // ----------------------------------------------------------------------

    //! Get the number of typedAsync input ports
    //! 
    //! \return The number of typedAsync input ports
    NATIVE_INT_TYPE getNum_typedAsync_InputPorts();

    //! Get the number of typedGuarded input ports
    //! 
    //! \return The number of typedGuarded input ports
    NATIVE_INT_TYPE getNum_typedGuarded_InputPorts();

    //! Get the number of typedSync input ports
    //! 
    //! \return The number of typedSync input ports
    NATIVE_INT_TYPE getNum_typedSync_InputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of serial input ports
    // ----------------------------------------------------------------------

    //! Get the number of serialAsync input ports
    //! 
    //! \return The number of serialAsync input ports
    NATIVE_INT_TYPE getNum_serialAsync_InputPorts();

    //! Get the number of serialGuarded input ports
    //! 
    //! \return The number of serialGuarded input ports
    NATIVE_INT_TYPE getNum_serialGuarded_InputPorts();

    //! Get the number of serialSync input ports
    //! 
    //! \return The number of serialSync input ports
    NATIVE_INT_TYPE getNum_serialSync_InputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special output ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdRegOut output ports
    //! 
    //! \return The number of cmdRegOut output ports
    NATIVE_INT_TYPE getNum_cmdRegOut_OutputPorts();

    //! Get the number of cmdResponseOut output ports
    //! 
    //! \return The number of cmdResponseOut output ports
    NATIVE_INT_TYPE getNum_cmdResponseOut_OutputPorts();

    //! Get the number of eventOut output ports
    //! 
    //! \return The number of eventOut output ports
    NATIVE_INT_TYPE getNum_eventOut_OutputPorts();

    //! Get the number of prmGetOut output ports
    //! 
    //! \return The number of prmGetOut output ports
    NATIVE_INT_TYPE getNum_prmGetOut_OutputPorts();

    //! Get the number of prmSetOut output ports
    //! 
    //! \return The number of prmSetOut output ports
    NATIVE_INT_TYPE getNum_prmSetOut_OutputPorts();

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Get the number of textEventOut output ports
    //! 
    //! \return The number of textEventOut output ports
    NATIVE_INT_TYPE getNum_textEventOut_OutputPorts();

#endif

    //! Get the number of timeGetOut output ports
    //! 
    //! \return The number of timeGetOut output ports
    NATIVE_INT_TYPE getNum_timeGetOut_OutputPorts();

    //! Get the number of tlmOut output ports
    //! 
    //! \return The number of tlmOut output ports
    NATIVE_INT_TYPE getNum_tlmOut_OutputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed output ports
    // ----------------------------------------------------------------------

    //! Get the number of typedOut output ports
    //! 
    //! \return The number of typedOut output ports
    NATIVE_INT_TYPE getNum_typedOut_OutputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of serial output ports
    // ----------------------------------------------------------------------

    //! Get the number of serialOut output ports
    //! 
    //! \return The number of serialOut output ports
    NATIVE_INT_TYPE getNum_serialOut_OutputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for special output ports
    // ----------------------------------------------------------------------

    //! Check whether port cmdRegOut is connected
    //! 
    //! \return Whether port cmdRegOut is connected
    bool isConnected_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port cmdResponseOut is connected
    //! 
    //! \return Whether port cmdResponseOut is connected
    bool isConnected_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port eventOut is connected
    //! 
    //! \return Whether port eventOut is connected
    bool isConnected_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port prmGetOut is connected
    //! 
    //! \return Whether port prmGetOut is connected
    bool isConnected_prmGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port prmSetOut is connected
    //! 
    //! \return Whether port prmSetOut is connected
    bool isConnected_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Check whether port textEventOut is connected
    //! 
    //! \return Whether port textEventOut is connected
    bool isConnected_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#endif

    //! Check whether port timeGetOut is connected
    //! 
    //! \return Whether port timeGetOut is connected
    bool isConnected_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port tlmOut is connected
    //! 
    //! \return Whether port tlmOut is connected
    bool isConnected_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for typed output ports
    // ----------------------------------------------------------------------

    //! Check whether port typedOut is connected
    //! 
    //! \return Whether port typedOut is connected
    bool isConnected_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for serial output ports
    // ----------------------------------------------------------------------

    //! Check whether port serialOut is connected
    //! 
    //! \return Whether port serialOut is connected
    bool isConnected_serialOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port typedAsync
    virtual void typedAsync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedGuarded
    virtual void typedGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedSync
    virtual void typedSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports
    // 
    // Call these functions directly to bypass the corresponding ports
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port typedAsync
    void typedAsync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedGuarded
    void typedGuarded_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedSync
    void typedSync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for serial input ports
    // ----------------------------------------------------------------------

    //! Handler for input port serialAsync
    virtual void serialAsync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    ) = 0;

    //! Handler for input port serialGuarded
    virtual void serialGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    ) = 0;

    //! Handler for input port serialSync
    virtual void serialSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for serial input ports
    // 
    // Call these functions directly to bypass the corresponding ports
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port serialAsync
    void serialAsync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

    //! Handler base-class function for input port serialGuarded
    void serialGuarded_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

    //! Handler base-class function for input port serialSync
    void serialSync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Pre-message hooks for typed async input ports
    // 
    // Each of these functions is invoked just before processing a message
    // on the corresponding port. By default, they do nothing. You can
    // override them to provide specific pre-message behavior.
    // ----------------------------------------------------------------------

    //! Pre-message hook for async input port typedAsync
    virtual void typedAsync_preMsgHook(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Pre-message hooks for serial async input ports
    // 
    // Each of these functions is invoked just before processing a message
    // on the corresponding port. By default, they do nothing. You can
    // override them to provide specific pre-message behavior.
    // ----------------------------------------------------------------------

    //! Pre-message hook for async input port serialAsync
    virtual void serialAsync_preMsgHook(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for typed output ports
    // ----------------------------------------------------------------------

    //! Invoke output port typedOut
    void typedOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for serial output ports
    // ----------------------------------------------------------------------

    //! Invoke output port serialOut
    Fw::SerializeStatus serialOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event logging functions
    // ----------------------------------------------------------------------

    //! Log event EventActivityHigh
    //! 
    //! An activity high event with no params
    void log_ACTIVITY_HI_EventActivityHigh();

    //! Log event EventActivityLowThrottled
    //! 
    //! An activity low, throttled event with primitive params
    void log_ACTIVITY_LO_EventActivityLowThrottled(
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b //!< A boolean
    );

    //! Log event EventCommand
    //! 
    //! A command event with string params
    void log_COMMAND_EventCommand(
        const Fw::LogStringArg& str1, //!< A string
        const Fw::LogStringArg& str2 //!< Another string
    );

    //! Log event EventDiagnostic
    //! 
    //! A diagnostic event with enum params
    void log_DIAGNOSTIC_EventDiagnostic(
        E e //!< An enum
    );

    //! Log event EventFatalThrottled
    //! 
    //! A fatal, throttled event with array params
    void log_FATAL_EventFatalThrottled(
        A a //!< An array
    );

    //! Log event EventWarningHigh
    //! 
    //! A warning high event with struct params
    void log_WARNING_HI_EventWarningHigh(
        S s //!< A struct
    );

    //! Log event EventWarningLowThrottled
    //! 
    //! A warning low, throttled event with no params
    void log_WARNING_LO_EventWarningLowThrottled();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event throttle reset functions
    // ----------------------------------------------------------------------

    //! Reset throttle value for EventActivityLowThrottled
    void log_ACTIVITY_LO_EventActivityLowThrottled_ThrottleClear();

    //! Reset throttle value for EventFatalThrottled
    void log_FATAL_EventFatalThrottled_ThrottleClear();

    //! Reset throttle value for EventWarningLowThrottled
    void log_WARNING_LO_EventWarningLowThrottled_ThrottleClear();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Time
    // ----------------------------------------------------------------------

    //!  Get the time
    //! 
    //! \\return The current time
    Fw::Time getTime();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Mutex operations for guarded ports
    // 
    // You can override these operations to provide more sophisticated
    // synchronization
    // ----------------------------------------------------------------------

    //! Lock the guarded mutex
    virtual void lock();

    //! Unlock the guarded mutex
    virtual void unLock();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Message dispatch functions
    // ----------------------------------------------------------------------

    //! Called in the message loop to dispatch a message from the queue
    virtual MsgDispatchStatus doDispatch();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on special input ports
    // ----------------------------------------------------------------------

    //! Callback for port cmdIn
    static void m_p_cmdIn_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        FwOpcodeType opCode, //!< Command Op Code
        U32 cmdSeq, //!< Command Sequence
        Fw::CmdArgBuffer& args //!< Buffer containing arguments
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port typedAsync
    static void m_p_typedAsync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedGuarded
    static void m_p_typedGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedSync
    static void m_p_typedSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on serial input ports
    // ----------------------------------------------------------------------

#if FW_PORT_SERIALIZATION

    //! Callback for port serialAsync
    static void m_p_serialAsync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

    //! Callback for port serialGuarded
    static void m_p_serialGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

    //! Callback for port serialSync
    static void m_p_serialSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase& buffer //!< The serialization buffer
    );

#endif

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special input ports
    // ----------------------------------------------------------------------

    //! Input port cmdIn
    Fw::InputCmdPort m_cmdIn_InputPort[NUM_CMDIN_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port typedAsync
    InputTypedPort m_typedAsync_InputPort[NUM_TYPEDASYNC_INPUT_PORTS];

    //! Input port typedGuarded
    InputTypedPort m_typedGuarded_InputPort[NUM_TYPEDGUARDED_INPUT_PORTS];

    //! Input port typedSync
    InputTypedPort m_typedSync_InputPort[NUM_TYPEDSYNC_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Serial input ports
    // ----------------------------------------------------------------------

    //! Input port serialAsync
    Fw::InputSerializePort m_serialAsync_InputPort[NUM_SERIALASYNC_INPUT_PORTS];

    //! Input port serialGuarded
    Fw::InputSerializePort m_serialGuarded_InputPort[NUM_SERIALGUARDED_INPUT_PORTS];

    //! Input port serialSync
    Fw::InputSerializePort m_serialSync_InputPort[NUM_SERIALSYNC_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special output ports
    // ----------------------------------------------------------------------

    //! Output port cmdRegOut
    Fw::OutputCmdRegPort m_cmdRegOut_OutputPort[NUM_CMDREGOUT_OUTPUT_PORTS];

    //! Output port cmdResponseOut
    Fw::OutputCmdResponsePort m_cmdResponseOut_OutputPort[NUM_CMDRESPONSEOUT_OUTPUT_PORTS];

    //! Output port eventOut
    Fw::OutputLogPort m_eventOut_OutputPort[NUM_EVENTOUT_OUTPUT_PORTS];

    //! Output port prmGetOut
    Fw::OutputPrmGetPort m_prmGetOut_OutputPort[NUM_PRMGETOUT_OUTPUT_PORTS];

    //! Output port prmSetOut
    Fw::OutputPrmSetPort m_prmSetOut_OutputPort[NUM_PRMSETOUT_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Output port textEventOut
    Fw::OutputLogTextPort m_textEventOut_OutputPort[NUM_TEXTEVENTOUT_OUTPUT_PORTS];

#endif

    //! Output port timeGetOut
    Fw::OutputTimePort m_timeGetOut_OutputPort[NUM_TIMEGETOUT_OUTPUT_PORTS];

    //! Output port tlmOut
    Fw::OutputTlmPort m_tlmOut_OutputPort[NUM_TLMOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

    //! Output port typedOut
    OutputTypedPort m_typedOut_OutputPort[NUM_TYPEDOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Serial output ports
    // ----------------------------------------------------------------------

    //! Output port serialOut
    Fw::OutputSerializePort m_serialOut_OutputPort[NUM_SERIALOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Counter values for event throttling
    // ----------------------------------------------------------------------

    //! Throttle for EventActivityLowThrottled
    NATIVE_UINT_TYPE m_EventActivityLowThrottledThrottle;

    //! Throttle for EventFatalThrottled
    NATIVE_UINT_TYPE m_EventFatalThrottledThrottle;

    //! Throttle for EventWarningLowThrottled
    NATIVE_UINT_TYPE m_EventWarningLowThrottledThrottle;

  PRIVATE:

    //! Stores max message size
    NATIVE_INT_TYPE m_msgSize;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Mutexes
    // ----------------------------------------------------------------------

    //! Mutex for guarded ports
    Os::Mutex m_guardedPortMutex;

};

#endif
