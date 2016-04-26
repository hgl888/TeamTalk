// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "IMBaseDefine.pb.h"
// @@protoc_insertion_point(imports)

@class AuthInfo;
@class AuthInfoBuilder;
@class ContactSessionInfo;
@class ContactSessionInfoBuilder;
@class DepartInfo;
@class DepartInfoBuilder;
@class GroupInfo;
@class GroupInfoBuilder;
@class GroupVersionInfo;
@class GroupVersionInfoBuilder;
@class IMDeviceTokenReq;
@class IMDeviceTokenReqBuilder;
@class IMDeviceTokenRsp;
@class IMDeviceTokenRspBuilder;
@class IMKickPCClientReq;
@class IMKickPCClientReqBuilder;
@class IMKickPCClientRsp;
@class IMKickPCClientRspBuilder;
@class IMKickUser;
@class IMKickUserBuilder;
@class IMLoginReq;
@class IMLoginReqBuilder;
@class IMLoginRes;
@class IMLoginResBuilder;
@class IMLogoutReq;
@class IMLogoutReqBuilder;
@class IMLogoutRsp;
@class IMLogoutRspBuilder;
@class IMMsgServReq;
@class IMMsgServReqBuilder;
@class IMMsgServRsp;
@class IMMsgServRspBuilder;
@class IpAddr;
@class IpAddrBuilder;
@class MsgInfo;
@class MsgInfoBuilder;
@class OfflineFileInfo;
@class OfflineFileInfoBuilder;
@class PushResult;
@class PushResultBuilder;
@class ServerUserStat;
@class ServerUserStatBuilder;
@class ShieldStatus;
@class ShieldStatusBuilder;
@class UnreadInfo;
@class UnreadInfoBuilder;
@class UserInfo;
@class UserInfoBuilder;
@class UserStat;
@class UserStatBuilder;
@class UserTokenInfo;
@class UserTokenInfoBuilder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface ImloginRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface IMMsgServReq : PBGeneratedMessage {
@private
}

+ (IMMsgServReq*) defaultInstance;
- (IMMsgServReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMMsgServReqBuilder*) builder;
+ (IMMsgServReqBuilder*) builder;
+ (IMMsgServReqBuilder*) builderWithPrototype:(IMMsgServReq*) prototype;
- (IMMsgServReqBuilder*) toBuilder;

+ (IMMsgServReq*) parseFromData:(NSData*) data;
+ (IMMsgServReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMMsgServReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMMsgServReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMMsgServReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMMsgServReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMMsgServReqBuilder : PBGeneratedMessageBuilder {
@private
  IMMsgServReq* result;
}

- (IMMsgServReq*) defaultInstance;

- (IMMsgServReqBuilder*) clear;
- (IMMsgServReqBuilder*) clone;

- (IMMsgServReq*) build;
- (IMMsgServReq*) buildPartial;

- (IMMsgServReqBuilder*) mergeFrom:(IMMsgServReq*) other;
- (IMMsgServReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMMsgServReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMMsgServRsp : PBGeneratedMessage {
@private
  BOOL hasPriorIp_:1;
  BOOL hasBackipIp_:1;
  BOOL hasPort_:1;
  BOOL hasResultCode_:1;
  NSString* priorIp;
  NSString* backipIp;
  UInt32 port;
  ResultType resultCode;
}
- (BOOL) hasResultCode;
- (BOOL) hasPriorIp;
- (BOOL) hasBackipIp;
- (BOOL) hasPort;
@property (readonly) ResultType resultCode;
@property (readonly, strong) NSString* priorIp;
@property (readonly, strong) NSString* backipIp;
@property (readonly) UInt32 port;

+ (IMMsgServRsp*) defaultInstance;
- (IMMsgServRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMMsgServRspBuilder*) builder;
+ (IMMsgServRspBuilder*) builder;
+ (IMMsgServRspBuilder*) builderWithPrototype:(IMMsgServRsp*) prototype;
- (IMMsgServRspBuilder*) toBuilder;

+ (IMMsgServRsp*) parseFromData:(NSData*) data;
+ (IMMsgServRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMMsgServRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMMsgServRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMMsgServRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMMsgServRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMMsgServRspBuilder : PBGeneratedMessageBuilder {
@private
  IMMsgServRsp* result;
}

- (IMMsgServRsp*) defaultInstance;

- (IMMsgServRspBuilder*) clear;
- (IMMsgServRspBuilder*) clone;

- (IMMsgServRsp*) build;
- (IMMsgServRsp*) buildPartial;

- (IMMsgServRspBuilder*) mergeFrom:(IMMsgServRsp*) other;
- (IMMsgServRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMMsgServRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasResultCode;
- (ResultType) resultCode;
- (IMMsgServRspBuilder*) setResultCode:(ResultType) value;
- (IMMsgServRspBuilder*) clearResultCode;

- (BOOL) hasPriorIp;
- (NSString*) priorIp;
- (IMMsgServRspBuilder*) setPriorIp:(NSString*) value;
- (IMMsgServRspBuilder*) clearPriorIp;

- (BOOL) hasBackipIp;
- (NSString*) backipIp;
- (IMMsgServRspBuilder*) setBackipIp:(NSString*) value;
- (IMMsgServRspBuilder*) clearBackipIp;

- (BOOL) hasPort;
- (UInt32) port;
- (IMMsgServRspBuilder*) setPort:(UInt32) value;
- (IMMsgServRspBuilder*) clearPort;
@end

@interface IMLoginReq : PBGeneratedMessage {
@private
  BOOL hasUserName_:1;
  BOOL hasPassword_:1;
  BOOL hasClientVersion_:1;
  BOOL hasOnlineStatus_:1;
  BOOL hasClientType_:1;
  NSString* userName;
  NSString* password;
  NSString* clientVersion;
  UserStatType onlineStatus;
  ClientType clientType;
}
- (BOOL) hasUserName;
- (BOOL) hasPassword;
- (BOOL) hasOnlineStatus;
- (BOOL) hasClientType;
- (BOOL) hasClientVersion;
@property (readonly, strong) NSString* userName;
@property (readonly, strong) NSString* password;
@property (readonly) UserStatType onlineStatus;
@property (readonly) ClientType clientType;
@property (readonly, strong) NSString* clientVersion;

+ (IMLoginReq*) defaultInstance;
- (IMLoginReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMLoginReqBuilder*) builder;
+ (IMLoginReqBuilder*) builder;
+ (IMLoginReqBuilder*) builderWithPrototype:(IMLoginReq*) prototype;
- (IMLoginReqBuilder*) toBuilder;

+ (IMLoginReq*) parseFromData:(NSData*) data;
+ (IMLoginReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLoginReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMLoginReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLoginReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMLoginReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMLoginReqBuilder : PBGeneratedMessageBuilder {
@private
  IMLoginReq* result;
}

- (IMLoginReq*) defaultInstance;

- (IMLoginReqBuilder*) clear;
- (IMLoginReqBuilder*) clone;

- (IMLoginReq*) build;
- (IMLoginReq*) buildPartial;

- (IMLoginReqBuilder*) mergeFrom:(IMLoginReq*) other;
- (IMLoginReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMLoginReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserName;
- (NSString*) userName;
- (IMLoginReqBuilder*) setUserName:(NSString*) value;
- (IMLoginReqBuilder*) clearUserName;

- (BOOL) hasPassword;
- (NSString*) password;
- (IMLoginReqBuilder*) setPassword:(NSString*) value;
- (IMLoginReqBuilder*) clearPassword;

- (BOOL) hasOnlineStatus;
- (UserStatType) onlineStatus;
- (IMLoginReqBuilder*) setOnlineStatus:(UserStatType) value;
- (IMLoginReqBuilder*) clearOnlineStatus;

- (BOOL) hasClientType;
- (ClientType) clientType;
- (IMLoginReqBuilder*) setClientType:(ClientType) value;
- (IMLoginReqBuilder*) clearClientType;

- (BOOL) hasClientVersion;
- (NSString*) clientVersion;
- (IMLoginReqBuilder*) setClientVersion:(NSString*) value;
- (IMLoginReqBuilder*) clearClientVersion;
@end

@interface IMLoginRes : PBGeneratedMessage {
@private
  BOOL hasResultString_:1;
  BOOL hasUserInfo_:1;
  BOOL hasServerTime_:1;
  BOOL hasResultCode_:1;
  BOOL hasOnlineStatus_:1;
  NSString* resultString;
  UserInfo* userInfo;
  UInt32 serverTime;
  ResultType resultCode;
  UserStatType onlineStatus;
}
- (BOOL) hasServerTime;
- (BOOL) hasResultCode;
- (BOOL) hasResultString;
- (BOOL) hasOnlineStatus;
- (BOOL) hasUserInfo;
@property (readonly) UInt32 serverTime;
@property (readonly) ResultType resultCode;
@property (readonly, strong) NSString* resultString;
@property (readonly) UserStatType onlineStatus;
@property (readonly, strong) UserInfo* userInfo;

+ (IMLoginRes*) defaultInstance;
- (IMLoginRes*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMLoginResBuilder*) builder;
+ (IMLoginResBuilder*) builder;
+ (IMLoginResBuilder*) builderWithPrototype:(IMLoginRes*) prototype;
- (IMLoginResBuilder*) toBuilder;

+ (IMLoginRes*) parseFromData:(NSData*) data;
+ (IMLoginRes*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLoginRes*) parseFromInputStream:(NSInputStream*) input;
+ (IMLoginRes*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLoginRes*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMLoginRes*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMLoginResBuilder : PBGeneratedMessageBuilder {
@private
  IMLoginRes* result;
}

- (IMLoginRes*) defaultInstance;

- (IMLoginResBuilder*) clear;
- (IMLoginResBuilder*) clone;

- (IMLoginRes*) build;
- (IMLoginRes*) buildPartial;

- (IMLoginResBuilder*) mergeFrom:(IMLoginRes*) other;
- (IMLoginResBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMLoginResBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasServerTime;
- (UInt32) serverTime;
- (IMLoginResBuilder*) setServerTime:(UInt32) value;
- (IMLoginResBuilder*) clearServerTime;

- (BOOL) hasResultCode;
- (ResultType) resultCode;
- (IMLoginResBuilder*) setResultCode:(ResultType) value;
- (IMLoginResBuilder*) clearResultCode;

- (BOOL) hasResultString;
- (NSString*) resultString;
- (IMLoginResBuilder*) setResultString:(NSString*) value;
- (IMLoginResBuilder*) clearResultString;

- (BOOL) hasOnlineStatus;
- (UserStatType) onlineStatus;
- (IMLoginResBuilder*) setOnlineStatus:(UserStatType) value;
- (IMLoginResBuilder*) clearOnlineStatus;

- (BOOL) hasUserInfo;
- (UserInfo*) userInfo;
- (IMLoginResBuilder*) setUserInfo:(UserInfo*) value;
- (IMLoginResBuilder*) setUserInfoBuilder:(UserInfoBuilder*) builderForValue;
- (IMLoginResBuilder*) mergeUserInfo:(UserInfo*) value;
- (IMLoginResBuilder*) clearUserInfo;
@end

@interface IMLogoutReq : PBGeneratedMessage {
@private
}

+ (IMLogoutReq*) defaultInstance;
- (IMLogoutReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMLogoutReqBuilder*) builder;
+ (IMLogoutReqBuilder*) builder;
+ (IMLogoutReqBuilder*) builderWithPrototype:(IMLogoutReq*) prototype;
- (IMLogoutReqBuilder*) toBuilder;

+ (IMLogoutReq*) parseFromData:(NSData*) data;
+ (IMLogoutReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLogoutReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMLogoutReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLogoutReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMLogoutReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMLogoutReqBuilder : PBGeneratedMessageBuilder {
@private
  IMLogoutReq* result;
}

- (IMLogoutReq*) defaultInstance;

- (IMLogoutReqBuilder*) clear;
- (IMLogoutReqBuilder*) clone;

- (IMLogoutReq*) build;
- (IMLogoutReq*) buildPartial;

- (IMLogoutReqBuilder*) mergeFrom:(IMLogoutReq*) other;
- (IMLogoutReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMLogoutReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMLogoutRsp : PBGeneratedMessage {
@private
  BOOL hasResultCode_:1;
  UInt32 resultCode;
}
- (BOOL) hasResultCode;
@property (readonly) UInt32 resultCode;

+ (IMLogoutRsp*) defaultInstance;
- (IMLogoutRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMLogoutRspBuilder*) builder;
+ (IMLogoutRspBuilder*) builder;
+ (IMLogoutRspBuilder*) builderWithPrototype:(IMLogoutRsp*) prototype;
- (IMLogoutRspBuilder*) toBuilder;

+ (IMLogoutRsp*) parseFromData:(NSData*) data;
+ (IMLogoutRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLogoutRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMLogoutRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMLogoutRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMLogoutRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMLogoutRspBuilder : PBGeneratedMessageBuilder {
@private
  IMLogoutRsp* result;
}

- (IMLogoutRsp*) defaultInstance;

- (IMLogoutRspBuilder*) clear;
- (IMLogoutRspBuilder*) clone;

- (IMLogoutRsp*) build;
- (IMLogoutRsp*) buildPartial;

- (IMLogoutRspBuilder*) mergeFrom:(IMLogoutRsp*) other;
- (IMLogoutRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMLogoutRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMLogoutRspBuilder*) setResultCode:(UInt32) value;
- (IMLogoutRspBuilder*) clearResultCode;
@end

@interface IMKickUser : PBGeneratedMessage {
@private
  BOOL hasUserId_:1;
  BOOL hasKickReason_:1;
  UInt32 userId;
  KickReasonType kickReason;
}
- (BOOL) hasUserId;
- (BOOL) hasKickReason;
@property (readonly) UInt32 userId;
@property (readonly) KickReasonType kickReason;

+ (IMKickUser*) defaultInstance;
- (IMKickUser*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMKickUserBuilder*) builder;
+ (IMKickUserBuilder*) builder;
+ (IMKickUserBuilder*) builderWithPrototype:(IMKickUser*) prototype;
- (IMKickUserBuilder*) toBuilder;

+ (IMKickUser*) parseFromData:(NSData*) data;
+ (IMKickUser*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMKickUser*) parseFromInputStream:(NSInputStream*) input;
+ (IMKickUser*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMKickUser*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMKickUser*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMKickUserBuilder : PBGeneratedMessageBuilder {
@private
  IMKickUser* result;
}

- (IMKickUser*) defaultInstance;

- (IMKickUserBuilder*) clear;
- (IMKickUserBuilder*) clone;

- (IMKickUser*) build;
- (IMKickUser*) buildPartial;

- (IMKickUserBuilder*) mergeFrom:(IMKickUser*) other;
- (IMKickUserBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMKickUserBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMKickUserBuilder*) setUserId:(UInt32) value;
- (IMKickUserBuilder*) clearUserId;

- (BOOL) hasKickReason;
- (KickReasonType) kickReason;
- (IMKickUserBuilder*) setKickReason:(KickReasonType) value;
- (IMKickUserBuilder*) clearKickReason;
@end

@interface IMDeviceTokenReq : PBGeneratedMessage {
@private
  BOOL hasDeviceToken_:1;
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasClientType_:1;
  NSString* deviceToken;
  NSData* attachData;
  UInt32 userId;
  ClientType clientType;
}
- (BOOL) hasUserId;
- (BOOL) hasDeviceToken;
- (BOOL) hasClientType;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSString* deviceToken;
@property (readonly) ClientType clientType;
@property (readonly, strong) NSData* attachData;

+ (IMDeviceTokenReq*) defaultInstance;
- (IMDeviceTokenReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMDeviceTokenReqBuilder*) builder;
+ (IMDeviceTokenReqBuilder*) builder;
+ (IMDeviceTokenReqBuilder*) builderWithPrototype:(IMDeviceTokenReq*) prototype;
- (IMDeviceTokenReqBuilder*) toBuilder;

+ (IMDeviceTokenReq*) parseFromData:(NSData*) data;
+ (IMDeviceTokenReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMDeviceTokenReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMDeviceTokenReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMDeviceTokenReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMDeviceTokenReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMDeviceTokenReqBuilder : PBGeneratedMessageBuilder {
@private
  IMDeviceTokenReq* result;
}

- (IMDeviceTokenReq*) defaultInstance;

- (IMDeviceTokenReqBuilder*) clear;
- (IMDeviceTokenReqBuilder*) clone;

- (IMDeviceTokenReq*) build;
- (IMDeviceTokenReq*) buildPartial;

- (IMDeviceTokenReqBuilder*) mergeFrom:(IMDeviceTokenReq*) other;
- (IMDeviceTokenReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMDeviceTokenReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMDeviceTokenReqBuilder*) setUserId:(UInt32) value;
- (IMDeviceTokenReqBuilder*) clearUserId;

- (BOOL) hasDeviceToken;
- (NSString*) deviceToken;
- (IMDeviceTokenReqBuilder*) setDeviceToken:(NSString*) value;
- (IMDeviceTokenReqBuilder*) clearDeviceToken;

- (BOOL) hasClientType;
- (ClientType) clientType;
- (IMDeviceTokenReqBuilder*) setClientType:(ClientType) value;
- (IMDeviceTokenReqBuilder*) clearClientType;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMDeviceTokenReqBuilder*) setAttachData:(NSData*) value;
- (IMDeviceTokenReqBuilder*) clearAttachData;
@end

@interface IMDeviceTokenRsp : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* attachData;
  UInt32 userId;
}
- (BOOL) hasUserId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSData* attachData;

+ (IMDeviceTokenRsp*) defaultInstance;
- (IMDeviceTokenRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMDeviceTokenRspBuilder*) builder;
+ (IMDeviceTokenRspBuilder*) builder;
+ (IMDeviceTokenRspBuilder*) builderWithPrototype:(IMDeviceTokenRsp*) prototype;
- (IMDeviceTokenRspBuilder*) toBuilder;

+ (IMDeviceTokenRsp*) parseFromData:(NSData*) data;
+ (IMDeviceTokenRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMDeviceTokenRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMDeviceTokenRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMDeviceTokenRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMDeviceTokenRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMDeviceTokenRspBuilder : PBGeneratedMessageBuilder {
@private
  IMDeviceTokenRsp* result;
}

- (IMDeviceTokenRsp*) defaultInstance;

- (IMDeviceTokenRspBuilder*) clear;
- (IMDeviceTokenRspBuilder*) clone;

- (IMDeviceTokenRsp*) build;
- (IMDeviceTokenRsp*) buildPartial;

- (IMDeviceTokenRspBuilder*) mergeFrom:(IMDeviceTokenRsp*) other;
- (IMDeviceTokenRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMDeviceTokenRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMDeviceTokenRspBuilder*) setUserId:(UInt32) value;
- (IMDeviceTokenRspBuilder*) clearUserId;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMDeviceTokenRspBuilder*) setAttachData:(NSData*) value;
- (IMDeviceTokenRspBuilder*) clearAttachData;
@end

@interface IMKickPCClientReq : PBGeneratedMessage {
@private
  BOOL hasUserId_:1;
  UInt32 userId;
}
- (BOOL) hasUserId;
@property (readonly) UInt32 userId;

+ (IMKickPCClientReq*) defaultInstance;
- (IMKickPCClientReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMKickPCClientReqBuilder*) builder;
+ (IMKickPCClientReqBuilder*) builder;
+ (IMKickPCClientReqBuilder*) builderWithPrototype:(IMKickPCClientReq*) prototype;
- (IMKickPCClientReqBuilder*) toBuilder;

+ (IMKickPCClientReq*) parseFromData:(NSData*) data;
+ (IMKickPCClientReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMKickPCClientReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMKickPCClientReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMKickPCClientReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMKickPCClientReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMKickPCClientReqBuilder : PBGeneratedMessageBuilder {
@private
  IMKickPCClientReq* result;
}

- (IMKickPCClientReq*) defaultInstance;

- (IMKickPCClientReqBuilder*) clear;
- (IMKickPCClientReqBuilder*) clone;

- (IMKickPCClientReq*) build;
- (IMKickPCClientReq*) buildPartial;

- (IMKickPCClientReqBuilder*) mergeFrom:(IMKickPCClientReq*) other;
- (IMKickPCClientReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMKickPCClientReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMKickPCClientReqBuilder*) setUserId:(UInt32) value;
- (IMKickPCClientReqBuilder*) clearUserId;
@end

@interface IMKickPCClientRsp : PBGeneratedMessage {
@private
  BOOL hasUserId_:1;
  BOOL hasResultCode_:1;
  UInt32 userId;
  UInt32 resultCode;
}
- (BOOL) hasUserId;
- (BOOL) hasResultCode;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 resultCode;

+ (IMKickPCClientRsp*) defaultInstance;
- (IMKickPCClientRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMKickPCClientRspBuilder*) builder;
+ (IMKickPCClientRspBuilder*) builder;
+ (IMKickPCClientRspBuilder*) builderWithPrototype:(IMKickPCClientRsp*) prototype;
- (IMKickPCClientRspBuilder*) toBuilder;

+ (IMKickPCClientRsp*) parseFromData:(NSData*) data;
+ (IMKickPCClientRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMKickPCClientRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMKickPCClientRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMKickPCClientRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMKickPCClientRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMKickPCClientRspBuilder : PBGeneratedMessageBuilder {
@private
  IMKickPCClientRsp* result;
}

- (IMKickPCClientRsp*) defaultInstance;

- (IMKickPCClientRspBuilder*) clear;
- (IMKickPCClientRspBuilder*) clone;

- (IMKickPCClientRsp*) build;
- (IMKickPCClientRsp*) buildPartial;

- (IMKickPCClientRspBuilder*) mergeFrom:(IMKickPCClientRsp*) other;
- (IMKickPCClientRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMKickPCClientRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMKickPCClientRspBuilder*) setUserId:(UInt32) value;
- (IMKickPCClientRspBuilder*) clearUserId;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMKickPCClientRspBuilder*) setResultCode:(UInt32) value;
- (IMKickPCClientRspBuilder*) clearResultCode;
@end


// @@protoc_insertion_point(global_scope)
