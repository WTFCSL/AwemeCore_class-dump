//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, AWEVideoPublishViewModel, UITextView, UIButton, UIImageView, YYLabel, UIPanGestureRecognizer, UILabel;

@interface AWEVideoNewPublishCoCreatorAlertView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> {
    AWEVideoPublishViewModel *_publishViewModel;
    id /* block */ _commonDismissBlock;
    UIView *_alertContentView;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UITextView *_contentTextView;
    YYLabel *_actionLabel;
    UIButton *_actionButton;
    UIButton *_closeButton;
    UITapGestureRecognizer *_tapBlankAreaToDismissGesture;
    UIPanGestureRecognizer *_swipeToDismissGesture;
    double _alertContentHeight;
    double _currentSwipeOffset;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIView *alertContentView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *contentTextView;
@property (retain, nonatomic) YYLabel *actionLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapBlankAreaToDismissGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *swipeToDismissGesture;
@property (nonatomic) double alertContentHeight;
@property (nonatomic) double currentSwipeOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ commonDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (void)setContentTextView:(id)arg0;
- (id)contentTextView;
- (void)setCommonDismissBlock:(id /* block */)arg0;
- (void)dismissWithCancelType:(id)arg0;
- (id)tapBlankAreaToDismissGesture;
- (double)currentSwipeOffset;
- (void)setCurrentSwipeOffset:(double)arg0;
- (void)swipeToDismiss:(id)arg0;
- (void)tapBlankAreaToDismiss;
- (id)swipeToDismissGesture;
- (void)setTapBlankAreaToDismissGesture:(id)arg0;
- (void)setSwipeToDismissGesture:(id)arg0;
- (void)rotated:(id)arg0;
- (id)alertContentView;
- (id)p_maskLayerWithHeight:(double)arg0;
- (double)alertContentHeight;
- (id /* block */)commonDismissBlock;
- (void)setAlertContentHeight:(double)arg0;
- (void)tapActionButton;
- (void)tapCloseButton;
- (void)setAlertContentView:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (void)trackConfirmEvent:(id)arg0;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)show;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)actionLabel;
- (void)setActionLabel:(id)arg0;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg0;

@end
