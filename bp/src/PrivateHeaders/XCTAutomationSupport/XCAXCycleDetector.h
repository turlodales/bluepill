//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface XCAXCycleDetector : NSObject
{
    NSMutableOrderedSet *_elementStack;
}

+ (id)_cycleDescriptionForElementStack:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *currentElementPath;
- (id)_cycleDescriptionForElementWithCurrentStack:(id)arg1;
- (id)_cycleErrorForElement:(id)arg1;
- (void)untrackElement:(id)arg1;
- (_Bool)trackElement:(id)arg1 error:(id *)arg2;
- (id)init;

@end

