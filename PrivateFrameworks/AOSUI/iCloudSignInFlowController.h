//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMWebKitViewControllerDelegate.h"

@class ACAccountStore, CDPStateUIController, MMWebKitViewController, NSArray, NSDictionary, NSError, NSString, NSWindow;

@interface iCloudSignInFlowController : NSObject <MMWebKitViewControllerDelegate>
{
    BOOL _isAlreadyLoggedIn;
    NSWindow *_iCloudWindow;
    NSWindow *_setupSheet;
    NSString *_password;
    NSDictionary *_authenticationResults;
    CDPStateUIController *_cdpStateUIController;
    MMWebKitViewController *_webKitViewController;
    NSString *_username;
    ACAccountStore *_accountStore;
    NSArray *_dataclassesToEnable;
    NSArray *_dataclassesToEnableAnyway;
    CDUnknownBlockType _iCloudCompletion;
    NSError *_errorToReturn;
}

@property(retain) NSError *errorToReturn; // @synthesize errorToReturn=_errorToReturn;
@property(readonly) CDUnknownBlockType iCloudCompletion; // @synthesize iCloudCompletion=_iCloudCompletion;
@property(retain, nonatomic) NSArray *dataclassesToEnableAnyway; // @synthesize dataclassesToEnableAnyway=_dataclassesToEnableAnyway;
@property(retain, nonatomic) NSArray *dataclassesToEnable; // @synthesize dataclassesToEnable=_dataclassesToEnable;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) MMWebKitViewController *webKitViewController; // @synthesize webKitViewController=_webKitViewController;
@property(retain, nonatomic) CDPStateUIController *cdpStateUIController; // @synthesize cdpStateUIController=_cdpStateUIController;
@property(nonatomic) BOOL isAlreadyLoggedIn; // @synthesize isAlreadyLoggedIn=_isAlreadyLoggedIn;
@property(retain, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain) NSWindow *setupSheet; // @synthesize setupSheet=_setupSheet;
@property(retain, nonatomic) NSWindow *iCloudWindow; // @synthesize iCloudWindow=_iCloudWindow;
- (BOOL)appleIDIsLoggedIn:(id)arg1;
- (void)deleteAccountName:(id)arg1;
- (void)enableDataClass:(id)arg1;
- (BOOL)isAccountPrimary:(id)arg1;
- (void)showAlreadySignedInSheet:(id)arg1;
- (void)showCastleSetupSheetWithOptions:(id)arg1;
- (void)signOutFailedMainThread:(id)arg1;
- (void)signOutCompletedMainThread:(id)arg1;
- (void)signInFailedMainThread:(id)arg1;
- (void)signInFailedCompletedMainThread:(id)arg1;
- (void)showSetupAfterCDPUI;
- (void)completeSignInAfterCDP:(BOOL)arg1 andError:(id)arg2;
- (void)signInCompletedMainThread:(id)arg1;
- (void)signOutFailed:(id)arg1;
- (void)signOutCompleted:(id)arg1;
- (void)signInFailed:(id)arg1;
- (void)signInCompleted:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotificationListeners;
- (void)closeWebKitViewController;
- (void)mmWebKitViewControllerDidDismiss:(id)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
- (id)authContext;
- (void)forgotPressed:(id)arg1;
- (void)_showCreateContinuationAppleIDForWindow:(id)arg1 andContinuationData:(id)arg2;
- (void)_showCreateAppleIDForWindow:(id)arg1;
- (void)loginWithAuthResults:(id)arg1;
- (void)showLoginUI;
- (void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

