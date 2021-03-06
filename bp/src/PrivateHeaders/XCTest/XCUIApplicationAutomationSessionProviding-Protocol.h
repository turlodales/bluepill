//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSString;

@protocol XCUIApplicationAutomationSessionProviding <NSObject>
@property(readonly) long long applicationAutomationSessionSupport;
- (void)requestUnsupportedBundleIdentifiersForAutomationSessions:(void (^)(NSSet *, NSError *))arg1;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 preferredBackendPath:(NSString *)arg2 reply:(void (^)(id <XCTRunnerAutomationSession>, NSError *))arg3;
@end

