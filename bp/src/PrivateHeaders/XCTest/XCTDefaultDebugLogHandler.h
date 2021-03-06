//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCDebugLogDelegate-Protocol.h>
#import <XCTest/XCTASDebugLogDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, XCDebugLogDelegate;

__attribute__((visibility("hidden")))
@interface XCTDefaultDebugLogHandler : NSObject <XCTASDebugLogDelegate, XCDebugLogDelegate>
{
    id <XCDebugLogDelegate> _logSink;
    NSMutableArray *_debugMessageBuffer;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedHandler;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSMutableArray *debugMessageBuffer; // @synthesize debugMessageBuffer=_debugMessageBuffer;
@property(retain) id <XCDebugLogDelegate> logSink; // @synthesize logSink=_logSink;
- (void)logDebugMessage:(id)arg1;
- (void)_queue_flushDebugMessageBufferWithBlock:(CDUnknownBlockType)arg1;
- (void)printBufferedDebugMessages;
- (void)logStartupInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

