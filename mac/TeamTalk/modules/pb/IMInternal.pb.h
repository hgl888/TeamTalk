// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "IMBaseDefine.pb.h"
// @@protoc_insertion_point(imports)

@class AuthInfo;
@class AuthInfoBuilder;
@class ContactSessionInfo;
@class ContactSessionInfoBuilder;
@class GroupInfo;
@class GroupInfoBuilder;
@class GroupVersionInfo;
@class GroupVersionInfoBuilder;
@class IMGetUserIdListByNickNameReq;
@class IMGetUserIdListByNickNameReqBuilder;
@class IMGetUserIdListByNickNameRsp;
@class IMGetUserIdListByNickNameRspBuilder;
@class IMSyncAuthInfoReq;
@class IMSyncAuthInfoReqBuilder;
@class IMSyncAuthInfoRsp;
@class IMSyncAuthInfoRspBuilder;
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


@interface IminternalRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface IMSyncAuthInfoReq : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasLatestTime_:1;
  NSData* attachData;
  UInt32 latestTime;
}
- (BOOL) hasLatestTime;
- (BOOL) hasAttachData;
@property (readonly) UInt32 latestTime;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMSyncAuthInfoReqBuilder*) builder;
+ (IMSyncAuthInfoReqBuilder*) builder;
+ (IMSyncAuthInfoReqBuilder*) builderWithPrototype:(IMSyncAuthInfoReq*) prototype;
- (IMSyncAuthInfoReqBuilder*) toBuilder;

+ (IMSyncAuthInfoReq*) parseFromData:(NSData*) data;
+ (IMSyncAuthInfoReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMSyncAuthInfoReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMSyncAuthInfoReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMSyncAuthInfoReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMSyncAuthInfoReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMSyncAuthInfoReqBuilder : PBGeneratedMessageBuilder {
@private
  IMSyncAuthInfoReq* resultImsyncAuthInfoReq;
}

- (IMSyncAuthInfoReq*) defaultInstance;

- (IMSyncAuthInfoReqBuilder*) clear;
- (IMSyncAuthInfoReqBuilder*) clone;

- (IMSyncAuthInfoReq*) build;
- (IMSyncAuthInfoReq*) buildPartial;

- (IMSyncAuthInfoReqBuilder*) mergeFrom:(IMSyncAuthInfoReq*) other;
- (IMSyncAuthInfoReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMSyncAuthInfoReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasLatestTime;
- (UInt32) latestTime;
- (IMSyncAuthInfoReqBuilder*) setLatestTime:(UInt32) value;
- (IMSyncAuthInfoReqBuilder*) clearLatestTime;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMSyncAuthInfoReqBuilder*) setAttachData:(NSData*) value;
- (IMSyncAuthInfoReqBuilder*) clearAttachData;
@end

@interface IMSyncAuthInfoRsp : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasLatestTime_:1;
  NSData* attachData;
  UInt32 latestTime;
  NSMutableArray * authListArray;
}
- (BOOL) hasLatestTime;
- (BOOL) hasAttachData;
@property (readonly) UInt32 latestTime;
@property (readonly, strong) NSArray * authList;
@property (readonly, strong) NSData* attachData;
- (AuthInfo*)authListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMSyncAuthInfoRspBuilder*) builder;
+ (IMSyncAuthInfoRspBuilder*) builder;
+ (IMSyncAuthInfoRspBuilder*) builderWithPrototype:(IMSyncAuthInfoRsp*) prototype;
- (IMSyncAuthInfoRspBuilder*) toBuilder;

+ (IMSyncAuthInfoRsp*) parseFromData:(NSData*) data;
+ (IMSyncAuthInfoRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMSyncAuthInfoRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMSyncAuthInfoRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMSyncAuthInfoRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMSyncAuthInfoRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMSyncAuthInfoRspBuilder : PBGeneratedMessageBuilder {
@private
  IMSyncAuthInfoRsp* resultImsyncAuthInfoRsp;
}

- (IMSyncAuthInfoRsp*) defaultInstance;

- (IMSyncAuthInfoRspBuilder*) clear;
- (IMSyncAuthInfoRspBuilder*) clone;

- (IMSyncAuthInfoRsp*) build;
- (IMSyncAuthInfoRsp*) buildPartial;

- (IMSyncAuthInfoRspBuilder*) mergeFrom:(IMSyncAuthInfoRsp*) other;
- (IMSyncAuthInfoRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMSyncAuthInfoRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasLatestTime;
- (UInt32) latestTime;
- (IMSyncAuthInfoRspBuilder*) setLatestTime:(UInt32) value;
- (IMSyncAuthInfoRspBuilder*) clearLatestTime;

- (NSMutableArray *)authList;
- (AuthInfo*)authListAtIndex:(NSUInteger)index;
- (IMSyncAuthInfoRspBuilder *)addAuthList:(AuthInfo*)value;
- (IMSyncAuthInfoRspBuilder *)setAuthListArray:(NSArray *)array;
- (IMSyncAuthInfoRspBuilder *)clearAuthList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMSyncAuthInfoRspBuilder*) setAttachData:(NSData*) value;
- (IMSyncAuthInfoRspBuilder*) clearAttachData;
@end

@interface IMGetUserIdListByNickNameReq : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  NSData* attachData;
  NSMutableArray * nickNameListArray;
}
- (BOOL) hasAttachData;
@property (readonly, strong) NSArray * nickNameList;
@property (readonly, strong) NSData* attachData;
- (NSString*)nickNameListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGetUserIdListByNickNameReqBuilder*) builder;
+ (IMGetUserIdListByNickNameReqBuilder*) builder;
+ (IMGetUserIdListByNickNameReqBuilder*) builderWithPrototype:(IMGetUserIdListByNickNameReq*) prototype;
- (IMGetUserIdListByNickNameReqBuilder*) toBuilder;

+ (IMGetUserIdListByNickNameReq*) parseFromData:(NSData*) data;
+ (IMGetUserIdListByNickNameReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGetUserIdListByNickNameReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMGetUserIdListByNickNameReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGetUserIdListByNickNameReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGetUserIdListByNickNameReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGetUserIdListByNickNameReqBuilder : PBGeneratedMessageBuilder {
@private
  IMGetUserIdListByNickNameReq* resultImgetUserIdListByNickNameReq;
}

- (IMGetUserIdListByNickNameReq*) defaultInstance;

- (IMGetUserIdListByNickNameReqBuilder*) clear;
- (IMGetUserIdListByNickNameReqBuilder*) clone;

- (IMGetUserIdListByNickNameReq*) build;
- (IMGetUserIdListByNickNameReq*) buildPartial;

- (IMGetUserIdListByNickNameReqBuilder*) mergeFrom:(IMGetUserIdListByNickNameReq*) other;
- (IMGetUserIdListByNickNameReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGetUserIdListByNickNameReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray *)nickNameList;
- (NSString*)nickNameListAtIndex:(NSUInteger)index;
- (IMGetUserIdListByNickNameReqBuilder *)addNickNameList:(NSString*)value;
- (IMGetUserIdListByNickNameReqBuilder *)setNickNameListArray:(NSArray *)array;
- (IMGetUserIdListByNickNameReqBuilder *)clearNickNameList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGetUserIdListByNickNameReqBuilder*) setAttachData:(NSData*) value;
- (IMGetUserIdListByNickNameReqBuilder*) clearAttachData;
@end

@interface IMGetUserIdListByNickNameRsp : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  NSData* attachData;
  NSMutableArray * userInfoListArray;
}
- (BOOL) hasAttachData;
@property (readonly, strong) NSArray * userInfoList;
@property (readonly, strong) NSData* attachData;
- (UserInfo*)userInfoListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGetUserIdListByNickNameRspBuilder*) builder;
+ (IMGetUserIdListByNickNameRspBuilder*) builder;
+ (IMGetUserIdListByNickNameRspBuilder*) builderWithPrototype:(IMGetUserIdListByNickNameRsp*) prototype;
- (IMGetUserIdListByNickNameRspBuilder*) toBuilder;

+ (IMGetUserIdListByNickNameRsp*) parseFromData:(NSData*) data;
+ (IMGetUserIdListByNickNameRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGetUserIdListByNickNameRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMGetUserIdListByNickNameRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGetUserIdListByNickNameRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGetUserIdListByNickNameRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGetUserIdListByNickNameRspBuilder : PBGeneratedMessageBuilder {
@private
  IMGetUserIdListByNickNameRsp* resultImgetUserIdListByNickNameRsp;
}

- (IMGetUserIdListByNickNameRsp*) defaultInstance;

- (IMGetUserIdListByNickNameRspBuilder*) clear;
- (IMGetUserIdListByNickNameRspBuilder*) clone;

- (IMGetUserIdListByNickNameRsp*) build;
- (IMGetUserIdListByNickNameRsp*) buildPartial;

- (IMGetUserIdListByNickNameRspBuilder*) mergeFrom:(IMGetUserIdListByNickNameRsp*) other;
- (IMGetUserIdListByNickNameRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGetUserIdListByNickNameRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray *)userInfoList;
- (UserInfo*)userInfoListAtIndex:(NSUInteger)index;
- (IMGetUserIdListByNickNameRspBuilder *)addUserInfoList:(UserInfo*)value;
- (IMGetUserIdListByNickNameRspBuilder *)setUserInfoListArray:(NSArray *)array;
- (IMGetUserIdListByNickNameRspBuilder *)clearUserInfoList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGetUserIdListByNickNameRspBuilder*) setAttachData:(NSData*) value;
- (IMGetUserIdListByNickNameRspBuilder*) clearAttachData;
@end


// @@protoc_insertion_point(global_scope)
