//
//     Generated by private class-dump
//

@protocol HGFavoritesPluginDelegate <HGBasePluginDelegate>

@optional

- (id)hg_hostGuideViewWithUniqueId:(id)arg0 extraInfo:(id)arg1;
- (BOOL)hg_showFavoritesButtonForType:(long long)arg0;
- (BOOL)hg_removeFromFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (BOOL)hg_addToFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (id)hg_getTipStringForTipType:(long long)arg0 type:(long long)arg1;

@end
