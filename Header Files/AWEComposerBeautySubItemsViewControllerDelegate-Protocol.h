//
//     Generated by private class-dump
//

@protocol AWEComposerBeautySubItemsViewControllerDelegate <NSObject>

- (void)composerSubItemsViewController:(id)arg0 didSelectEffect:(id)arg1 canceledEffect:(id)arg2 fromDownload:(BOOL)arg3;
- (void)composerSubItemsViewController:(id)arg0 didSelectEffectSet:(id)arg1;
- (void)composerSubItemsViewController:(id)arg0 didSelectEffect:(id)arg1 forParentItem:(id)arg2;
- (void)composerSubItemsViewControllerDidFinishDownloadingAllEffects;

@optional

- (BOOL)composerSubItemsViewController:(id)arg0 handleClickDisableEffect:(id)arg1;
- (void)composerSubItemsViewController:(id)arg0 didTapOnToggleView:(BOOL)arg1 isManually:(BOOL)arg2;
- (void)composerSubItemsViewController:(id)arg0 didTapResetCategory:(id)arg1;
- (BOOL)composerSubItemsViewController:(id)arg0 shouldResetButtonEnabledWithCategory:(id)arg1;
- (void)composerSubItemsViewController:(id)arg0 didSelectEffect:(id)arg1 lastEffect:(id)arg2;

@end
