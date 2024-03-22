//
//     Generated by private class-dump
//

@class UILongPressGestureRecognizer, UIViewController, DUXBadge, UIView, UITapGestureRecognizer;
@protocol AWETabBarButtonDelegate;

@interface AWETabBarButton : UIButton {
    DUXBadge *_badge;
    UIView *_customBadge;
    long long _type;
    long long _index;
    long long _validIndex;
    long long _status;
    UIViewController *_viewController;
    UITapGestureRecognizer *_singleTapGes;
    UITapGestureRecognizer *_doubleTapGes;
    UILongPressGestureRecognizer *_longPressGes;
    id<AWETabBarButtonDelegate> _delegate;
}

@property (retain, nonatomic) UITapGestureRecognizer *singleTapGes;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (weak, nonatomic) id<AWETabBarButtonDelegate> delegate;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) DUXBadge *badge;
@property (retain, nonatomic) UIView *customBadge;
@property (nonatomic) long long type;
@property (nonatomic) long long index;
@property (nonatomic) long long validIndex;
@property (nonatomic) long long status;

+ (id)buttonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewController:(id)arg1 type:(long long)arg2;
+ (id)business_buttonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewController:(id)arg1 type:(long long)arg2;
+ (void)_aweLazyRegisterLoad_AWEBusiness;

- (id)singleTapGes;
- (void)onTouchUpInside;
- (BOOL)canHandleDoubleClick;
- (id)doubleTapGes;
- (BOOL)canHandleLongPress;
- (id)longPressGes;
- (void)handleDoubleClick;
- (void)handleLongPress;
- (void)doubleTapButton:(id)arg0;
- (void)longPressButton:(id)arg0;
- (void)addDoubleClickGes;
- (void)addLongPressGes;
- (void)removeDoubleClickGes;
- (void)removeLongPressGes;
- (id)customBadge;
- (void)setCustomBadge:(id)arg0;
- (long long)validIndex;
- (void)setValidIndex:(long long)arg0;
- (void)setSingleTapGes:(id)arg0;
- (void)setDoubleTapGes:(id)arg0;
- (void)setLongPressGes:(id)arg0;
- (void)hideUnreadViewOnTabBarButton;
- (id)showUnreadViewOnTabBarButton;
- (id)showUnreadViewOnTabBarButtonWithCount:(long long)arg0;
- (id)showUnreadViewOnTabBarButtonWithText:(id)arg0;
- (id)showCustomUnreadView:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (BOOL)hasUnreadViewOnTabBarButton;
- (void)updateUnreadViewColor:(id)arg0;
- (id)showBadgeWithStyle:(unsigned long long)arg0 count:(long long)arg1 text:(id)arg2;
- (void)hideBadge;
- (void)p_hideUnreadViewOnTabBarButton;
- (id)dotBadge;
- (void)setDotBadge:(id)arg0;
- (void)setNumberBadge:(id)arg0;
- (struct CGPoint { double x0; double x1; })adjustedUnreadViewPositionWithOriginX:(double)arg0 originY:(double)arg1;
- (void)setIndex:(long long)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setBadge:(id)arg0;
- (long long)status;
- (id)badge;
- (long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(long long)arg0;
- (id)delegate;
- (long long)index;
- (void)setStatus:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (id)numberBadge;
- (void)setTextBadge:(id)arg0;
- (id)textBadge;

@end
