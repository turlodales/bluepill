//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol XCUIDevice;

@interface XCUIApplicationImplDepot : NSObject
{
    NSMutableDictionary *_applicationImpls;
    id <XCUIDevice> _device;
}

- (void).cxx_destruct;
@property(readonly) id <XCUIDevice> device; // @synthesize device=_device;
- (id)applicationImplForSpecifier:(id)arg1;
- (id)_canonicalSpecifierFromSpecifier:(id)arg1;
- (id)_identifierFromSpecifier:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

