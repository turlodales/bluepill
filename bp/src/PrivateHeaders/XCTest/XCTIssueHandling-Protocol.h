//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@import Foundation;

@class XCTExpectedFailureContext, XCTIssue;

@protocol XCTIssueHandling <NSObject>
- (void)expectFailureWithContext:(XCTExpectedFailureContext *)arg1 inBlock:(void (^)(void))arg2;
- (void)expectFailureWithContext:(XCTExpectedFailureContext *)arg1;
- (void)handleIssue:(XCTIssue *)arg1;
@end

