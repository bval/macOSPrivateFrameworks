//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class HMMediaSession, NSString;

@interface _HMMediaProfile : _HMAccessoryProfile
{
    HMMediaSession *_mediaSession;
    NSString *_routeUID;
    id <_HMMediaProfileDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
@property __weak id <_HMMediaProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRouteUID:(id)arg1;
@property(readonly) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)arg1;
@property(retain) HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;

@end

