//
//     Generated by private class-dump
//

@class UIView, NSString, AWENavigationBar, NSDictionary, AWERadarKeyboardView, AWERadarGroupEnterCommandView, CAGradientLayer, UIImageView, UILabel;
@protocol AWEIMFaceToFaceConfigProtocol;

@interface AWERadarGroupCommandViewController : UIViewController <AWERouterViewControllerProtocol> {
    BOOL _enabletopHintMask;
    BOOL _isExited;
    long long _enterType;
    NSString *_topHintText;
    NSString *_enterMethod;
    NSString *_enterFrom;
    NSString *_groupId;
    NSString *_groupCommand;
    AWENavigationBar *_navigationBar;
    UILabel *_hintLabel;
    AWERadarGroupEnterCommandView *_commandView;
    AWERadarKeyboardView *_keyboardView;
    UIView *_hintMaskView;
    NSDictionary *_routerParam;
    NSDictionary *_extraTrackInfo;
    NSString *_taskID;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_tipsLabel;
    CAGradientLayer *_gradientLayer;
    UIImageView *_topBackgroundImageView;
    id<AWEIMFaceToFaceConfigProtocol> _materialInfo;
}

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *groupCommand;
@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWERadarGroupEnterCommandView *commandView;
@property (retain, nonatomic) AWERadarKeyboardView *keyboardView;
@property (nonatomic) BOOL enabletopHintMask;
@property (retain, nonatomic) UIView *hintMaskView;
@property (copy, nonatomic) NSDictionary *routerParam;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (nonatomic) BOOL isExited;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *topBackgroundImageView;
@property (retain, nonatomic) id<AWEIMFaceToFaceConfigProtocol> materialInfo;
@property (nonatomic) long long enterType;
@property (copy, nonatomic) NSString *topHintText;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)routerParam;
- (void)p_setupUI;
- (void)setRouterParam:(id)arg0;
- (id)extraTrackInfo;
- (void)setExtraTrackInfo:(id)arg0;
- (id)commandView;
- (void)setCommandView:(id)arg0;
- (id)groupCommand;
- (void)setGroupCommand:(id)arg0;
- (BOOL)isSpringFestivalActive;
- (void)setTopHintText:(id)arg0;
- (void)setEnabletopHintMask:(BOOL)arg0;
- (id)materialInfo;
- (void)setMaterialInfo:(id)arg0;
- (void)p_removeGroupConfirmVC;
- (void)__trackGroupFaceToFacePanelShow;
- (void)setIsExited:(BOOL)arg0;
- (BOOL)isExited;
- (void)setTopBackgroundImageView:(id)arg0;
- (id)topBackgroundImageView;
- (BOOL)enabletopHintMask;
- (id)hintMaskView;
- (void)setupCommandView;
- (void)p_transferToNextVc;
- (void)p_trackEnterConfirmVC;
- (void)p_clearCommand;
- (void)__trackAPIEventResCode:(long long)arg0 duration:(long long)arg1 apiName:(id)arg2;
- (void)p_transferToGroupConfirmVC;
- (id)topHintText;
- (void)setHintMaskView:(id)arg0;
- (id)gradientLayer;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (id)titleLabel;
- (long long)preferredStatusBarStyle;
- (id)groupId;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)taskID;
- (void)setTaskID:(id)arg0;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setupKeyboard;
- (void)setGradientLayer:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (long long)enterType;
- (void)setEnterType:(long long)arg0;
- (id)initWithGroupId:(id)arg0;

@end