//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCUIHitPointResult : NSObject
{
    _Bool _hittable;
    struct CGPoint _hitPoint;
}

@property(readonly, getter=isHittable) _Bool hittable; // @synthesize hittable=_hittable;
@property(readonly) struct CGPoint hitPoint; // @synthesize hitPoint=_hitPoint;
- (id)description;
- (id)initWithHitPoint:(struct CGPoint)arg1 hittable:(_Bool)arg2;

@end

