//
//     Generated by private class-dump
//

@interface AWEFlowImpl.AWEFlowAuthorizeViewController : FlowCommon.FlowBaseViewController <AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ headerImage;
    void /* unknown type, empty encoding */ cocoLabel;
    void /* unknown type, empty encoding */ cocoDot;
    void /* unknown type, empty encoding */ backButton;
    void /* unknown type, empty encoding */ loginButton;
    void /* unknown type, empty encoding */ checkBox;
    void /* unknown type, empty encoding */ alertView;
    void /* unknown type, empty encoding */ colorConfig;
    void /* unknown type, empty encoding */ welcomeTexts;
    void /* unknown type, empty encoding */ linkArray;
    void /* unknown type, empty encoding */ urlArray;
    void /* unknown type, empty encoding */ userProtocolText;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ isBanned;
    void /* unknown type, empty encoding */ privacyLabel;
    void /* unknown type, empty encoding */ sendMessageText;
    void /* unknown type, empty encoding */ needResetCheckBox;
    void /* unknown type, empty encoding */ suggests;
    void /* unknown type, empty encoding */ suggestNum;
    void /* unknown type, empty encoding */ suggestHeight;
    void /* unknown type, empty encoding */ suggestMargin;
    void /* unknown type, empty encoding */ suggestContainer;
    void /* unknown type, empty encoding */ dotAttr;
    void /* unknown type, empty encoding */ emsp;
    void /* unknown type, empty encoding */ emspFont;
    void /* unknown type, empty encoding */ greetingFont;
    void /* unknown type, empty encoding */ safeArea;
    void /* unknown type, empty encoding */ startLoadingTimestamp;
    void /* unknown type, empty encoding */ hasShowBannedAlert;
}

- (void)startDotAnimationWithColor:(id)arg0;
- (void)hidePage;
- (void)clickLoginButtton;
- (void)privacyCheckClicked;
- (void)clickLinkWithUrl:(id)arg0 title:(id)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)traitCollectionDidChange:(id)arg0;
- (id)initWithCoder:(id)arg0;

@end
