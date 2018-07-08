//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

#import "_DKHasComparableValue.h"
#import "_DKHasPrimaryValue.h"
#import "_DKProtobufConverting.h"

@class NSDate, NSDictionary, NSString, NSTimeZone, _DKEventStream;

@interface _DKEvent : _DKObject <_DKProtobufConverting, _DKHasComparableValue, _DKHasPrimaryValue>
{
    BOOL _shouldSync;
    NSDate *_startDate;
    NSDate *_endDate;
    _DKEventStream *_stream;
    _DKObject *_value;
    NSTimeZone *_timeZone;
    NSDictionary *_metadata;
    double _confidence;
}

+ (BOOL)supportsSecureCoding;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(double)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(long long)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4;
+ (id)eventRepresentingUserActivityWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2;
+ (BOOL)isValidURL:(id)arg1;
+ (id)allowedWebpageURLSchemes;
+ (id)eventWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)eventWithRelevantShortcut:(id)arg1 bundleID:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)interactionWithEvent:(id)arg1;
+ (id)eventWithInteraction:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)metadataForInteraction:(id)arg1;
+ (BOOL)copyMetadata:(id)arg1 toManagedObject:(id)arg2;
+ (id)fetchCustomMetadataWithName:(id)arg1 valueHash:(id)arg2 context:(id)arg3;
+ (id)eventValueFromManagedObject:(id)arg1 streamName:(id)arg2 readMetadata:(BOOL)arg3 cache:(id)arg4;
+ (id)uncachedEventValueFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)eventStreamFromManagedObject:(id)arg1 forValue:(id)arg2 cache:(id)arg3;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)entityName;
+ (id)keyPathForMOKeyPath:(id)arg1;
+ (id)moKeyPathForKeyPath:(id)arg1;
@property BOOL shouldSync; // @synthesize shouldSync=_shouldSync;
@property double confidence; // @synthesize confidence=_confidence;
@property(copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) _DKObject *value; // @synthesize value=_value;
@property(retain) _DKEventStream *stream; // @synthesize stream=_stream;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)stringValue;
- (double)doubleValue;
- (long long)integerValue;
- (BOOL)boolValue;
- (id)primaryValue;
- (long long)compareValue:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
- (id)relevantAction;
- (id)relevantShortcut;
- (id)toPBCodable;
- (id)asInteraction;
- (BOOL)copyToManagedObject:(id)arg1;
- (unsigned long long)eventValueClassOf:(id)arg1;
- (id)metadataFromCustomMetadata:(id)arg1 cache:(id)arg2;
- (id)metadataFromCustomMetadata:(id)arg1;
- (id)metadataFromStructuredMetadata:(id)arg1 cache:(id)arg2;
- (id)metadataFromStructuredMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

