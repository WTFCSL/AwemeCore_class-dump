//
//     Generated by private class-dump
//

@class AFDSnackBar, NSString, UIView;
@protocol AWEShareToStoryModelProtocol, AWEQuickShareSnackBarDelegate;

@interface AWEQuickShareSnackBar : UIView <UIGestureRecognizerDelegate, AWEQuickShareSnackBarCustomViewDelegate, AFDSnackBarLifeCycleDelegate> {
    UIView *_bodyView;
    AFDSnackBar *_snackBar;
    id<AWEQuickShareSnackBarDelegate> _delegate;
    id<AWEShareToStoryModelProtocol> _storyModel;
}

@property (retain, nonatomic) UIView *bodyView;
@property (retain, nonatomic) AFDSnackBar *snackBar;
@property (weak, nonatomic) id<AWEQuickShareSnackBarDelegate> delegate;
@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanContext;
- (void)showSnackBar;
- (void)snackBarDismissDueToTouchSpace;
- (void)snackBarDismissDueToTimeOut;
- (id)snackBar;
- (void)setSnackBar:(id)arg0;
- (void)snackBarEditButtonDidClick;
- (id)initWithDelegate:(id)arg0 storyModel:(id)arg1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)bodyView;
- (void)setBodyView:(id)arg0;
- (void)setStoryModel:(id)arg0;
- (id)storyModel;

@end
