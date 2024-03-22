//
//     Generated by private class-dump
//

@protocol IESECLiveShortTouchInterface <NSObject>

- (BOOL)hasCoupon;
- (BOOL)entranceScaleAnimationDisabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameOfAnimationView;
- (void)insertItem:(id)arg0 completion:(id /* block */)arg1;
- (id)createPluginView;
- (id)createShortItem;
- (void)removeCoupon;
- (void)startEntranceAnimation:(id)arg0 appearAction:(id /* block */)arg1;
- (BOOL)enableEntranceAnimation;
- (long long)requestToShowTempStateWithItem:(id)arg0 strategy:(long long)arg1;
- (void)adjustToTempStateWidthWithItem:(id)arg0;
- (BOOL)containsType:(unsigned long long)arg0;
- (void)removeType:(unsigned long long)arg0;

@end