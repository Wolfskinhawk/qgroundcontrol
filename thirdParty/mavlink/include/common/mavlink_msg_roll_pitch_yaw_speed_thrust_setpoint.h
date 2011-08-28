// MESSAGE ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT PACKING

#define MAVLINK_MSG_ID_ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT 58

typedef struct __mavlink_roll_pitch_yaw_speed_thrust_setpoint_t
{
 uint32_t time_ms; ///< Timestamp in milliseconds since system boot
 float roll_speed; ///< Desired roll angular speed in rad/s
 float pitch_speed; ///< Desired pitch angular speed in rad/s
 float yaw_speed; ///< Desired yaw angular speed in rad/s
 float thrust; ///< Collective thrust, normalized to 0 .. 1
} mavlink_roll_pitch_yaw_speed_thrust_setpoint_t;

#define MAVLINK_MSG_ID_ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT_LEN 20
#define MAVLINK_MSG_ID_58_LEN 20



#define MAVLINK_MESSAGE_INFO_ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT { \
	"ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT", \
	5, \
	{  { "time_ms", MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_roll_pitch_yaw_speed_thrust_setpoint_t, time_ms) }, \
         { "roll_speed", MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_roll_pitch_yaw_speed_thrust_setpoint_t, roll_speed) }, \
         { "pitch_speed", MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_roll_pitch_yaw_speed_thrust_setpoint_t, pitch_speed) }, \
         { "yaw_speed", MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_roll_pitch_yaw_speed_thrust_setpoint_t, yaw_speed) }, \
         { "thrust", MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_roll_pitch_yaw_speed_thrust_setpoint_t, thrust) }, \
         } \
}


/**
 * @brief Pack a roll_pitch_yaw_speed_thrust_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_ms Timestamp in milliseconds since system boot
 * @param roll_speed Desired roll angular speed in rad/s
 * @param pitch_speed Desired pitch angular speed in rad/s
 * @param yaw_speed Desired yaw angular speed in rad/s
 * @param thrust Collective thrust, normalized to 0 .. 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_ms, float roll_speed, float pitch_speed, float yaw_speed, float thrust)
{
	msg->msgid = MAVLINK_MSG_ID_ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT;

	put_uint32_t_by_index(msg, 0, time_ms); // Timestamp in milliseconds since system boot
	put_float_by_index(msg, 4, roll_speed); // Desired roll angular speed in rad/s
	put_float_by_index(msg, 8, pitch_speed); // Desired pitch angular speed in rad/s
	put_float_by_index(msg, 12, yaw_speed); // Desired yaw angular speed in rad/s
	put_float_by_index(msg, 16, thrust); // Collective thrust, normalized to 0 .. 1

	return mavlink_finalize_message(msg, system_id, component_id, 20, 148);
}

/**
 * @brief Pack a roll_pitch_yaw_speed_thrust_setpoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_ms Timestamp in milliseconds since system boot
 * @param roll_speed Desired roll angular speed in rad/s
 * @param pitch_speed Desired pitch angular speed in rad/s
 * @param yaw_speed Desired yaw angular speed in rad/s
 * @param thrust Collective thrust, normalized to 0 .. 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_ms,float roll_speed,float pitch_speed,float yaw_speed,float thrust)
{
	msg->msgid = MAVLINK_MSG_ID_ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT;

	put_uint32_t_by_index(msg, 0, time_ms); // Timestamp in milliseconds since system boot
	put_float_by_index(msg, 4, roll_speed); // Desired roll angular speed in rad/s
	put_float_by_index(msg, 8, pitch_speed); // Desired pitch angular speed in rad/s
	put_float_by_index(msg, 12, yaw_speed); // Desired yaw angular speed in rad/s
	put_float_by_index(msg, 16, thrust); // Collective thrust, normalized to 0 .. 1

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 20, 148);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a roll_pitch_yaw_speed_thrust_setpoint message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_ms Timestamp in milliseconds since system boot
 * @param roll_speed Desired roll angular speed in rad/s
 * @param pitch_speed Desired pitch angular speed in rad/s
 * @param yaw_speed Desired yaw angular speed in rad/s
 * @param thrust Collective thrust, normalized to 0 .. 1
 */
static inline void mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_ms,float roll_speed,float pitch_speed,float yaw_speed,float thrust)
{
	msg->msgid = MAVLINK_MSG_ID_ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT;

	put_uint32_t_by_index(msg, 0, time_ms); // Timestamp in milliseconds since system boot
	put_float_by_index(msg, 4, roll_speed); // Desired roll angular speed in rad/s
	put_float_by_index(msg, 8, pitch_speed); // Desired pitch angular speed in rad/s
	put_float_by_index(msg, 12, yaw_speed); // Desired yaw angular speed in rad/s
	put_float_by_index(msg, 16, thrust); // Collective thrust, normalized to 0 .. 1

	mavlink_finalize_message_chan_send(msg, chan, 20, 148);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a roll_pitch_yaw_speed_thrust_setpoint struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param roll_pitch_yaw_speed_thrust_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_roll_pitch_yaw_speed_thrust_setpoint_t* roll_pitch_yaw_speed_thrust_setpoint)
{
	return mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_pack(system_id, component_id, msg, roll_pitch_yaw_speed_thrust_setpoint->time_ms, roll_pitch_yaw_speed_thrust_setpoint->roll_speed, roll_pitch_yaw_speed_thrust_setpoint->pitch_speed, roll_pitch_yaw_speed_thrust_setpoint->yaw_speed, roll_pitch_yaw_speed_thrust_setpoint->thrust);
}

/**
 * @brief Send a roll_pitch_yaw_speed_thrust_setpoint message
 * @param chan MAVLink channel to send the message
 *
 * @param time_ms Timestamp in milliseconds since system boot
 * @param roll_speed Desired roll angular speed in rad/s
 * @param pitch_speed Desired pitch angular speed in rad/s
 * @param yaw_speed Desired yaw angular speed in rad/s
 * @param thrust Collective thrust, normalized to 0 .. 1
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_send(mavlink_channel_t chan, uint32_t time_ms, float roll_speed, float pitch_speed, float yaw_speed, float thrust)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 20);
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_pack_chan_send(chan, msg, time_ms, roll_speed, pitch_speed, yaw_speed, thrust);
}

#endif

// MESSAGE ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT UNPACKING


/**
 * @brief Get field time_ms from roll_pitch_yaw_speed_thrust_setpoint message
 *
 * @return Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_time_ms(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll_speed from roll_pitch_yaw_speed_thrust_setpoint message
 *
 * @return Desired roll angular speed in rad/s
 */
static inline float mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_roll_speed(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch_speed from roll_pitch_yaw_speed_thrust_setpoint message
 *
 * @return Desired pitch angular speed in rad/s
 */
static inline float mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_pitch_speed(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw_speed from roll_pitch_yaw_speed_thrust_setpoint message
 *
 * @return Desired yaw angular speed in rad/s
 */
static inline float mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_yaw_speed(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  12);
}

/**
 * @brief Get field thrust from roll_pitch_yaw_speed_thrust_setpoint message
 *
 * @return Collective thrust, normalized to 0 .. 1
 */
static inline float mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_thrust(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  16);
}

/**
 * @brief Decode a roll_pitch_yaw_speed_thrust_setpoint message into a struct
 *
 * @param msg The message to decode
 * @param roll_pitch_yaw_speed_thrust_setpoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_decode(const mavlink_message_t* msg, mavlink_roll_pitch_yaw_speed_thrust_setpoint_t* roll_pitch_yaw_speed_thrust_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP
	roll_pitch_yaw_speed_thrust_setpoint->time_ms = mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_time_ms(msg);
	roll_pitch_yaw_speed_thrust_setpoint->roll_speed = mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_roll_speed(msg);
	roll_pitch_yaw_speed_thrust_setpoint->pitch_speed = mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_pitch_speed(msg);
	roll_pitch_yaw_speed_thrust_setpoint->yaw_speed = mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_yaw_speed(msg);
	roll_pitch_yaw_speed_thrust_setpoint->thrust = mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_get_thrust(msg);
#else
	memcpy(roll_pitch_yaw_speed_thrust_setpoint, MAVLINK_PAYLOAD(msg), 20);
#endif
}
