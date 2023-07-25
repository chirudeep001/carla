// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file PointField.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_POINTFIELD_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_POINTFIELD_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(PointField_SOURCE)
#define PointField_DllAPI __declspec( dllexport )
#else
#define PointField_DllAPI __declspec( dllimport )
#endif // PointField_SOURCE
#else
#define PointField_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define PointField_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace sensor_msgs {
    namespace msg {
        const uint8_t PointField__INT8 = 1;
        const uint8_t PointField__UINT8 = 2;
        const uint8_t PointField__INT16 = 3;
        const uint8_t PointField__UINT16 = 4;
        const uint8_t PointField__INT32 = 5;
        const uint8_t PointField__UINT32 = 6;
        const uint8_t PointField__FLOAT32 = 7;
        const uint8_t PointField__FLOAT64 = 8;
        const uint8_t PointField__INT64 = 9;
        const uint8_t PointField__UINT64 = 10;
        const uint8_t PointField__BOOL = 11;
        /*!
         * @brief This class represents the structure PointField defined by the user in the IDL file.
         * @ingroup POINTFIELD
         */
        class PointField
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport PointField();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~PointField();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField(
                    const PointField& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField(
                    PointField&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField& operator =(
                    const PointField& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField& operator =(
                    PointField&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::PointField object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const PointField& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::PointField object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const PointField& x) const;

            /*!
             * @brief This function copies the value in member name
             * @param _name New value to be copied in member name
             */
            eProsima_user_DllExport void name(
                    const std::string& _name);

            /*!
             * @brief This function moves the value in member name
             * @param _name New value to be moved in member name
             */
            eProsima_user_DllExport void name(
                    std::string&& _name);

            /*!
             * @brief This function returns a constant reference to member name
             * @return Constant reference to member name
             */
            eProsima_user_DllExport const std::string& name() const;

            /*!
             * @brief This function returns a reference to member name
             * @return Reference to member name
             */
            eProsima_user_DllExport std::string& name();
            /*!
             * @brief This function sets a value in member offset
             * @param _offset New value for member offset
             */
            eProsima_user_DllExport void offset(
                    uint32_t _offset);

            /*!
             * @brief This function returns the value of member offset
             * @return Value of member offset
             */
            eProsima_user_DllExport uint32_t offset() const;

            /*!
             * @brief This function returns a reference to member offset
             * @return Reference to member offset
             */
            eProsima_user_DllExport uint32_t& offset();

            /*!
             * @brief This function sets a value in member datatype
             * @param _datatype New value for member datatype
             */
            eProsima_user_DllExport void datatype(
                    uint8_t _datatype);

            /*!
             * @brief This function returns the value of member datatype
             * @return Value of member datatype
             */
            eProsima_user_DllExport uint8_t datatype() const;

            /*!
             * @brief This function returns a reference to member datatype
             * @return Reference to member datatype
             */
            eProsima_user_DllExport uint8_t& datatype();

            /*!
             * @brief This function sets a value in member count
             * @param _count New value for member count
             */
            eProsima_user_DllExport void count(
                    uint32_t _count);

            /*!
             * @brief This function returns the value of member count
             * @return Value of member count
             */
            eProsima_user_DllExport uint32_t count() const;

            /*!
             * @brief This function returns a reference to member count
             * @return Reference to member count
             */
            eProsima_user_DllExport uint32_t& count();


            /*!
            * @brief This function returns the maximum serialized size of an object
            * depending on the buffer alignment.
            * @param current_alignment Buffer alignment.
            * @return Maximum serialized size.
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const sensor_msgs::msg::PointField& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            std::string m_name;
            uint32_t m_offset;
            uint8_t m_datatype;
            uint32_t m_count;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_POINTFIELD_H_
