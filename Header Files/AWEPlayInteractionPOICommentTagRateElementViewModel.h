//
//     Generated by private class-dump
//

@class NSString, NSDictionary, DUXActionSheet, UIViewController;

@interface AWEPlayInteractionPOICommentTagRateElementViewModel : AWEPlayInteractionBaseElementViewModel <DUXActionSheetDelegate> {
    BOOL _hasAddedObserver;
    UIViewController *_viewController;
    id /* block */ _didTapUnfoldButton;
    id /* block */ _deleteRateSuccess;
    NSDictionary *_deleteParams;
    DUXActionSheet *_actionSheet;
}

@property (copy, nonatomic) NSDictionary *deleteParams;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (nonatomic) BOOL hasAddedObserver;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ didTapUnfoldButton;
@property (copy, nonatomic) id /* block */ deleteRateSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (id)lynxInitialData;
- (void)handleLynxBroadcastNotification:(id)arg0;
- (BOOL)canShowElement;
- (void)setDidTapUnfoldButton:(id /* block */)arg0;
- (void)setDeleteRateSuccess:(id /* block */)arg0;
- (void)setDeleteParams:(id)arg0;
- (BOOL)hasAddedObserver;
- (void)setHasAddedObserver:(BOOL)arg0;
- (id)deleteParams;
- (id /* block */)deleteRateSuccess;
- (id /* block */)didTapUnfoldButton;
- (void)p_actionSheet;
- (void)p_deleteRate;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)dealloc;
- (void)reset;
- (void)addObserver;
- (void)setActionSheet:(id)arg0;
- (id)actionSheet;

@end