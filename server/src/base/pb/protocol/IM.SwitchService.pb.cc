// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.SwitchService.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IM.SwitchService.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace IM {
namespace SwitchService {

void protobuf_ShutdownFile_IM_2eSwitchService_2eproto() {
  delete IMP2PCmdMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_IM_2eSwitchService_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_IM_2eSwitchService_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  IMP2PCmdMsg::default_instance_ = new IMP2PCmdMsg();
  IMP2PCmdMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IM_2eSwitchService_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_IM_2eSwitchService_2eproto_once_);
void protobuf_AddDesc_IM_2eSwitchService_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_IM_2eSwitchService_2eproto_once_,
                 &protobuf_AddDesc_IM_2eSwitchService_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IM_2eSwitchService_2eproto {
  StaticDescriptorInitializer_IM_2eSwitchService_2eproto() {
    protobuf_AddDesc_IM_2eSwitchService_2eproto();
  }
} static_descriptor_initializer_IM_2eSwitchService_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int IMP2PCmdMsg::kFromUserIdFieldNumber;
const int IMP2PCmdMsg::kToUserIdFieldNumber;
const int IMP2PCmdMsg::kCmdMsgDataFieldNumber;
#endif  // !_MSC_VER

IMP2PCmdMsg::IMP2PCmdMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void IMP2PCmdMsg::InitAsDefaultInstance() {
}

IMP2PCmdMsg::IMP2PCmdMsg(const IMP2PCmdMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void IMP2PCmdMsg::SharedCtor() {
  _cached_size_ = 0;
  from_user_id_ = 0u;
  to_user_id_ = 0u;
  cmd_msg_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IMP2PCmdMsg::~IMP2PCmdMsg() {
  SharedDtor();
}

void IMP2PCmdMsg::SharedDtor() {
  if (cmd_msg_data_ != &::google::protobuf::internal::kEmptyString) {
    delete cmd_msg_data_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void IMP2PCmdMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IMP2PCmdMsg& IMP2PCmdMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_IM_2eSwitchService_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eSwitchService_2eproto();
#endif
  return *default_instance_;
}

IMP2PCmdMsg* IMP2PCmdMsg::default_instance_ = NULL;

IMP2PCmdMsg* IMP2PCmdMsg::New() const {
  return new IMP2PCmdMsg;
}

void IMP2PCmdMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    from_user_id_ = 0u;
    to_user_id_ = 0u;
    if (has_cmd_msg_data()) {
      if (cmd_msg_data_ != &::google::protobuf::internal::kEmptyString) {
        cmd_msg_data_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool IMP2PCmdMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 from_user_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &from_user_id_)));
          set_has_from_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_to_user_id;
        break;
      }

      // required uint32 to_user_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_to_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &to_user_id_)));
          set_has_to_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_cmd_msg_data;
        break;
      }

      // required string cmd_msg_data = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_cmd_msg_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cmd_msg_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void IMP2PCmdMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 from_user_id = 1;
  if (has_from_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->from_user_id(), output);
  }

  // required uint32 to_user_id = 2;
  if (has_to_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->to_user_id(), output);
  }

  // required string cmd_msg_data = 3;
  if (has_cmd_msg_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->cmd_msg_data(), output);
  }

}

int IMP2PCmdMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 from_user_id = 1;
    if (has_from_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->from_user_id());
    }

    // required uint32 to_user_id = 2;
    if (has_to_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->to_user_id());
    }

    // required string cmd_msg_data = 3;
    if (has_cmd_msg_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->cmd_msg_data());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IMP2PCmdMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IMP2PCmdMsg*>(&from));
}

void IMP2PCmdMsg::MergeFrom(const IMP2PCmdMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_from_user_id()) {
      set_from_user_id(from.from_user_id());
    }
    if (from.has_to_user_id()) {
      set_to_user_id(from.to_user_id());
    }
    if (from.has_cmd_msg_data()) {
      set_cmd_msg_data(from.cmd_msg_data());
    }
  }
}

void IMP2PCmdMsg::CopyFrom(const IMP2PCmdMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMP2PCmdMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void IMP2PCmdMsg::Swap(IMP2PCmdMsg* other) {
  if (other != this) {
    std::swap(from_user_id_, other->from_user_id_);
    std::swap(to_user_id_, other->to_user_id_);
    std::swap(cmd_msg_data_, other->cmd_msg_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IMP2PCmdMsg::GetTypeName() const {
  return "IM.SwitchService.IMP2PCmdMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace SwitchService
}  // namespace IM

// @@protoc_insertion_point(global_scope)
