//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCTTestIdentifierSet.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _XCTTestIdentifierSet_Set : XCTTestIdentifierSet
{
    NSSet *_testIdentifiers;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)containsTestIdentifier:(id)arg1;
- (id)anyTestIdentifier;
- (unsigned long long)count;
- (id)initWithTestIdentifiers:(const id *)arg1 count:(unsigned long long)arg2;

@end

