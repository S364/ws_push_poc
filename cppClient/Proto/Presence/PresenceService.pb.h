// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PresenceService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PresenceService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PresenceService_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "push.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PresenceService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PresenceService_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PresenceService_2eproto;
namespace interfaces {
class PresenceConnectRequest;
class PresenceConnectRequestDefaultTypeInternal;
extern PresenceConnectRequestDefaultTypeInternal _PresenceConnectRequest_default_instance_;
class PresenceGetStateAndSubRequest;
class PresenceGetStateAndSubRequestDefaultTypeInternal;
extern PresenceGetStateAndSubRequestDefaultTypeInternal _PresenceGetStateAndSubRequest_default_instance_;
class PresenceState;
class PresenceStateDefaultTypeInternal;
extern PresenceStateDefaultTypeInternal _PresenceState_default_instance_;
}  // namespace interfaces
PROTOBUF_NAMESPACE_OPEN
template<> ::interfaces::PresenceConnectRequest* Arena::CreateMaybeMessage<::interfaces::PresenceConnectRequest>(Arena*);
template<> ::interfaces::PresenceGetStateAndSubRequest* Arena::CreateMaybeMessage<::interfaces::PresenceGetStateAndSubRequest>(Arena*);
template<> ::interfaces::PresenceState* Arena::CreateMaybeMessage<::interfaces::PresenceState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace interfaces {

// ===================================================================

class PresenceConnectRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:interfaces.PresenceConnectRequest) */ {
 public:
  inline PresenceConnectRequest() : PresenceConnectRequest(nullptr) {};
  virtual ~PresenceConnectRequest();

  PresenceConnectRequest(const PresenceConnectRequest& from);
  PresenceConnectRequest(PresenceConnectRequest&& from) noexcept
    : PresenceConnectRequest() {
    *this = ::std::move(from);
  }

  inline PresenceConnectRequest& operator=(const PresenceConnectRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PresenceConnectRequest& operator=(PresenceConnectRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PresenceConnectRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PresenceConnectRequest* internal_default_instance() {
    return reinterpret_cast<const PresenceConnectRequest*>(
               &_PresenceConnectRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PresenceConnectRequest& a, PresenceConnectRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PresenceConnectRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PresenceConnectRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PresenceConnectRequest* New() const final {
    return CreateMaybeMessage<PresenceConnectRequest>(nullptr);
  }

  PresenceConnectRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PresenceConnectRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PresenceConnectRequest& from);
  void MergeFrom(const PresenceConnectRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PresenceConnectRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "interfaces.PresenceConnectRequest";
  }
  protected:
  explicit PresenceConnectRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PresenceService_2eproto);
    return ::descriptor_table_PresenceService_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
  };
  // string UserId = 1;
  void clear_userid();
  const std::string& userid() const;
  void set_userid(const std::string& value);
  void set_userid(std::string&& value);
  void set_userid(const char* value);
  void set_userid(const char* value, size_t size);
  std::string* mutable_userid();
  std::string* release_userid();
  void set_allocated_userid(std::string* userid);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_userid();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_userid(
      std::string* userid);
  private:
  const std::string& _internal_userid() const;
  void _internal_set_userid(const std::string& value);
  std::string* _internal_mutable_userid();
  public:

  // @@protoc_insertion_point(class_scope:interfaces.PresenceConnectRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr userid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PresenceService_2eproto;
};
// -------------------------------------------------------------------

class PresenceState PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:interfaces.PresenceState) */ {
 public:
  inline PresenceState() : PresenceState(nullptr) {};
  virtual ~PresenceState();

  PresenceState(const PresenceState& from);
  PresenceState(PresenceState&& from) noexcept
    : PresenceState() {
    *this = ::std::move(from);
  }

  inline PresenceState& operator=(const PresenceState& from) {
    CopyFrom(from);
    return *this;
  }
  inline PresenceState& operator=(PresenceState&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PresenceState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PresenceState* internal_default_instance() {
    return reinterpret_cast<const PresenceState*>(
               &_PresenceState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PresenceState& a, PresenceState& b) {
    a.Swap(&b);
  }
  inline void Swap(PresenceState* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PresenceState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PresenceState* New() const final {
    return CreateMaybeMessage<PresenceState>(nullptr);
  }

  PresenceState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PresenceState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PresenceState& from);
  void MergeFrom(const PresenceState& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PresenceState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "interfaces.PresenceState";
  }
  protected:
  explicit PresenceState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PresenceService_2eproto);
    return ::descriptor_table_PresenceService_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 1,
    kDummyFieldNumber = 2,
  };
  // int32 Version = 1;
  void clear_version();
  ::PROTOBUF_NAMESPACE_ID::int32 version() const;
  void set_version(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_version() const;
  void _internal_set_version(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 Dummy = 2;
  void clear_dummy();
  ::PROTOBUF_NAMESPACE_ID::int32 dummy() const;
  void set_dummy(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_dummy() const;
  void _internal_set_dummy(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:interfaces.PresenceState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 version_;
  ::PROTOBUF_NAMESPACE_ID::int32 dummy_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PresenceService_2eproto;
};
// -------------------------------------------------------------------

class PresenceGetStateAndSubRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:interfaces.PresenceGetStateAndSubRequest) */ {
 public:
  inline PresenceGetStateAndSubRequest() : PresenceGetStateAndSubRequest(nullptr) {};
  virtual ~PresenceGetStateAndSubRequest();

  PresenceGetStateAndSubRequest(const PresenceGetStateAndSubRequest& from);
  PresenceGetStateAndSubRequest(PresenceGetStateAndSubRequest&& from) noexcept
    : PresenceGetStateAndSubRequest() {
    *this = ::std::move(from);
  }

  inline PresenceGetStateAndSubRequest& operator=(const PresenceGetStateAndSubRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PresenceGetStateAndSubRequest& operator=(PresenceGetStateAndSubRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PresenceGetStateAndSubRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PresenceGetStateAndSubRequest* internal_default_instance() {
    return reinterpret_cast<const PresenceGetStateAndSubRequest*>(
               &_PresenceGetStateAndSubRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(PresenceGetStateAndSubRequest& a, PresenceGetStateAndSubRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PresenceGetStateAndSubRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PresenceGetStateAndSubRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PresenceGetStateAndSubRequest* New() const final {
    return CreateMaybeMessage<PresenceGetStateAndSubRequest>(nullptr);
  }

  PresenceGetStateAndSubRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PresenceGetStateAndSubRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PresenceGetStateAndSubRequest& from);
  void MergeFrom(const PresenceGetStateAndSubRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PresenceGetStateAndSubRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "interfaces.PresenceGetStateAndSubRequest";
  }
  protected:
  explicit PresenceGetStateAndSubRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PresenceService_2eproto);
    return ::descriptor_table_PresenceService_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
    kTokenFieldNumber = 2,
  };
  // string UserId = 1;
  void clear_userid();
  const std::string& userid() const;
  void set_userid(const std::string& value);
  void set_userid(std::string&& value);
  void set_userid(const char* value);
  void set_userid(const char* value, size_t size);
  std::string* mutable_userid();
  std::string* release_userid();
  void set_allocated_userid(std::string* userid);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_userid();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_userid(
      std::string* userid);
  private:
  const std::string& _internal_userid() const;
  void _internal_set_userid(const std::string& value);
  std::string* _internal_mutable_userid();
  public:

  // .PUSH_TOKEN Token = 2;
  bool has_token() const;
  private:
  bool _internal_has_token() const;
  public:
  void clear_token();
  const ::PUSH_TOKEN& token() const;
  ::PUSH_TOKEN* release_token();
  ::PUSH_TOKEN* mutable_token();
  void set_allocated_token(::PUSH_TOKEN* token);
  private:
  const ::PUSH_TOKEN& _internal_token() const;
  ::PUSH_TOKEN* _internal_mutable_token();
  public:
  void unsafe_arena_set_allocated_token(
      ::PUSH_TOKEN* token);
  ::PUSH_TOKEN* unsafe_arena_release_token();

  // @@protoc_insertion_point(class_scope:interfaces.PresenceGetStateAndSubRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr userid_;
  ::PUSH_TOKEN* token_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PresenceService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PresenceConnectRequest

// string UserId = 1;
inline void PresenceConnectRequest::clear_userid() {
  userid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& PresenceConnectRequest::userid() const {
  // @@protoc_insertion_point(field_get:interfaces.PresenceConnectRequest.UserId)
  return _internal_userid();
}
inline void PresenceConnectRequest::set_userid(const std::string& value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:interfaces.PresenceConnectRequest.UserId)
}
inline std::string* PresenceConnectRequest::mutable_userid() {
  // @@protoc_insertion_point(field_mutable:interfaces.PresenceConnectRequest.UserId)
  return _internal_mutable_userid();
}
inline const std::string& PresenceConnectRequest::_internal_userid() const {
  return userid_.Get();
}
inline void PresenceConnectRequest::_internal_set_userid(const std::string& value) {
  
  userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void PresenceConnectRequest::set_userid(std::string&& value) {
  
  userid_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:interfaces.PresenceConnectRequest.UserId)
}
inline void PresenceConnectRequest::set_userid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:interfaces.PresenceConnectRequest.UserId)
}
inline void PresenceConnectRequest::set_userid(const char* value,
    size_t size) {
  
  userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:interfaces.PresenceConnectRequest.UserId)
}
inline std::string* PresenceConnectRequest::_internal_mutable_userid() {
  
  return userid_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* PresenceConnectRequest::release_userid() {
  // @@protoc_insertion_point(field_release:interfaces.PresenceConnectRequest.UserId)
  return userid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PresenceConnectRequest::set_allocated_userid(std::string* userid) {
  if (userid != nullptr) {
    
  } else {
    
  }
  userid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), userid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:interfaces.PresenceConnectRequest.UserId)
}
inline std::string* PresenceConnectRequest::unsafe_arena_release_userid() {
  // @@protoc_insertion_point(field_unsafe_arena_release:interfaces.PresenceConnectRequest.UserId)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return userid_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void PresenceConnectRequest::unsafe_arena_set_allocated_userid(
    std::string* userid) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (userid != nullptr) {
    
  } else {
    
  }
  userid_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      userid, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:interfaces.PresenceConnectRequest.UserId)
}

// -------------------------------------------------------------------

// PresenceState

// int32 Version = 1;
inline void PresenceState::clear_version() {
  version_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PresenceState::_internal_version() const {
  return version_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PresenceState::version() const {
  // @@protoc_insertion_point(field_get:interfaces.PresenceState.Version)
  return _internal_version();
}
inline void PresenceState::_internal_set_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  version_ = value;
}
inline void PresenceState::set_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:interfaces.PresenceState.Version)
}

// int32 Dummy = 2;
inline void PresenceState::clear_dummy() {
  dummy_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PresenceState::_internal_dummy() const {
  return dummy_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PresenceState::dummy() const {
  // @@protoc_insertion_point(field_get:interfaces.PresenceState.Dummy)
  return _internal_dummy();
}
inline void PresenceState::_internal_set_dummy(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  dummy_ = value;
}
inline void PresenceState::set_dummy(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_dummy(value);
  // @@protoc_insertion_point(field_set:interfaces.PresenceState.Dummy)
}

// -------------------------------------------------------------------

// PresenceGetStateAndSubRequest

// string UserId = 1;
inline void PresenceGetStateAndSubRequest::clear_userid() {
  userid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& PresenceGetStateAndSubRequest::userid() const {
  // @@protoc_insertion_point(field_get:interfaces.PresenceGetStateAndSubRequest.UserId)
  return _internal_userid();
}
inline void PresenceGetStateAndSubRequest::set_userid(const std::string& value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:interfaces.PresenceGetStateAndSubRequest.UserId)
}
inline std::string* PresenceGetStateAndSubRequest::mutable_userid() {
  // @@protoc_insertion_point(field_mutable:interfaces.PresenceGetStateAndSubRequest.UserId)
  return _internal_mutable_userid();
}
inline const std::string& PresenceGetStateAndSubRequest::_internal_userid() const {
  return userid_.Get();
}
inline void PresenceGetStateAndSubRequest::_internal_set_userid(const std::string& value) {
  
  userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void PresenceGetStateAndSubRequest::set_userid(std::string&& value) {
  
  userid_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:interfaces.PresenceGetStateAndSubRequest.UserId)
}
inline void PresenceGetStateAndSubRequest::set_userid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:interfaces.PresenceGetStateAndSubRequest.UserId)
}
inline void PresenceGetStateAndSubRequest::set_userid(const char* value,
    size_t size) {
  
  userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:interfaces.PresenceGetStateAndSubRequest.UserId)
}
inline std::string* PresenceGetStateAndSubRequest::_internal_mutable_userid() {
  
  return userid_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* PresenceGetStateAndSubRequest::release_userid() {
  // @@protoc_insertion_point(field_release:interfaces.PresenceGetStateAndSubRequest.UserId)
  return userid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PresenceGetStateAndSubRequest::set_allocated_userid(std::string* userid) {
  if (userid != nullptr) {
    
  } else {
    
  }
  userid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), userid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:interfaces.PresenceGetStateAndSubRequest.UserId)
}
inline std::string* PresenceGetStateAndSubRequest::unsafe_arena_release_userid() {
  // @@protoc_insertion_point(field_unsafe_arena_release:interfaces.PresenceGetStateAndSubRequest.UserId)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return userid_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void PresenceGetStateAndSubRequest::unsafe_arena_set_allocated_userid(
    std::string* userid) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (userid != nullptr) {
    
  } else {
    
  }
  userid_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      userid, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:interfaces.PresenceGetStateAndSubRequest.UserId)
}

// .PUSH_TOKEN Token = 2;
inline bool PresenceGetStateAndSubRequest::_internal_has_token() const {
  return this != internal_default_instance() && token_ != nullptr;
}
inline bool PresenceGetStateAndSubRequest::has_token() const {
  return _internal_has_token();
}
inline const ::PUSH_TOKEN& PresenceGetStateAndSubRequest::_internal_token() const {
  const ::PUSH_TOKEN* p = token_;
  return p != nullptr ? *p : *reinterpret_cast<const ::PUSH_TOKEN*>(
      &::_PUSH_TOKEN_default_instance_);
}
inline const ::PUSH_TOKEN& PresenceGetStateAndSubRequest::token() const {
  // @@protoc_insertion_point(field_get:interfaces.PresenceGetStateAndSubRequest.Token)
  return _internal_token();
}
inline void PresenceGetStateAndSubRequest::unsafe_arena_set_allocated_token(
    ::PUSH_TOKEN* token) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(token_);
  }
  token_ = token;
  if (token) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:interfaces.PresenceGetStateAndSubRequest.Token)
}
inline ::PUSH_TOKEN* PresenceGetStateAndSubRequest::release_token() {
  auto temp = unsafe_arena_release_token();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::PUSH_TOKEN* PresenceGetStateAndSubRequest::unsafe_arena_release_token() {
  // @@protoc_insertion_point(field_release:interfaces.PresenceGetStateAndSubRequest.Token)
  
  ::PUSH_TOKEN* temp = token_;
  token_ = nullptr;
  return temp;
}
inline ::PUSH_TOKEN* PresenceGetStateAndSubRequest::_internal_mutable_token() {
  
  if (token_ == nullptr) {
    auto* p = CreateMaybeMessage<::PUSH_TOKEN>(GetArena());
    token_ = p;
  }
  return token_;
}
inline ::PUSH_TOKEN* PresenceGetStateAndSubRequest::mutable_token() {
  // @@protoc_insertion_point(field_mutable:interfaces.PresenceGetStateAndSubRequest.Token)
  return _internal_mutable_token();
}
inline void PresenceGetStateAndSubRequest::set_allocated_token(::PUSH_TOKEN* token) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(token_);
  }
  if (token) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(token)->GetArena();
    if (message_arena != submessage_arena) {
      token = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, token, submessage_arena);
    }
    
  } else {
    
  }
  token_ = token;
  // @@protoc_insertion_point(field_set_allocated:interfaces.PresenceGetStateAndSubRequest.Token)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace interfaces

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PresenceService_2eproto
