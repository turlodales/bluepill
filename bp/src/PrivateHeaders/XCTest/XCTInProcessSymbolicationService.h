//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTSymbolInfoProviding-Protocol.h>

@class NSSet, NSString;

@interface XCTInProcessSymbolicationService : NSObject <XCTSymbolInfoProviding>
{
    struct atomic_flag _symbolicatorInitialized;
    NSSet *_imageNames;
    struct _CSTypeRef _symbolicator;
    CDStruct_7da0dd4a _symbolicationFunctions;
}

+ (CDStruct_7da0dd4a)standardSymbolicationFunctions;
+ (void)registerSharedServiceWithConfiguration:(id)arg1;
+ (id)imageNamesFromEnvironmentVariables:(id)arg1;
- (void).cxx_destruct;
@property(readonly) struct atomic_flag symbolicatorInitialized; // @synthesize symbolicatorInitialized=_symbolicatorInitialized;
@property(readonly) struct _CSTypeRef symbolicator; // @synthesize symbolicator=_symbolicator;
@property(readonly) CDStruct_7da0dd4a symbolicationFunctions; // @synthesize symbolicationFunctions=_symbolicationFunctions;
@property(readonly, copy) NSSet *imageNames; // @synthesize imageNames=_imageNames;
- (void)_prepareForSymbolication;
- (id)symbolInfoForAddressInCurrentProcess:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithImageNames:(id)arg1;
- (id)initWithImageNames:(id)arg1 symbolicationFunctions:(CDStruct_7da0dd4a)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

