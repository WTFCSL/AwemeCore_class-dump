//
//     Generated by private class-dump
//

@interface HGAsyncVersionManager : HGBaseVersionManager

+ (void)downloadLibWithURL:(id)arg0 updateVersion:(id)arg1 baseVersion:(id)arg2 isForceUpdate:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)setupBundleVersionIfNeed;
+ (void)copyBundleVersionToDestination:(id /* block */)arg0;
+ (void)excuteBlkForReal;
+ (void)updateLibIfNeedWithCompletion:(id /* block */)arg0;
+ (void)downloadLibWithURL:(id)arg0 updateVersion:(id)arg1 baseVersion:(id)arg2 completion:(id /* block */)arg3;
+ (void)excuteAfterUnzip:(id /* block */)arg0;
+ (void)initialize;

@end
