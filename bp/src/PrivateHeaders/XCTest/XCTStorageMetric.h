//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTMetric-Protocol.h>
#import <XCTest/XCTMetric_Private-Protocol.h>

@class MXMDiskMetric, NSString;

@interface XCTStorageMetric : NSObject <XCTMetric_Private, XCTMetric>
{
    NSString *_instrumentationName;
    MXMDiskMetric *__underlyingMetric;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MXMDiskMetric *_underlyingMetric; // @synthesize _underlyingMetric=__underlyingMetric;
@property(readonly, nonatomic) NSString *instrumentationName; // @synthesize instrumentationName=_instrumentationName;
- (id)reportMeasurementsFromStartTime:(id)arg1 toEndTime:(id)arg2 error:(id *)arg3;
- (void)didStopMeasuringAtTimestamp:(id)arg1;
- (void)didStartMeasuringAtTimestamp:(id)arg1;
- (void)willBeginMeasuringAtEstimatedTimestamp:(id)arg1;
- (void)prepareToMeasureWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnderlyingMetric:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

