//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface _DPPrivacyBudgetProperties : NSObject
{
    NSString *_name;
    NSNumber *_interval;
    NSNumber *_intervalBudgetValue;
    NSNumber *_refillInterval;
    NSNumber *_refillAmount;
}

+ (id)budgetMaintenanceSchedule;
+ (id)allBudgetPropertiesKeys;
+ (id)budgetPropertiesFromFile:(id)arg1;
+ (id)budgetPropertiesForKey:(id)arg1;
+ (void)initializeAllBudgetProperties;
+ (id)budgetPropertiesFromDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *refillAmount; // @synthesize refillAmount=_refillAmount;
@property(retain, nonatomic) NSNumber *refillInterval; // @synthesize refillInterval=_refillInterval;
@property(retain, nonatomic) NSNumber *intervalBudgetValue; // @synthesize intervalBudgetValue=_intervalBudgetValue;
@property(retain, nonatomic) NSNumber *interval; // @synthesize interval=_interval;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

