//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESGurdInternalPackagesManager : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *metaInfosDictionary;

+ (long long)dataAccessPolicyForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)didAccessInternalPackageWithAccessKey:(id)arg0 channel:(id)arg1 path:(id)arg2 dataAccessPolicy:(long long)arg3;
+ (void)clearInternalPackagesIfNeeded;
+ (void)loadLocalMetaInfosIfNeeded;
+ (id)metaInfosDictionary;
+ (void)setMetaInfosDictionary:(id)arg0;
+ (void)saveInternalPackageMetaInfosToLocal;
+ (void)clearInternalCacheForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)loadLocalMetaInfos;
+ (id)allInternalPackageMetaInfos;
+ (BOOL)shouldClearInternalPackageWithMetaInfo:(id)arg0;
+ (unsigned long long)internalPackageIdForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)updateDataAccessPolicy:(long long)arg0 accessKey:(id)arg1 channel:(id)arg2;
+ (void)saveInternalPackageMetaInfo:(id)arg0;
+ (void)clearInternalPackageForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)setup;

@end
