//
//     Generated by private class-dump
//

@class NSString, MMKV;

@interface AWEPadFullPageAdapter : NSObject <AWEPadFullPageAdapter> {
    MMKV *_mmkv;
}

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)performFullPageUIWithComplition:(id /* block */)arg0;
- (void)updateLayoutForRotate;
- (void)updateAvatarView;
- (void)updateHeaderVCLayout;
- (void)performViewDidlayoutSubviews;
- (struct CGSize { double x0; double x1; })commentCellSize;
- (void)dismissCommeneLongPressAlert;
- (double)marginWithView:(id)arg0;
- (id)updateFooterLayoutWithAttributes:(id)arg0 view:(id)arg1;
- (BOOL)performAnimateWithComplition:(id /* block */)arg0;
- (BOOL)shouldShowTopAvatarViewAndInputView;
- (void)addGestureForContaienr;
- (void)shouldReponseToPinchWithComplition:(id /* block */)arg0;
- (void)performShowBullbleInHangOutChannel:(id /* block */)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullPageSliderFrameWithView:(id)arg0;
- (double)commentContainerWidthWithView:(id)arg0;
- (BOOL)padPinchZoomAnimationWithTargetView:(id)arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setHasShowBubbleKeyToTrue;
- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void).cxx_destruct;
- (id)weakTarget;

@end