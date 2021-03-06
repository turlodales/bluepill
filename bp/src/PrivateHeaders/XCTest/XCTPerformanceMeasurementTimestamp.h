//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface XCTPerformanceMeasurementTimestamp : NSObject
{
    _Bool _hasContinuousTime;
    unsigned long long _continuousTime;
    unsigned long long _absoluteTime;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly) _Bool hasContinuousTime; // @synthesize hasContinuousTime=_hasContinuousTime;
@property(readonly, copy) NSDate *date; // @synthesize date=_date;
@property(readonly) unsigned long long absoluteTime; // @synthesize absoluteTime=_absoluteTime;
@property(readonly) unsigned long long continuousTime; // @synthesize continuousTime=_continuousTime;
@property(readonly) unsigned long long absoluteTimeNanoSeconds;
- (id)initWithAbsoluteTime:(unsigned long long)arg1 date:(id)arg2;
- (id)initWithContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 date:(id)arg3;
- (id)init;

@end

