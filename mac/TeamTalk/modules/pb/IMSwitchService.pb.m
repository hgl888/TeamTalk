// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "IMSwitchService.pb.h"
// @@protoc_insertion_point(imports)

@implementation ImswitchServiceRoot
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [ImswitchServiceRoot class]) {
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    extensionRegistry = registry;
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
}
@end

@interface IMP2PCmdMsg ()
@property UInt32 fromUserId;
@property UInt32 toUserId;
@property (strong) NSString* cmdMsgData;
@end

@implementation IMP2PCmdMsg

- (BOOL) hasFromUserId {
  return !!hasFromUserId_;
}
- (void) setHasFromUserId:(BOOL) value_ {
  hasFromUserId_ = !!value_;
}
@synthesize fromUserId;
- (BOOL) hasToUserId {
  return !!hasToUserId_;
}
- (void) setHasToUserId:(BOOL) value_ {
  hasToUserId_ = !!value_;
}
@synthesize toUserId;
- (BOOL) hasCmdMsgData {
  return !!hasCmdMsgData_;
}
- (void) setHasCmdMsgData:(BOOL) value_ {
  hasCmdMsgData_ = !!value_;
}
@synthesize cmdMsgData;
- (instancetype) init {
  if ((self = [super init])) {
    self.fromUserId = 0;
    self.toUserId = 0;
    self.cmdMsgData = @"";
  }
  return self;
}
static IMP2PCmdMsg* defaultIMP2PCmdMsgInstance = nil;
+ (void) initialize {
  if (self == [IMP2PCmdMsg class]) {
    defaultIMP2PCmdMsgInstance = [[IMP2PCmdMsg alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultIMP2PCmdMsgInstance;
}
- (instancetype) defaultInstance {
  return defaultIMP2PCmdMsgInstance;
}
- (BOOL) isInitialized {
  if (!self.hasFromUserId) {
    return NO;
  }
  if (!self.hasToUserId) {
    return NO;
  }
  if (!self.hasCmdMsgData) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasFromUserId) {
    [output writeUInt32:1 value:self.fromUserId];
  }
  if (self.hasToUserId) {
    [output writeUInt32:2 value:self.toUserId];
  }
  if (self.hasCmdMsgData) {
    [output writeString:3 value:self.cmdMsgData];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasFromUserId) {
    size_ += computeUInt32Size(1, self.fromUserId);
  }
  if (self.hasToUserId) {
    size_ += computeUInt32Size(2, self.toUserId);
  }
  if (self.hasCmdMsgData) {
    size_ += computeStringSize(3, self.cmdMsgData);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (IMP2PCmdMsg*) parseFromData:(NSData*) data {
  return (IMP2PCmdMsg*)[[[IMP2PCmdMsg builder] mergeFromData:data] build];
}
+ (IMP2PCmdMsg*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (IMP2PCmdMsg*)[[[IMP2PCmdMsg builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (IMP2PCmdMsg*) parseFromInputStream:(NSInputStream*) input {
  return (IMP2PCmdMsg*)[[[IMP2PCmdMsg builder] mergeFromInputStream:input] build];
}
+ (IMP2PCmdMsg*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (IMP2PCmdMsg*)[[[IMP2PCmdMsg builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (IMP2PCmdMsg*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (IMP2PCmdMsg*)[[[IMP2PCmdMsg builder] mergeFromCodedInputStream:input] build];
}
+ (IMP2PCmdMsg*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (IMP2PCmdMsg*)[[[IMP2PCmdMsg builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (IMP2PCmdMsgBuilder*) builder {
  return [[IMP2PCmdMsgBuilder alloc] init];
}
+ (IMP2PCmdMsgBuilder*) builderWithPrototype:(IMP2PCmdMsg*) prototype {
  return [[IMP2PCmdMsg builder] mergeFrom:prototype];
}
- (IMP2PCmdMsgBuilder*) builder {
  return [IMP2PCmdMsg builder];
}
- (IMP2PCmdMsgBuilder*) toBuilder {
  return [IMP2PCmdMsg builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasFromUserId) {
    [output appendFormat:@"%@%@: %@\n", indent, @"fromUserId", [NSNumber numberWithInteger:self.fromUserId]];
  }
  if (self.hasToUserId) {
    [output appendFormat:@"%@%@: %@\n", indent, @"toUserId", [NSNumber numberWithInteger:self.toUserId]];
  }
  if (self.hasCmdMsgData) {
    [output appendFormat:@"%@%@: %@\n", indent, @"cmdMsgData", self.cmdMsgData];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[IMP2PCmdMsg class]]) {
    return NO;
  }
  IMP2PCmdMsg *otherMessage = other;
  return
      self.hasFromUserId == otherMessage.hasFromUserId &&
      (!self.hasFromUserId || self.fromUserId == otherMessage.fromUserId) &&
      self.hasToUserId == otherMessage.hasToUserId &&
      (!self.hasToUserId || self.toUserId == otherMessage.toUserId) &&
      self.hasCmdMsgData == otherMessage.hasCmdMsgData &&
      (!self.hasCmdMsgData || [self.cmdMsgData isEqual:otherMessage.cmdMsgData]) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasFromUserId) {
    hashCode = hashCode * 31 + [[NSNumber numberWithInteger:self.fromUserId] hash];
  }
  if (self.hasToUserId) {
    hashCode = hashCode * 31 + [[NSNumber numberWithInteger:self.toUserId] hash];
  }
  if (self.hasCmdMsgData) {
    hashCode = hashCode * 31 + [self.cmdMsgData hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface IMP2PCmdMsgBuilder()
@property (strong) IMP2PCmdMsg* resultImp2PcmdMsg;
@end

@implementation IMP2PCmdMsgBuilder
@synthesize resultImp2PcmdMsg;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultImp2PcmdMsg = [[IMP2PCmdMsg alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultImp2PcmdMsg;
}
- (IMP2PCmdMsgBuilder*) clear {
  self.resultImp2PcmdMsg = [[IMP2PCmdMsg alloc] init];
  return self;
}
- (IMP2PCmdMsgBuilder*) clone {
  return [IMP2PCmdMsg builderWithPrototype:resultImp2PcmdMsg];
}
- (IMP2PCmdMsg*) defaultInstance {
  return [IMP2PCmdMsg defaultInstance];
}
- (IMP2PCmdMsg*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (IMP2PCmdMsg*) buildPartial {
  IMP2PCmdMsg* returnMe = resultImp2PcmdMsg;
  self.resultImp2PcmdMsg = nil;
  return returnMe;
}
- (IMP2PCmdMsgBuilder*) mergeFrom:(IMP2PCmdMsg*) other {
  if (other == [IMP2PCmdMsg defaultInstance]) {
    return self;
  }
  if (other.hasFromUserId) {
    [self setFromUserId:other.fromUserId];
  }
  if (other.hasToUserId) {
    [self setToUserId:other.toUserId];
  }
  if (other.hasCmdMsgData) {
    [self setCmdMsgData:other.cmdMsgData];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (IMP2PCmdMsgBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (IMP2PCmdMsgBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  PBUnknownFieldSetBuilder* unknownFields = [PBUnknownFieldSet builderWithUnknownFields:self.unknownFields];
  while (YES) {
    SInt32 tag = [input readTag];
    switch (tag) {
      case 0:
        [self setUnknownFields:[unknownFields build]];
        return self;
      default: {
        if (![self parseUnknownField:input unknownFields:unknownFields extensionRegistry:extensionRegistry tag:tag]) {
          [self setUnknownFields:[unknownFields build]];
          return self;
        }
        break;
      }
      case 8: {
        [self setFromUserId:[input readUInt32]];
        break;
      }
      case 16: {
        [self setToUserId:[input readUInt32]];
        break;
      }
      case 26: {
        [self setCmdMsgData:[input readString]];
        break;
      }
    }
  }
}
- (BOOL) hasFromUserId {
  return resultImp2PcmdMsg.hasFromUserId;
}
- (UInt32) fromUserId {
  return resultImp2PcmdMsg.fromUserId;
}
- (IMP2PCmdMsgBuilder*) setFromUserId:(UInt32) value {
  resultImp2PcmdMsg.hasFromUserId = YES;
  resultImp2PcmdMsg.fromUserId = value;
  return self;
}
- (IMP2PCmdMsgBuilder*) clearFromUserId {
  resultImp2PcmdMsg.hasFromUserId = NO;
  resultImp2PcmdMsg.fromUserId = 0;
  return self;
}
- (BOOL) hasToUserId {
  return resultImp2PcmdMsg.hasToUserId;
}
- (UInt32) toUserId {
  return resultImp2PcmdMsg.toUserId;
}
- (IMP2PCmdMsgBuilder*) setToUserId:(UInt32) value {
  resultImp2PcmdMsg.hasToUserId = YES;
  resultImp2PcmdMsg.toUserId = value;
  return self;
}
- (IMP2PCmdMsgBuilder*) clearToUserId {
  resultImp2PcmdMsg.hasToUserId = NO;
  resultImp2PcmdMsg.toUserId = 0;
  return self;
}
- (BOOL) hasCmdMsgData {
  return resultImp2PcmdMsg.hasCmdMsgData;
}
- (NSString*) cmdMsgData {
  return resultImp2PcmdMsg.cmdMsgData;
}
- (IMP2PCmdMsgBuilder*) setCmdMsgData:(NSString*) value {
  resultImp2PcmdMsg.hasCmdMsgData = YES;
  resultImp2PcmdMsg.cmdMsgData = value;
  return self;
}
- (IMP2PCmdMsgBuilder*) clearCmdMsgData {
  resultImp2PcmdMsg.hasCmdMsgData = NO;
  resultImp2PcmdMsg.cmdMsgData = @"";
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
