//
//     Generated by private class-dump
//

@interface BDPathTemporaryBundle : BDPathBaseBundle

- (id)pathWithSubPath:(id)arg0 autoCreated:(BOOL)arg1;
- (BOOL)registerCleanRuleForSubPath:(id)arg0 when:(unsigned long long)arg1;
- (BOOL)registerCleanRuleForAnyUidForSubDirPath:(id)arg0 when:(unsigned long long)arg1;
- (id)initWithRootName:(id)arg0;
- (id)pathWithAutoCreated:(BOOL)arg0;
- (id)pathWithSubPath:(id)arg0;
- (id)pathWithUid:(id)arg0 autoCreated:(BOOL)arg1;
- (id)pathWithUid:(id)arg0 subPath:(id)arg1 autoCreated:(BOOL)arg2;
- (id)pathWithUid:(id)arg0;
- (id)pathWithUid:(id)arg0 subPath:(id)arg1;
- (BOOL)registerCleanRuleForUid:(id)arg0 subPath:(id)arg1 when:(unsigned long long)arg2;
- (id)path;

@end
