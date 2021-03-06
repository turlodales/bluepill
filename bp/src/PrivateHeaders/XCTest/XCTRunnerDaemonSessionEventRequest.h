//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCUIEventSynthesisRequest-Protocol.h>

@class NSString, XCSynthesizedEventRecord;

__attribute__((visibility("hidden")))
@interface XCTRunnerDaemonSessionEventRequest : NSObject <XCUIEventSynthesisRequest>
{
    XCSynthesizedEventRecord *_event;
    double _upperBoundOnDuration;
}

- (void).cxx_destruct;
@property double upperBoundOnDuration; // @synthesize upperBoundOnDuration=_upperBoundOnDuration;
@property(readonly) XCSynthesizedEventRecord *event; // @synthesize event=_event;
- (void)invalidate;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

