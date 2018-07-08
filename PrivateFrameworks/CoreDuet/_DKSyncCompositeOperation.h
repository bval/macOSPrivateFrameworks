//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation
{
    _DKSyncCompositeOperation *_parent;
    BOOL _isReadyToStart;
    NSHashTable *_children;
    NSMutableArray *_errors;
}

@property(readonly) NSMutableArray *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (void)cancelOperation;
- (void)endOperation;
- (void)_shutdownOperation;
- (void)childOperation:(id)arg1 didEndWithErrors:(id)arg2;
- (void)childOperationWasAdded:(id)arg1;
- (BOOL)isReady;
- (void)setReadyToStart:(BOOL)arg1;
- (BOOL)isAsynchronous;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

