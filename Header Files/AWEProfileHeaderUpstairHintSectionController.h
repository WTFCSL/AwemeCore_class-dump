//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEProfileHeaderUpstairHintActionDelegate;

@interface AWEProfileHeaderUpstairHintSectionController : AWEBaseListSectionController <AWEProfileHeaderUpstairHintCellDelegate> {
    id<AWEProfileHeaderUpstairHintActionDelegate> _delegate;
}

@property (weak, nonatomic) id<AWEProfileHeaderUpstairHintActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerDidDisappear:(BOOL)arg0;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (void)sectionWillDisplayCell:(id)arg0;
- (void)updateNavBtnAlpha:(double)arg0;
- (BOOL)isCurrentViewControllerSticky;
- (void)sectionDidEndDisplayingCell:(id)arg0;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
