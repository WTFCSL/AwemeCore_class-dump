//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface BDPInvitePanel_HG : UIView <UIGestureRecognizerDelegate> {
    id /* block */ _dismissCallback;
    UIView *_dimmingView;
}

@property (weak, nonatomic) UIView *dimmingView;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPanel:(id)arg0;
- (id)createDimmingView;
- (void)layoutBelowContainer:(id)arg0;
- (void)layoutOverContainer:(id)arg0;
- (id /* block */)dismissCallback;
- (void)layoutHWInContainer:(id)arg0;
- (void)onDimmingViewTouched:(id)arg0;
- (void)showInContainer:(id)arg0 completion:(id /* block */)arg1;
- (void)setDismissCallback:(id /* block */)arg0;
- (void)dismiss;
- (void)setDimmingView:(id)arg0;
- (void).cxx_destruct;
- (id)dimmingView;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)initWithPanel:(id)arg0;

@end