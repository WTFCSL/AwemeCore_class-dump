//
//     Generated by private class-dump
//

@protocol BDPFavoritesPluginDelegate <BDPBasePluginDelegate>

@optional

- (id)bdp_hostGameGuideViewWithUniqueId:(id)arg0 extraInfo:(id)arg1;
- (BOOL)bdp_showFavoritesButtonForType:(long long)arg0;
- (id)bdp_getTipStringForTipType:(long long)arg0 type:(long long)arg1;
- (BOOL)bdp_removeFromFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (BOOL)bdp_addToFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (BOOL)bdp_firstAddToFavoritesForType:(long long)arg0 extraInfo:(id)arg1;

@end
