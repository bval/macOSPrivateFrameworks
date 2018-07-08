//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class CPLRecordChange, CPLScopeFilter, CPLScopedIdentifier, NSString;

@protocol CPLEngineCloudCacheImplementation <CPLEngineStorageImplementation>
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id <NSFastEnumeration>)allRecordsIsFinal:(BOOL)arg1;
- (id <NSFastEnumeration>)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
- (BOOL)discardStagedChangesWithScopeFilter:(CPLScopeFilter *)arg1 error:(id *)arg2;
- (BOOL)discardStagedChangesForScopeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (BOOL)commitStagedChangesForScopeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (BOOL)confirmAllRecordsWithError:(id *)arg1;
- (BOOL)remapAllRecordsWithPreviousScopedIdentifier:(CPLScopedIdentifier *)arg1 newScopedIdentifier:(CPLScopedIdentifier *)arg2 error:(id *)arg3;
- (BOOL)hasRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (id <NSFastEnumeration>)recordsWithRelatedScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(BOOL)arg2;
- (CPLRecordChange *)recordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isConfirmed:(char *)arg2;
- (CPLRecordChange *)recordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(BOOL)arg2;
- (BOOL)deleteRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)updateRecord:(CPLRecordChange *)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)addRecord:(CPLRecordChange *)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
@end

