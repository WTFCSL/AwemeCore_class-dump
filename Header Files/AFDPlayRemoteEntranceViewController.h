//
//     Generated by private class-dump
//

@class UIButton, AWEButton, NSDictionary, UILabel, YYLabel;

@interface AFDPlayRemoteEntranceViewController : AWEHalfScreenBaseViewController {
    UILabel *_titleLabel;
    YYLabel *_instructionLabel;
    AWEButton *_tryBtn;
    UIButton *_closeButton;
    long long _type;
    NSDictionary *_eventParam;
    NSDictionary *_routeParams;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *instructionLabel;
@property (retain, nonatomic) AWEButton *tryBtn;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDictionary *eventParam;
@property (retain, nonatomic) NSDictionary *routeParams;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)openFriendRoomWithParam:(id)arg0 status:(long long)arg1 roomProvider:(long long)arg2;
+ (BOOL)needShowAlertWithType:(long long)arg0;
+ (BOOL)rtvFeedShareEnableWithEventParams:(id)arg0;

- (id)enterFrom;
- (id)aAWEPadModuleAdapter;
- (void)setRouteParams:(id)arg0;
- (id)routeParams;
- (id)eventParam;
- (void)setEventParam:(id)arg0;
- (void)viewWillAppearWithIMStayTimeTracker;
- (void)viewWillDisappearWithIMStayTimeTracker;
- (id)imStayTimelabel;
- (id)imStaytimeKey;
- (id)p_functionType;
- (id)liveAcqIntimateABConfig;
- (id)tryBtn;
- (void)setTryBtn:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (long long)type;
- (unsigned long long)viewStyle;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;
- (void)presentViewController:(id /* block */)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (unsigned long long)animationStyle;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)instructionLabel;
- (void)setInstructionLabel:(id)arg0;
- (double)containerWidth;

@end
