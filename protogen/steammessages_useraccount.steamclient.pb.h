// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_useraccount.steamclient.proto

#ifndef PROTOBUF_INCLUDED_steammessages_5fuseraccount_2esteamclient_2eproto
#define PROTOBUF_INCLUDED_steammessages_5fuseraccount_2esteamclient_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "steammessages_unified_base.steamclient.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_steammessages_5fuseraccount_2esteamclient_2eproto 

namespace protobuf_steammessages_5fuseraccount_2esteamclient_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_steammessages_5fuseraccount_2esteamclient_2eproto
class CUserAccount_GetAccountLinkStatus_Request;
class CUserAccount_GetAccountLinkStatus_RequestDefaultTypeInternal;
extern CUserAccount_GetAccountLinkStatus_RequestDefaultTypeInternal _CUserAccount_GetAccountLinkStatus_Request_default_instance_;
class CUserAccount_GetAccountLinkStatus_Response;
class CUserAccount_GetAccountLinkStatus_ResponseDefaultTypeInternal;
extern CUserAccount_GetAccountLinkStatus_ResponseDefaultTypeInternal _CUserAccount_GetAccountLinkStatus_Response_default_instance_;
class CUserAccount_RegisterCompatTool_Request;
class CUserAccount_RegisterCompatTool_RequestDefaultTypeInternal;
extern CUserAccount_RegisterCompatTool_RequestDefaultTypeInternal _CUserAccount_RegisterCompatTool_Request_default_instance_;
class CUserAccount_RegisterCompatTool_Response;
class CUserAccount_RegisterCompatTool_ResponseDefaultTypeInternal;
extern CUserAccount_RegisterCompatTool_ResponseDefaultTypeInternal _CUserAccount_RegisterCompatTool_Response_default_instance_;
namespace google {
namespace protobuf {
template<> ::CUserAccount_GetAccountLinkStatus_Request* Arena::CreateMaybeMessage<::CUserAccount_GetAccountLinkStatus_Request>(Arena*);
template<> ::CUserAccount_GetAccountLinkStatus_Response* Arena::CreateMaybeMessage<::CUserAccount_GetAccountLinkStatus_Response>(Arena*);
template<> ::CUserAccount_RegisterCompatTool_Request* Arena::CreateMaybeMessage<::CUserAccount_RegisterCompatTool_Request>(Arena*);
template<> ::CUserAccount_RegisterCompatTool_Response* Arena::CreateMaybeMessage<::CUserAccount_RegisterCompatTool_Response>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class CUserAccount_GetAccountLinkStatus_Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CUserAccount_GetAccountLinkStatus_Request) */ {
 public:
  CUserAccount_GetAccountLinkStatus_Request();
  virtual ~CUserAccount_GetAccountLinkStatus_Request();

  CUserAccount_GetAccountLinkStatus_Request(const CUserAccount_GetAccountLinkStatus_Request& from);

  inline CUserAccount_GetAccountLinkStatus_Request& operator=(const CUserAccount_GetAccountLinkStatus_Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CUserAccount_GetAccountLinkStatus_Request(CUserAccount_GetAccountLinkStatus_Request&& from) noexcept
    : CUserAccount_GetAccountLinkStatus_Request() {
    *this = ::std::move(from);
  }

  inline CUserAccount_GetAccountLinkStatus_Request& operator=(CUserAccount_GetAccountLinkStatus_Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CUserAccount_GetAccountLinkStatus_Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CUserAccount_GetAccountLinkStatus_Request* internal_default_instance() {
    return reinterpret_cast<const CUserAccount_GetAccountLinkStatus_Request*>(
               &_CUserAccount_GetAccountLinkStatus_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CUserAccount_GetAccountLinkStatus_Request* other);
  friend void swap(CUserAccount_GetAccountLinkStatus_Request& a, CUserAccount_GetAccountLinkStatus_Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CUserAccount_GetAccountLinkStatus_Request* New() const final {
    return CreateMaybeMessage<CUserAccount_GetAccountLinkStatus_Request>(NULL);
  }

  CUserAccount_GetAccountLinkStatus_Request* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CUserAccount_GetAccountLinkStatus_Request>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CUserAccount_GetAccountLinkStatus_Request& from);
  void MergeFrom(const CUserAccount_GetAccountLinkStatus_Request& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CUserAccount_GetAccountLinkStatus_Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CUserAccount_GetAccountLinkStatus_Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_steammessages_5fuseraccount_2esteamclient_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CUserAccount_GetAccountLinkStatus_Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CUserAccount_GetAccountLinkStatus_Response) */ {
 public:
  CUserAccount_GetAccountLinkStatus_Response();
  virtual ~CUserAccount_GetAccountLinkStatus_Response();

  CUserAccount_GetAccountLinkStatus_Response(const CUserAccount_GetAccountLinkStatus_Response& from);

  inline CUserAccount_GetAccountLinkStatus_Response& operator=(const CUserAccount_GetAccountLinkStatus_Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CUserAccount_GetAccountLinkStatus_Response(CUserAccount_GetAccountLinkStatus_Response&& from) noexcept
    : CUserAccount_GetAccountLinkStatus_Response() {
    *this = ::std::move(from);
  }

  inline CUserAccount_GetAccountLinkStatus_Response& operator=(CUserAccount_GetAccountLinkStatus_Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CUserAccount_GetAccountLinkStatus_Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CUserAccount_GetAccountLinkStatus_Response* internal_default_instance() {
    return reinterpret_cast<const CUserAccount_GetAccountLinkStatus_Response*>(
               &_CUserAccount_GetAccountLinkStatus_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CUserAccount_GetAccountLinkStatus_Response* other);
  friend void swap(CUserAccount_GetAccountLinkStatus_Response& a, CUserAccount_GetAccountLinkStatus_Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CUserAccount_GetAccountLinkStatus_Response* New() const final {
    return CreateMaybeMessage<CUserAccount_GetAccountLinkStatus_Response>(NULL);
  }

  CUserAccount_GetAccountLinkStatus_Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CUserAccount_GetAccountLinkStatus_Response>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CUserAccount_GetAccountLinkStatus_Response& from);
  void MergeFrom(const CUserAccount_GetAccountLinkStatus_Response& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CUserAccount_GetAccountLinkStatus_Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 pwid = 1;
  bool has_pwid() const;
  void clear_pwid();
  static const int kPwidFieldNumber = 1;
  ::google::protobuf::uint32 pwid() const;
  void set_pwid(::google::protobuf::uint32 value);

  // optional uint32 identity_verification = 2;
  bool has_identity_verification() const;
  void clear_identity_verification();
  static const int kIdentityVerificationFieldNumber = 2;
  ::google::protobuf::uint32 identity_verification() const;
  void set_identity_verification(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:CUserAccount_GetAccountLinkStatus_Response)
 private:
  void set_has_pwid();
  void clear_has_pwid();
  void set_has_identity_verification();
  void clear_has_identity_verification();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 pwid_;
  ::google::protobuf::uint32 identity_verification_;
  friend struct ::protobuf_steammessages_5fuseraccount_2esteamclient_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CUserAccount_RegisterCompatTool_Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CUserAccount_RegisterCompatTool_Request) */ {
 public:
  CUserAccount_RegisterCompatTool_Request();
  virtual ~CUserAccount_RegisterCompatTool_Request();

  CUserAccount_RegisterCompatTool_Request(const CUserAccount_RegisterCompatTool_Request& from);

  inline CUserAccount_RegisterCompatTool_Request& operator=(const CUserAccount_RegisterCompatTool_Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CUserAccount_RegisterCompatTool_Request(CUserAccount_RegisterCompatTool_Request&& from) noexcept
    : CUserAccount_RegisterCompatTool_Request() {
    *this = ::std::move(from);
  }

  inline CUserAccount_RegisterCompatTool_Request& operator=(CUserAccount_RegisterCompatTool_Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CUserAccount_RegisterCompatTool_Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CUserAccount_RegisterCompatTool_Request* internal_default_instance() {
    return reinterpret_cast<const CUserAccount_RegisterCompatTool_Request*>(
               &_CUserAccount_RegisterCompatTool_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(CUserAccount_RegisterCompatTool_Request* other);
  friend void swap(CUserAccount_RegisterCompatTool_Request& a, CUserAccount_RegisterCompatTool_Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CUserAccount_RegisterCompatTool_Request* New() const final {
    return CreateMaybeMessage<CUserAccount_RegisterCompatTool_Request>(NULL);
  }

  CUserAccount_RegisterCompatTool_Request* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CUserAccount_RegisterCompatTool_Request>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CUserAccount_RegisterCompatTool_Request& from);
  void MergeFrom(const CUserAccount_RegisterCompatTool_Request& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CUserAccount_RegisterCompatTool_Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 compat_tool = 1;
  bool has_compat_tool() const;
  void clear_compat_tool();
  static const int kCompatToolFieldNumber = 1;
  ::google::protobuf::uint32 compat_tool() const;
  void set_compat_tool(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:CUserAccount_RegisterCompatTool_Request)
 private:
  void set_has_compat_tool();
  void clear_has_compat_tool();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 compat_tool_;
  friend struct ::protobuf_steammessages_5fuseraccount_2esteamclient_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CUserAccount_RegisterCompatTool_Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CUserAccount_RegisterCompatTool_Response) */ {
 public:
  CUserAccount_RegisterCompatTool_Response();
  virtual ~CUserAccount_RegisterCompatTool_Response();

  CUserAccount_RegisterCompatTool_Response(const CUserAccount_RegisterCompatTool_Response& from);

  inline CUserAccount_RegisterCompatTool_Response& operator=(const CUserAccount_RegisterCompatTool_Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CUserAccount_RegisterCompatTool_Response(CUserAccount_RegisterCompatTool_Response&& from) noexcept
    : CUserAccount_RegisterCompatTool_Response() {
    *this = ::std::move(from);
  }

  inline CUserAccount_RegisterCompatTool_Response& operator=(CUserAccount_RegisterCompatTool_Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CUserAccount_RegisterCompatTool_Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CUserAccount_RegisterCompatTool_Response* internal_default_instance() {
    return reinterpret_cast<const CUserAccount_RegisterCompatTool_Response*>(
               &_CUserAccount_RegisterCompatTool_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(CUserAccount_RegisterCompatTool_Response* other);
  friend void swap(CUserAccount_RegisterCompatTool_Response& a, CUserAccount_RegisterCompatTool_Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CUserAccount_RegisterCompatTool_Response* New() const final {
    return CreateMaybeMessage<CUserAccount_RegisterCompatTool_Response>(NULL);
  }

  CUserAccount_RegisterCompatTool_Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CUserAccount_RegisterCompatTool_Response>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CUserAccount_RegisterCompatTool_Response& from);
  void MergeFrom(const CUserAccount_RegisterCompatTool_Response& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CUserAccount_RegisterCompatTool_Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CUserAccount_RegisterCompatTool_Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_steammessages_5fuseraccount_2esteamclient_2eproto::TableStruct;
};
// ===================================================================

class UserAccount_Stub;

class UserAccount : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline UserAccount() {};
 public:
  virtual ~UserAccount();

  typedef UserAccount_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void GetAccountLinkStatus(::google::protobuf::RpcController* controller,
                       const ::CUserAccount_GetAccountLinkStatus_Request* request,
                       ::CUserAccount_GetAccountLinkStatus_Response* response,
                       ::google::protobuf::Closure* done);
  virtual void RegisterCompatTool(::google::protobuf::RpcController* controller,
                       const ::CUserAccount_RegisterCompatTool_Request* request,
                       ::CUserAccount_RegisterCompatTool_Response* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(UserAccount);
};

class UserAccount_Stub : public UserAccount {
 public:
  UserAccount_Stub(::google::protobuf::RpcChannel* channel);
  UserAccount_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~UserAccount_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements UserAccount ------------------------------------------

  void GetAccountLinkStatus(::google::protobuf::RpcController* controller,
                       const ::CUserAccount_GetAccountLinkStatus_Request* request,
                       ::CUserAccount_GetAccountLinkStatus_Response* response,
                       ::google::protobuf::Closure* done);
  void RegisterCompatTool(::google::protobuf::RpcController* controller,
                       const ::CUserAccount_RegisterCompatTool_Request* request,
                       ::CUserAccount_RegisterCompatTool_Response* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(UserAccount_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CUserAccount_GetAccountLinkStatus_Request

// -------------------------------------------------------------------

// CUserAccount_GetAccountLinkStatus_Response

// optional uint32 pwid = 1;
inline bool CUserAccount_GetAccountLinkStatus_Response::has_pwid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CUserAccount_GetAccountLinkStatus_Response::set_has_pwid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CUserAccount_GetAccountLinkStatus_Response::clear_has_pwid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CUserAccount_GetAccountLinkStatus_Response::clear_pwid() {
  pwid_ = 0u;
  clear_has_pwid();
}
inline ::google::protobuf::uint32 CUserAccount_GetAccountLinkStatus_Response::pwid() const {
  // @@protoc_insertion_point(field_get:CUserAccount_GetAccountLinkStatus_Response.pwid)
  return pwid_;
}
inline void CUserAccount_GetAccountLinkStatus_Response::set_pwid(::google::protobuf::uint32 value) {
  set_has_pwid();
  pwid_ = value;
  // @@protoc_insertion_point(field_set:CUserAccount_GetAccountLinkStatus_Response.pwid)
}

// optional uint32 identity_verification = 2;
inline bool CUserAccount_GetAccountLinkStatus_Response::has_identity_verification() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CUserAccount_GetAccountLinkStatus_Response::set_has_identity_verification() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CUserAccount_GetAccountLinkStatus_Response::clear_has_identity_verification() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CUserAccount_GetAccountLinkStatus_Response::clear_identity_verification() {
  identity_verification_ = 0u;
  clear_has_identity_verification();
}
inline ::google::protobuf::uint32 CUserAccount_GetAccountLinkStatus_Response::identity_verification() const {
  // @@protoc_insertion_point(field_get:CUserAccount_GetAccountLinkStatus_Response.identity_verification)
  return identity_verification_;
}
inline void CUserAccount_GetAccountLinkStatus_Response::set_identity_verification(::google::protobuf::uint32 value) {
  set_has_identity_verification();
  identity_verification_ = value;
  // @@protoc_insertion_point(field_set:CUserAccount_GetAccountLinkStatus_Response.identity_verification)
}

// -------------------------------------------------------------------

// CUserAccount_RegisterCompatTool_Request

// optional uint32 compat_tool = 1;
inline bool CUserAccount_RegisterCompatTool_Request::has_compat_tool() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CUserAccount_RegisterCompatTool_Request::set_has_compat_tool() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CUserAccount_RegisterCompatTool_Request::clear_has_compat_tool() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CUserAccount_RegisterCompatTool_Request::clear_compat_tool() {
  compat_tool_ = 0u;
  clear_has_compat_tool();
}
inline ::google::protobuf::uint32 CUserAccount_RegisterCompatTool_Request::compat_tool() const {
  // @@protoc_insertion_point(field_get:CUserAccount_RegisterCompatTool_Request.compat_tool)
  return compat_tool_;
}
inline void CUserAccount_RegisterCompatTool_Request::set_compat_tool(::google::protobuf::uint32 value) {
  set_has_compat_tool();
  compat_tool_ = value;
  // @@protoc_insertion_point(field_set:CUserAccount_RegisterCompatTool_Request.compat_tool)
}

// -------------------------------------------------------------------

// CUserAccount_RegisterCompatTool_Response

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_steammessages_5fuseraccount_2esteamclient_2eproto
