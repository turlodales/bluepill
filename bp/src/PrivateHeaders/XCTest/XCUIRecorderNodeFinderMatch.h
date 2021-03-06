//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, XCSourceCodeTreeNode, XCUIRecorderNodeFinder;

__attribute__((visibility("hidden")))
@interface XCUIRecorderNodeFinderMatch : NSObject
{
    NSSet *_matchingSnapshots;
    XCSourceCodeTreeNode *_node;
    XCUIRecorderNodeFinder *_ancestorFinder;
    NSMutableArray *_descendantFinders;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *descendantFinders; // @synthesize descendantFinders=_descendantFinders;
@property(retain) XCUIRecorderNodeFinder *ancestorFinder; // @synthesize ancestorFinder=_ancestorFinder;
@property(retain) XCSourceCodeTreeNode *node; // @synthesize node=_node;
@property(copy) NSSet *matchingSnapshots; // @synthesize matchingSnapshots=_matchingSnapshots;
- (void)invalidate;
- (id)nodeIncludingDescendants;
- (id)description;
- (id)initWithNode:(id)arg1 matchingSnapshots:(id)arg2 ancestorFinder:(id)arg3;

@end

