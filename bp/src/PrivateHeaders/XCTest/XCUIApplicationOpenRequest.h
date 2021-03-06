//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface XCUIApplicationOpenRequest : NSObject
{
    _Bool _activateIfRunning;
    _Bool _terminateIfRunning;
    _Bool _usePlatformLauncher;
    NSArray *_launchArguments;
    NSDictionary *_environmentVariables;
}

+ (id)activationRequestFromLaunchRequest:(id)arg1;
+ (id)activationRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(_Bool)arg3;
+ (id)launchRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(_Bool)arg3;
- (void).cxx_destruct;
@property(copy) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(copy) NSArray *launchArguments; // @synthesize launchArguments=_launchArguments;
@property _Bool usePlatformLauncher; // @synthesize usePlatformLauncher=_usePlatformLauncher;
@property _Bool terminateIfRunning; // @synthesize terminateIfRunning=_terminateIfRunning;
@property _Bool activateIfRunning; // @synthesize activateIfRunning=_activateIfRunning;

@end

