//
//     Generated by private class-dump
//

@class UIButton, HTSEventContext, UIImageView, NSString, UIView, UILabel, IESLiveNativeAppPermissionIntroModel;
@protocol IESLiveNativeAppPermissionIntroDelegate, IESLiveNativeAppSquareContainerDelegate;

@interface IESLiveNativeAppPermissionIntroController : UIViewController <UIGestureRecognizerDelegate, IESNativeAppSquareTabVCProtocol> {
    id<IESLiveNativeAppSquareContainerDelegate> containerDelegate;
    id<IESLiveNativeAppPermissionIntroDelegate> _delegate;
    IESLiveNativeAppPermissionIntroModel *_model;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_introImageView;
    UILabel *_introLabel;
    UIButton *_confrimButton;
    UIView *_statusView;
    HTSEventContext *_trackContext;
}

@property (retain, nonatomic) IESLiveNativeAppPermissionIntroModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *introImageView;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIButton *confrimButton;
@property (retain, nonatomic) UIView *statusView;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveNativeAppPermissionIntroDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveNativeAppSquareContainerDelegate> containerDelegate;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)commonTrackDict;
- (id)confrimButton;
- (void)setConfrimButton:(id)arg0;
- (void)setupScrollContainer;
- (id)introImageView;
- (void)trackIntroControllerShowOrClick:(BOOL)arg0;
- (void)confrimButtonDidClick:(id)arg0;
- (void)iesLiveNativeAppSquareContainerVC:(id)arg0 didSwitchTabFromContext:(id)arg1 toContext:(id)arg2;
- (id)initWithDiContent:(id)arg0 trackContext:(id)arg1 introModel:(id)arg2;
- (void)setIntroImageView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)introLabel;
- (void)setIntroLabel:(id)arg0;
- (void)setUpUI;
- (id)statusView;
- (void)setStatusView:(id)arg0;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg0;

@end