//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEProfileHeaderInteractionNoticeAreaSectionController : AWEBaseListSectionController <AWEProfileInteractionNoticeMoveGuideAlertPotocol, AWEProfileHeaderInteractionNoticeAreaCollectionViewCellDelegate> {
    BOOL _shouldBlockGuide;
    BOOL _hasAlertPrepared;
    NSMutableArray *_binds;
    id /* block */ _prepareCompletion;
}

@property (retain, nonatomic) NSMutableArray *binds;
@property (copy, nonatomic) id /* block */ prepareCompletion;
@property (nonatomic) BOOL shouldBlockGuide;
@property (nonatomic) BOOL hasAlertPrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerWillDisappear:(BOOL)arg0 isBeingDismissed:(BOOL)arg1 isMovingFromParentViewController:(BOOL)arg2;
- (void)viewControllerDidDisappear:(BOOL)arg0;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (id)binds;
- (void)setBinds:(id)arg0;
- (void)profilePageBeiginVerticallyScroll;
- (void)profilePageDidVerticallyScroll;
- (void)showInterationNoticeMoveGuide;
- (BOOL)hasAlertPrepared;
- (void)setPrepareCompletion:(id /* block */)arg0;
- (BOOL)shouldBlockGuide;
- (void)setShouldBlockGuide:(BOOL)arg0;
- (id /* block */)prepareCompletion;
- (void)setHasAlertPrepared:(BOOL)arg0;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)arg0;

@end
