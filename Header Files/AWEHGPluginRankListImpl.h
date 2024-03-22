//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGPluginRankListImpl : NSObject <HGAwemeRankListPluginDelegate> {
    BOOL _hasShown;
}

@property (nonatomic) BOOL hasShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)hg_openRankListForUniqueID:(id)arg0 withParam:(id)arg1 completion:(id /* block */)arg2;
- (void)hg_getRankDataForUniqueID:(id)arg0 withParam:(id)arg1 completion:(id /* block */)arg2;
- (void)hg_setRankDataForUniqueID:(id)arg0 withParam:(id)arg1 completion:(id /* block */)arg2;
- (id)bussinessErrorWithError:(id)arg0 data:(id)arg1;
- (void)showRankListViewWithModelIfNeed:(id)arg0 uniqueID:(id)arg1 error:(id)arg2;
- (void)setHasShown:(BOOL)arg0;
- (BOOL)hasShown;

@end
