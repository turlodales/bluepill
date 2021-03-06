//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface XCTAttachment : NSObject <NSSecureCoding>
{
    _Bool _hasPayload;
    NSString *_uniformTypeIdentifier;
    NSString *_name;
    NSDictionary *_userInfo;
    CDUnknownBlockType _serializationBlock;
    long long _internalLifetime;
    NSDate *_timestamp;
    NSString *_fileNameOverride;
    NSData *_payload;
}

+ (id)attachmentWithXCTImage:(id)arg1;
+ (id)_attachmentWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 serializationBlock:(CDUnknownBlockType)arg3;
+ (id)attachmentWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 payload:(id)arg3 userInfo:(id)arg4;
+ (_Bool)supportsSecureCoding;
+ (void)setUserAttachmentLifetime:(long long)arg1;
+ (long long)userAttachmentLifetime;
+ (void)setSystemAttachmentLifetime:(long long)arg1;
+ (long long)systemAttachmentLifetime;
+ (id)attachmentWithScreenshot:(id)arg1 quality:(long long)arg2;
+ (id)attachmentWithScreenshot:(id)arg1;
+ (id)attachmentWithImage:(id)arg1 quality:(long long)arg2;
+ (id)attachmentWithImage:(id)arg1;
+ (id)attachmentWithContentsOfFileAtURL:(id)arg1;
+ (id)attachmentWithContentsOfFileAtURL:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)_attachmentWithContentsOfFileAtURL:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)attachmentWithPlistObject:(id)arg1;
+ (id)attachmentWithArchivableObject:(id)arg1;
+ (id)attachmentWithArchivableObject:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)_attachmentWithArchivableObject:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)attachmentWithString:(id)arg1;
+ (id)attachmentWithData:(id)arg1;
+ (id)attachmentWithData:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)_attachmentWithData:(id)arg1 uniformTypeIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(readonly) _Bool hasPayload; // @synthesize hasPayload=_hasPayload;
@property(readonly, copy) NSData *payload; // @synthesize payload=_payload;
@property(copy) NSString *fileNameOverride; // @synthesize fileNameOverride=_fileNameOverride;
@property(copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property long long internalLifetime; // @synthesize internalLifetime=_internalLifetime;
@property(copy) CDUnknownBlockType serializationBlock; // @synthesize serializationBlock=_serializationBlock;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
- (id)debugQuickLookObject;
- (void)makeSystem;
- (id)debugDescription;
- (void)_writeToUserInfoWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForEncoding;
@property long long lifetime;
- (id)initWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 serializationBlock:(CDUnknownBlockType)arg3;
- (id)initWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 payload:(id)arg3 userInfo:(id)arg4;

@end

