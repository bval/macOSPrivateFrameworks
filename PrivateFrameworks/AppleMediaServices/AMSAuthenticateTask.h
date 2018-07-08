//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSAuthenticateOptions, NSNumber, NSString;

@interface AMSAuthenticateTask : AMSTask
{
    NSString *_password;
    NSString *_rawPassword;
    NSString *_altDSID;
    NSNumber *_DSID;
    NSString *_username;
    ACAccount *_authenticatedAccount;
    AMSAuthenticateOptions *_options;
}

@property(retain) AMSAuthenticateOptions *options; // @synthesize options=_options;
@property(retain) ACAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(retain) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (void)_updateAccountWithProvidedInformation:(id)arg1;
- (BOOL)_shouldPerformInProcessAuthKitUpdateForAccount:(id)arg1;
- (id)_performAuthenticationWithError_macOS:(id *)arg1;
- (id)_createVerifyCredentialOptionsWithCredentialSource:(unsigned long long)arg1;
- (id)_accountStoreForAuthentication;
- (id)_accountForAuthentication;
- (id)performAuthentication;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)init;

@end

