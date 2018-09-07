// Copyright 2018 Espressif Systems (Shanghai) PTE LTD
// All rights reserved.

#pragma once

/** Initiator Type
 */
enum initiator {
    /** Communication was initiated using a Wake-Word */
    WAKEWORD,
    /** Communication was initiated using a Tap-to-Talk event */
    TAP,
    /** This is not yet supported */
    HOLD_AND_TALK,
    /** Communication was initatied by Alexa due to ExpectSpeech. The application will never send this value */
    EXPECT_SPEECH
};

/** Stream data to Alexa
 *
 * Once an application indicates to Alexa of a user initiated
 * communication, this API must be called to stream the audio data
 * captured by the microphone. This data must be 16-byte 16KHz sampled
 * audio data.
 *
 * \param[in] data Pointer to a buffer that holds the audio samples
 * \param[in] len The length of the data in the buffer
 */
int speech_recognizer_record(void *data, int len);

/** Signal end of data to Alexa
*
* This API must be called when all the data has been sent to Alexa.
*/
int speech_recognizer_record_stop();

/** Notify Alexa of a recognize event
 *
 * The application should call this function when the user initiates
 * communication with Alexa either through a wakeword or through
 * Tap-to-talk.
 *
 * \param[in] ww_length The length of the wakeword, if this is a wakeword driven interaction
 * \param[in] initiator The type of initiator
 */
int speech_recognizer_recognize(int ww_length, enum initiator);
