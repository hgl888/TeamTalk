// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "Unittest_import_public.pb.h"
// @@protoc_insertion_point(imports)

@class ImportMessage;
@class ImportMessageBuilder;
@class PublicImportMessage;
@class PublicImportMessageBuilder;


typedef NS_ENUM(SInt32, ImportEnum) {
  ImportEnumImportFoo = 7,
  ImportEnumImportBar = 8,
  ImportEnumImportBaz = 9,
};

BOOL ImportEnumIsValidValue(ImportEnum value);
NSString *NSStringFromImportEnum(ImportEnum value);


@interface UnittestImportRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define ImportMessage_d @"d"
@interface ImportMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasD_:1;
  SInt32 d;
}
- (BOOL) hasD;
@property (readonly) SInt32 d;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ImportMessageBuilder*) builder;
+ (ImportMessageBuilder*) builder;
+ (ImportMessageBuilder*) builderWithPrototype:(ImportMessage*) prototype;
- (ImportMessageBuilder*) toBuilder;

+ (ImportMessage*) parseFromData:(NSData*) data;
+ (ImportMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ImportMessage*) parseFromInputStream:(NSInputStream*) input;
+ (ImportMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ImportMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ImportMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ImportMessageBuilder : PBGeneratedMessageBuilder {
@private
  ImportMessage* resultImportMessage;
}

- (ImportMessage*) defaultInstance;

- (ImportMessageBuilder*) clear;
- (ImportMessageBuilder*) clone;

- (ImportMessage*) build;
- (ImportMessage*) buildPartial;

- (ImportMessageBuilder*) mergeFrom:(ImportMessage*) other;
- (ImportMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ImportMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasD;
- (SInt32) d;
- (ImportMessageBuilder*) setD:(SInt32) value;
- (ImportMessageBuilder*) clearD;
@end


// @@protoc_insertion_point(global_scope)
