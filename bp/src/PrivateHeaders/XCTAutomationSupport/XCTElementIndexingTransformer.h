//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTAutomationSupport/XCTElementSetCodableTransformer.h>

@class XCTIndexingTransformerIterator;

@interface XCTElementIndexingTransformer : XCTElementSetCodableTransformer
{
    unsigned long long _elementIndex;
    XCTIndexingTransformerIterator *_currentIterator;
}

+ (void)provideCapabilitiesToBuilder:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) XCTIndexingTransformerIterator *currentIterator; // @synthesize currentIterator=_currentIterator;
@property(readonly) unsigned long long elementIndex; // @synthesize elementIndex=_elementIndex;
- (id)iteratorForInput:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (_Bool)supportsAttributeKeyPathAnalysis;
- (_Bool)canBeRemotelyEvaluatedWithCapabilities:(id)arg1;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithElementIndex:(unsigned long long)arg1;

@end

