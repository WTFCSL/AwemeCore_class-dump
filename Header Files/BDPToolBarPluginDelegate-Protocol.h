//
//     Generated by private class-dump
//

@protocol BDPToolBarPluginDelegate <BDPBasePluginDelegate>

@optional

- (void)bdp_gameCustomMorePanel:(id)arg0 uniqueID:(id)arg1 items:(id)arg2;
- (BOOL)bdp_shouldEnableFullCustom;
- (BOOL)bdp_shouldEnableFullCustomWithUniqueID:(id)arg0;
- (BOOL)bdp_shouldShowNormalPanel:(id)arg0;
- (id)customMorePanelModelWithUniqueID:(id)arg0;
- (void)bdp_customMorePanel:(id)arg0 uniqueID:(id)arg1 items:(id)arg2;
- (void)bdp_customMorePanel:(id)arg0 uniqueID:(id)arg1 items:(id)arg2 extraInfo:(id)arg3;

@end
