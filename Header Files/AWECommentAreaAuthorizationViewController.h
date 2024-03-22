//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIView, UIButton;

@interface AWECommentAreaAuthorizationViewController : UIViewController <UIGestureRecognizerDelegate> {
    BOOL _authorizationState;
    UIView *_containerView;
    UIImageView *_headerImageView;
    UIButton *_closeButton;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (nonatomic) BOOL authorizationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick:(id)arg0;
- (void)closeAuthorization:(id)arg0;
- (void)openAuthorization:(id)arg0;
- (void)closeViewByMethod:(id)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAuthorizationState:(BOOL)arg0;
- (void)setRightButton:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (BOOL)authorizationState;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg0;
- (void)tapGestureHandler:(id)arg0;

@end
