//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SafariSandboxBrokerProtocol.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SafariSandboxBrokerConnection : NSObject <SafariSandboxBrokerProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)openWebClipWidgetWithURL:(id)arg1 positionWidgetAtPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)migrateResourcesToSandbox:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asynchronouslyMigrateResourcesToSandbox:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeWebArchiveWithoutQuarantineFlag:(id)arg1 atURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)synchronouslyIssueExtensionForDirectoryContainingDownloadDestinationAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)issueDevelopModeExtensionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relatedExtensionsForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_establishSynchronousConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_connectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ensureConnected:(CDUnknownBlockType)arg1;
- (id)init;

@end

