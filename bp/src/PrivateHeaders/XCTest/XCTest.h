//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@import Foundation;

#import <XCTest/XCTIssueHandling-Protocol.h>

@class NSString, XCTExpectedFailureContextManager, XCTTestIdentifier, XCTestObservationCenter, XCTestRun;

@interface XCTest : NSObject <XCTIssueHandling>
{
    XCTExpectedFailureContextManager *_expectedFailureContextManager;
    XCTestRun *_testRun;
    XCTestObservationCenter *_observationCenter;
}

- (void)expectFailureWithContext:(id)arg1 inBlock:(id)arg2;
- (void)expectFailureWithContext:(id)arg1;
- (void)_checkForExpectedFailureMatchingIssue:(id)arg1;
- (id)expectedFailureContextManager;
- (void)handleIssue:(id)arg1;
- (long long)defaultExecutionOrderCompare:(id)arg1;
@property(readonly) NSString *nameForLegacyLogging;
@property(readonly) NSString *languageAgnosticTestMethodName;
@property(readonly) NSString *languageAgnosticTestClassName;
- (_Bool)tearDownWithError:(id *)arg1;
- (void)tearDown;
- (void)setUp;
- (_Bool)setUpWithError:(id *)arg1;
- (_Bool)_shouldRerunTest;
- (void)runTest;
- (void)performTest:(id)arg1;
@property(retain) XCTestObservationCenter *observationCenter; // @synthesize observationCenter=_observationCenter;
@property(readonly) XCTestRun *testRun; // @synthesize testRun=_testRun;
@property(readonly) Class testRunClass;
@property(readonly) Class _requiredTestRunBaseClass;
@property(readonly, copy) NSString *name;
@property(readonly) unsigned long long testCaseCount;
- (id)_duplicate;
@property(readonly) NSString *_methodNameForReporting;
@property(readonly) NSString *_classNameForReporting;
- (void)removeTestsWithIdentifierInSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, getter=_identifier) XCTTestIdentifier *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

