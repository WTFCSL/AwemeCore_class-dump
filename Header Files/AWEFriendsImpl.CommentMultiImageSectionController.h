//
//     Generated by private class-dump
//

@interface AWEFriendsImpl.CommentMultiImageSectionController : _TtGC14AWEFriendsImpl32RichContentBaseSectionControllerCS_33CommentMultiImageSectionViewModel_ {
    void /* unknown type, empty encoding */ lastUpdatedIndex;
    void /* unknown type, empty encoding */ lastTrackedInnerIndex;
}

+ (Class)sectionViewModelClass;

- (void)sectionControllerWillDisplay:(id)arg0;
- (void)sectionControllerDidEndDisplaying:(id)arg0;
- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didBindSectionViewModel;
- (void)sectionDidEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerWillDisappear:(BOOL)arg0 isBeingDismissed:(BOOL)arg1 isMovingFromParentViewController:(BOOL)arg2;
- (void)viewControllerDidDisappear:(BOOL)arg0;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (void)sectionWillDisplaySupplementaryView:(id)arg0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)arg0;
- (id)init;
- (Class)cellClass;

@end