//
//     Generated by private class-dump
//

@interface BDPathLibraryBundle : BDPathBaseBundle

- (id)pathWithSubPath:(id)arg0 autoCreated:(BOOL)arg1;
- (BOOL)registerCleanRuleForSubPath:(id)arg0 when:(unsigned long long)arg1;
- (BOOL)registerCleanRuleForUid:(id)arg0 subDirPath:(id)arg1 when:(unsigned long long)arg2;
- (BOOL)registerCleanRuleForAnyUidForSubDirPath:(id)arg0 when:(unsigned long long)arg1;
- (id)initWithRootName:(id)arg0;
- (long long)anyUidFilesSizeWithSubDirPath:(id)arg0;
- (long long)cleanupAnyUidFilesWithSubDirPath:(id)arg0 excludeUids:(id)arg1;
- (long long)cleanupAnyUidFileWithSubFilePath:(id)arg0 excludeUids:(id)arg1;
- (long long)cleanupUid:(id)arg0 subDirPath:(id)arg1 retureSize:(BOOL)arg2;
- (id)pathWithAutoCreated:(BOOL)arg0;
- (id)pathWithSubPath:(id)arg0;
- (id)pathWithUid:(id)arg0 autoCreated:(BOOL)arg1;
- (id)pathWithUid:(id)arg0 subPath:(id)arg1 autoCreated:(BOOL)arg2;
- (id)pathWithUid:(id)arg0;
- (id)pathWithUid:(id)arg0 subPath:(id)arg1;
- (id)path;

@end
