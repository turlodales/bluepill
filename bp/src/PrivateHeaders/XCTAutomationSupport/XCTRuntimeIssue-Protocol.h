//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTAutomationSupport/NSObject-Protocol.h>
#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSString;
@protocol XCTRuntimeIssue;

@protocol XCTRuntimeIssue <NSObject, NSSecureCoding>
+ (NSString *)capability;
@property(readonly) unsigned long long aggregationHash;
@property(readonly) NSString *detailedDescription;
@property(readonly) NSString *shortDescription;
- (_Bool)isEqualForAggregationWith:(id <XCTRuntimeIssue>)arg1;
@end

