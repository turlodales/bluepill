//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, XCTSpindumpRequestSpecification;

@protocol XCTMessagingRole_DiagnosticsCollection
- (id)_IDE_requestSpindumpWithSpecification:(XCTSpindumpRequestSpecification *)arg1;
- (id)_IDE_requestSpindump;
- (id)_IDE_requestLogArchiveWithStartDate:(NSDate *)arg1;
- (id)_IDE_collectNewCrashReportsInDirectories:(NSArray *)arg1 matchingProcessNames:(NSArray *)arg2;
@end

