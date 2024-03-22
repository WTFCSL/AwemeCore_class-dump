//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface BDPathBaseBundle : NSObject <BDPathBaseBundleProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex_lock;
    NSString *_bundleRootPath;
    NSMutableDictionary *_normalPathMap;
    NSMutableDictionary *_anyUserPathMap;
}

@property (retain, nonatomic) NSMutableDictionary *normalPathMap;
@property (retain, nonatomic) NSMutableDictionary *anyUserPathMap;
@property (copy, nonatomic) NSString *bundleRootPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_addSubPath:(id)arg0 opportunity:(unsigned long long)arg1 isAnyUser:(BOOL)arg2;
- (id)_registerPathsForOpportunity:(unsigned long long)arg0 isAnyUser:(BOOL)arg1;
- (id)opportunityKey:(unsigned long long)arg0;
- (id)bundleRootPath;
- (id)normalPathMap;
- (id)anyUserPathMap;
- (void)_cleanupDeletableFiles;
- (long long)_cleanupForOpportunity:(unsigned long long)arg0 needSize:(BOOL)arg1;
- (long long)_deleteAllFileForDirPath:(id)arg0 needSize:(BOOL)arg1;
- (BOOL)registerCleanRuleForSubPath:(id)arg0 when:(unsigned long long)arg1;
- (BOOL)registerCleanRuleForUid:(id)arg0 subDirPath:(id)arg1 when:(unsigned long long)arg2;
- (BOOL)registerCleanRuleForAnyUidForSubDirPath:(id)arg0 when:(unsigned long long)arg1;
- (id)initWithRootName:(id)arg0;
- (long long)totalFilesSize;
- (long long)anyUidFilesSizeWithSubDirPath:(id)arg0;
- (long long)deletableFilesSize;
- (void)cleanupDeletableFiles;
- (long long)cleanupAnyUidFilesWithSubDirPath:(id)arg0 excludeUids:(id)arg1;
- (long long)cleanupAnyUidFileWithSubFilePath:(id)arg0 excludeUids:(id)arg1;
- (long long)cleanupUid:(id)arg0 subDirPath:(id)arg1 retureSize:(BOOL)arg2;
- (long long)triggerCleanEventForOpportunity:(unsigned long long)arg0 needSize:(BOOL)arg1;
- (void)setBundleRootPath:(id)arg0;
- (void)setNormalPathMap:(id)arg0;
- (void)setAnyUserPathMap:(id)arg0;
- (void).cxx_destruct;

@end
