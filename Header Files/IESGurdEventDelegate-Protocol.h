//
//     Generated by private class-dump
//

@protocol IESGurdEventDelegate <NSObject>

@optional

- (void)gurdWillDownloadPackageForAccessKey:(id)arg0 channel:(id)arg1 isPatch:(BOOL)arg2;
- (void)gurdWillDownloadPackageForAccessKey:(id)arg0 channel:(id)arg1 isPatch:(BOOL)arg2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)arg0 channel:(id)arg1 packageInfo:(id)arg2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)arg0 channel:(id)arg1 packageInfo:(id)arg2;
- (void)gurdDidFinishUnzippingPackageForAccessKey:(id)arg0 channel:(id)arg1 packageInfo:(id)arg2;
- (void)gurdDidFinishUnzippingPackageForAccessKey:(id)arg0 channel:(id)arg1 packageInfo:(id)arg2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg0 channel:(id)arg1 succeed:(BOOL)arg2 error:(id)arg3;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg0 channel:(id)arg1 succeed:(BOOL)arg2 error:(id)arg3;
- (void)gurdDidRequestConfigForAccessKey:(id)arg0 configsDictionary:(id)arg1;
- (void)gurdDidRequestConfigForAccessKey:(id)arg0 configsDictionary:(id)arg1;
- (void)gurdDidEnqueueDownloadTaskForModel:(id)arg0;
- (void)gurdDidEnqueueDownloadTaskForModel:(id)arg0;
- (void)gurdDidCleanCachePackageForAccessKey:(id)arg0 channel:(id)arg1;
- (void)gurdDidCleanCachePackageForAccessKey:(id)arg0 channel:(id)arg1;
- (void)gurdDidAccessInternalPackageWithAccessKey:(id)arg0 channel:(id)arg1 path:(id)arg2 dataAccessPolicy:(long long)arg3;
- (void)gurdDidAccessInternalPackageWithAccessKey:(id)arg0 channel:(id)arg1 path:(id)arg2 dataAccessPolicy:(long long)arg3;
- (void)gurdDidAccessCachePackageWithAccessKey:(id)arg0 channel:(id)arg1 path:(id)arg2;
- (void)gurdDidAccessCachePackageWithAccessKey:(id)arg0 channel:(id)arg1 path:(id)arg2;
- (void)gurdDidSyncResourceWithAccessKey:(id)arg0 succeed:(BOOL)arg1 statusDict:(id)arg2;
- (void)gurdDidSyncResourceWithAccessKey:(id)arg0 succeed:(BOOL)arg1 statusDict:(id)arg2;

@end