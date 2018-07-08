//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSTimeZone;

@interface USUsageReport : NSObject <NSSecureCoding>
{
    double _screenTime;
    NSDateInterval *_longestSession;
    NSArray *_categoryUsage;
    NSDictionary *_userNotificationsByBundleIdentifier;
    NSDictionary *_pickupsByBundleIdentifier;
    unsigned long long _pickupsWithoutApplicationUsage;
    NSDate *_firstPickup;
    NSDateInterval *_interval;
    NSTimeZone *_timeZone;
    NSDate *_lastEventDate;
    unsigned long long _deviceUnlocks;
    unsigned long long _screenWakes;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) unsigned long long screenWakes; // @synthesize screenWakes=_screenWakes;
@property(readonly) unsigned long long deviceUnlocks; // @synthesize deviceUnlocks=_deviceUnlocks;
@property(readonly) NSDate *lastEventDate; // @synthesize lastEventDate=_lastEventDate;
@property(readonly) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly) NSDateInterval *interval; // @synthesize interval=_interval;
@property(readonly) NSDate *firstPickup; // @synthesize firstPickup=_firstPickup;
@property(readonly) unsigned long long pickupsWithoutApplicationUsage; // @synthesize pickupsWithoutApplicationUsage=_pickupsWithoutApplicationUsage;
@property(readonly, copy) NSDictionary *pickupsByBundleIdentifier; // @synthesize pickupsByBundleIdentifier=_pickupsByBundleIdentifier;
@property(readonly, copy) NSDictionary *userNotificationsByBundleIdentifier; // @synthesize userNotificationsByBundleIdentifier=_userNotificationsByBundleIdentifier;
@property(readonly, copy) NSArray *categoryUsage; // @synthesize categoryUsage=_categoryUsage;
@property(readonly) NSDateInterval *longestSession; // @synthesize longestSession=_longestSession;
@property(readonly) double screenTime; // @synthesize screenTime=_screenTime;
- (void).cxx_destruct;
@property(readonly) NSDictionary *categoryUsageBySecondaryIdentifier;
@property(readonly) NSDictionary *categoryUsageByPrimaryIdentifier;
@property(readonly) NSDictionary *webUsageByDomain;
@property(readonly) NSDictionary *applicationUsageByBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usUsageReportCommonInitWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 deviceUnlocks:(unsigned long long)arg4 screenWakes:(unsigned long long)arg5 notifications:(id)arg6 pickupsByBundleIdentifier:(id)arg7 pickupsWithoutApplicationUsage:(unsigned long long)arg8 firstPickup:(id)arg9 interval:(id)arg10 timeZone:(id)arg11 lastEventDate:(id)arg12;
- (id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 deviceUnlocks:(unsigned long long)arg4 screenWakes:(unsigned long long)arg5 notifications:(id)arg6 pickupsByBundleIdentifier:(id)arg7 pickupsWithoutApplicationUsage:(unsigned long long)arg8 firstPickup:(id)arg9 interval:(id)arg10 timeZone:(id)arg11 lastEventDate:(id)arg12;

@end

