//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGPluginFavoritesCustomImpl : NSObject <HGFavoritesPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getSettings;
- (id)hg_hostGuideViewWithUniqueId:(id)arg0 extraInfo:(id)arg1;
- (BOOL)hg_showFavoritesButtonForType:(long long)arg0;
- (BOOL)hg_removeFromFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (BOOL)hg_addToFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (void)refreshIronManListViewController;
- (void)showCancelToastWithUniqueId:(id)arg0;
- (id)titleString:(long long)arg0;
- (id)descString:(long long)arg0;
- (id)imageURL:(long long)arg0;
- (void)cancelFavoriteWithUniqueId:(id)arg0;
- (void)event:(id)arg0 uniqueID:(id)arg1 param:(id)arg2;
- (id)init;

@end
