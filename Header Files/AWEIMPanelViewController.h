//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, NSString, NSArray, AWEIMAccessibilityMaskView, UIView, UIButton;

@interface AWEIMPanelViewController : UIViewController <AWEIMInAppPushProtocol> {
    BOOL _canShowInnerPush;
    BOOL _canTapMaskDismiss;
    BOOL _isDismissing;
    unsigned long long _style;
    NSArray *_viewModelArray;
    id /* block */ _didTapMaskToDismissBlock;
    id /* block */ _didTapCloseToDismissBlock;
    id /* block */ _didDragToDismissBlock;
    id /* block */ _viewDidAppearBlock;
    AWEIMAccessibilityMaskView *_tapDismissView;
    UIView *_containerView;
    UIButton *_closeButton;
    UIPanGestureRecognizer *_panGes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMAccessibilityMaskView *tapDismissView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL canShowInnerPush;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL canTapMaskDismiss;
@property (copy, nonatomic) NSArray *viewModelArray;
@property (copy, nonatomic) id /* block */ didTapMaskToDismissBlock;
@property (copy, nonatomic) id /* block */ didTapCloseToDismissBlock;
@property (copy, nonatomic) id /* block */ didDragToDismissBlock;
@property (copy, nonatomic) id /* block */ viewDidAppearBlock;

- (BOOL)canShowInnerPush;
- (void)setCanShowInnerPush:(BOOL)arg0;
- (id)panGes;
- (void)setPanGes:(id)arg0;
- (void)showPanel;
- (void)p_setupUI;
- (id)viewModelArray;
- (void)setViewModelArray:(id)arg0;
- (id)tapDismissView;
- (id /* block */)didTapMaskToDismissBlock;
- (void)dismissPanelAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id /* block */)didTapCloseToDismissBlock;
- (id /* block */)didDragToDismissBlock;
- (void)tappedBlankMask;
- (void)onCloseTapped;
- (void)containerPanned:(id)arg0;
- (BOOL)canTapMaskDismiss;
- (void)setCanTapMaskDismiss:(BOOL)arg0;
- (void)setDidTapMaskToDismissBlock:(id /* block */)arg0;
- (void)setDidTapCloseToDismissBlock:(id /* block */)arg0;
- (void)setDidDragToDismissBlock:(id /* block */)arg0;
- (void)setTapDismissView:(id)arg0;
- (unsigned long long)style;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (BOOL)isDismissing;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)viewDidLoad;
- (void)setStyle:(unsigned long long)arg0;
- (void)setIsDismissing:(BOOL)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id /* block */)viewDidAppearBlock;
- (void)setViewDidAppearBlock:(id /* block */)arg0;

@end
