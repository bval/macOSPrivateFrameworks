//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMSDefaults : NSObject
{
}

+ (id)_valueForKey:(id)arg1;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString *)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 domain:(struct __CFString *)arg3;
+ (BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
+ (void)setStorefrontSuffixes:(id)arg1;
+ (void)setShowSandboxAccountUI:(BOOL)arg1;
+ (void)setIncludeFullResponseInHARLogging:(BOOL)arg1;
+ (void)setIncludeFullRequestInHARLogging:(BOOL)arg1;
+ (void)setIgnoreServerTrustEvaluation:(BOOL)arg1;
+ (void)setMigratedToNewCookieStorage:(BOOL)arg1;
+ (void)setMetricsTimingWindowStartTime:(id)arg1;
+ (void)setMetricsCanaryIdentifier:(id)arg1;
+ (void)setForceLoadUrlMetrics:(long long)arg1;
+ (void)setReversePushEnabled:(long long)arg1;
+ (void)setDisableHARLogging:(BOOL)arg1;
+ (void)setDidRetrieveDeviceOffers:(BOOL)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setAlwaysSendCacheBuster:(BOOL)arg1;
+ (void)setAlwaysSendGUID:(BOOL)arg1;
+ (BOOL)ss_ignoreServerTrustEvaluation;
+ (BOOL)useNewCookieStorage;
+ (id)storefrontSuffixes;
+ (id)metricsTimingWindowStartTime;
+ (BOOL)includeFullResponseInHARLogging;
+ (BOOL)includeFullRequestInHARLogging;
+ (BOOL)showSandboxAccountUI;
+ (BOOL)ignoreServerTrustEvaluation;
+ (long long)forceLoadUrlMetrics;
+ (BOOL)migratedToNewCookieStorage;
+ (id)metricsCanaryIdentifier;
+ (long long)reversePushEnabled;
+ (BOOL)disableHARLogging;
+ (BOOL)didRetrieveDeviceOffers;
+ (id)deviceOfferEligibility;
+ (id)bagURLCookies;
+ (BOOL)alwaysSendCacheBuster;
+ (BOOL)alwaysSendGUID;

@end

