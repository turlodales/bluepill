//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class XCSynthesizedEventRecord;
@protocol XCUIEventSynthesisRequest;

@protocol XCUIEventSynthesizing <NSObject>
@property double implicitEventConfirmationIntervalForCurrentContext;
- (_Bool)requestPressureEventsSupportedOrError:(id *)arg1;
- (id <XCUIEventSynthesisRequest>)synthesizeEvent:(XCSynthesizedEventRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

