//
//     Generated by private class-dump
//

@interface AWEInteractionElementPopover : UIView <CAAnimationDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, AWEInteractionElementPopoverProtocol> {
    void /* unknown type, empty encoding */ parentView;
    void /* unknown type, empty encoding */ bgView;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ showAnimationKey;
    void /* unknown type, empty encoding */ maskShowAnimationKey;
    void /* unknown type, empty encoding */ hideAnimationKey;
    void /* unknown type, empty encoding */ maskHideAnimationKey;
    void /* unknown type, empty encoding */ popoverAnimationKey;
    void /* unknown type, empty encoding */ contentAnchorPoint;
    void /* unknown type, empty encoding */ getFocusBlock;
    void /* unknown type, empty encoding */ loseFocusBlock;
    void /* unknown type, empty encoding */ dismissBlock;
    void /* unknown type, empty encoding */ isDismissAnimating;
    void /* unknown type, empty encoding */ isLosingFocus;
    void /* unknown type, empty encoding */ autoHideTimer;
    void /* unknown type, empty encoding */ currentFocusIndex;
    void /* unknown type, empty encoding */ snapShotImage;
    void /* unknown type, empty encoding */ eventDidOccur;
    void /* unknown type, empty encoding */ weakViews;
    void /* unknown type, empty encoding */ alighView;
    void /* unknown type, empty encoding */ interactionContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverView;
}

- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)handleLongPressWithGes:(id)arg0;
- (void)willResignActiveNotificationWithNotice:(id)arg0;
- (void)showWithContext:(id)arg0 target:(id)arg1 alignView:(id)arg2 interactionContainer:(id)arg3 didGetFocus:(id /* block */)arg4 didLoseFocus:(id /* block */)arg5 didDismiss:(id /* block */)arg6;
- (void)remove;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;

@end
