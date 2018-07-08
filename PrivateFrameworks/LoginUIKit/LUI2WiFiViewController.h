//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class CWInterface, CWWiFiClient, NSImageView, NSObject<OS_dispatch_queue>;

@interface LUI2WiFiViewController : LUI2ViewController
{
    BOOL _paused;
    NSImageView *_wifiImageView;
    CWInterface *_interface;
    CWWiFiClient *_client;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property BOOL paused; // @synthesize paused=_paused;
@property(retain) CWWiFiClient *client; // @synthesize client=_client;
@property(retain) CWInterface *interface; // @synthesize interface=_interface;
@property(retain) NSImageView *wifiImageView; // @synthesize wifiImageView=_wifiImageView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)resume;
- (void)pause;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)interfaceRemovedWithName:(id)arg1;
- (void)interfaceAddedWithName:(id)arg1;
- (void)_updateStatus;
- (void)_handleNotification:(id)arg1;

@end

