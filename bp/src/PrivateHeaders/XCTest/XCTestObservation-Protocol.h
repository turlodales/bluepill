//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSBundle, NSString, XCTExpectedFailure, XCTIssue, XCTestCase, XCTestSuite;

@protocol XCTestObservation <NSObject>

@optional
- (void)testCase:(XCTestCase *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testSuite:(XCTestSuite *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidFinish:(XCTestCase *)arg1;
- (void)testCase:(XCTestCase *)arg1 didRecordExpectedFailure:(XCTExpectedFailure *)arg2;
- (void)testCase:(XCTestCase *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (void)testCaseWillStart:(XCTestCase *)arg1;
- (void)testSuiteDidFinish:(XCTestSuite *)arg1;
- (void)testSuite:(XCTestSuite *)arg1 didRecordExpectedFailure:(XCTExpectedFailure *)arg2;
- (void)testSuite:(XCTestSuite *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (void)testSuiteWillStart:(XCTestSuite *)arg1;
- (void)testBundleDidFinish:(NSBundle *)arg1;
- (void)testBundleWillStart:(NSBundle *)arg1;
@end

