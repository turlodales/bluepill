//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class XCDeviceEvent;

@protocol XCUIDeviceEventAndStateInterface <NSObject>
- (void)getDeviceOrientationWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)updateDeviceOrientation:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)performDeviceEvent:(XCDeviceEvent *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

