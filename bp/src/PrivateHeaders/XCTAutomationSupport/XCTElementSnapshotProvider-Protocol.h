//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTAutomationSupport/NSObject-Protocol.h>

@class NSArray, NSDictionary, XCAccessibilityElement, XCElementSnapshot, XCTTimeoutControls;

@protocol XCTElementSnapshotProvider <NSObject>
- (XCElementSnapshot *)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 timeoutControls:(XCTTimeoutControls *)arg4 error:(id *)arg5;
@end

