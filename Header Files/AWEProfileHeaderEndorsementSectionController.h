//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileHeaderEndorsementSectionController : AWEBaseListSectionController <AWEProfileHeaderEndorsementCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerDidDisappear:(BOOL)arg0;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (void)trackEventWithTag:(id)arg0 infoModel:(id)arg1;
- (void)trackRelationEventWithTag:(id)arg0 infoModel:(id)arg1;
- (BOOL)isAssiUserWithIds:(id)arg0;
- (BOOL)isProUserWithIds:(id)arg0;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
