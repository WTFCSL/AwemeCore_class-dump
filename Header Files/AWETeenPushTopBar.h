//
//     Generated by private class-dump
//

@class UIControl, NSObject, UIImageView, UIView, UILabel, UIPanGestureRecognizer;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWETeenPushTopBar : UIView {
    BOOL _isPaned;
    BOOL _isAnimationDismissing;
    UIImageView *_coverImageView;
    id /* block */ _dismissBlock;
    id /* block */ _clickActionBlock;
    UIControl *_contentView;
    UIView *_iconBGView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView *_bottomBar;
    UIPanGestureRecognizer *_swipeToDismissGesture;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _totalTimeInterval;
}

@property (retain, nonatomic) UIControl *contentView;
@property (retain, nonatomic) UIView *iconBGView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIPanGestureRecognizer *swipeToDismissGesture;
@property (nonatomic) BOOL isPaned;
@property (nonatomic) BOOL isAnimationDismissing;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double totalTimeInterval;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)mainAppWindow;
- (void)swipeToDismiss:(id)arg0;
- (id)swipeToDismissGesture;
- (void)setSwipeToDismissGesture:(id)arg0;
- (void)p_setupSubviews;
- (void)setClickActionBlock:(id /* block */)arg0;
- (id /* block */)clickActionBlock;
- (id)iconBGView;
- (void)setIconBGView:(id)arg0;
- (void)p_setupTimer;
- (double)totalTimeInterval;
- (void)setTotalTimeInterval:(double)arg0;
- (BOOL)isPaned;
- (BOOL)isAnimationDismissing;
- (void)setIsAnimationDismissing:(BOOL)arg0;
- (void)setIsPaned:(BOOL)arg0;
- (void)clickContentView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)setBottomBar:(id)arg0;
- (void)show;
- (id)titleLabel;
- (void)setDispatchQueue:(id)arg0;
- (void)setDispatchTimer:(id)arg0;
- (id)contentView;
- (id)initWithTitle:(id)arg0;
- (id)dispatchQueue;
- (id)dispatchTimer;
- (id)bottomBar;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setContentView:(id)arg0;
- (void)showInView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
