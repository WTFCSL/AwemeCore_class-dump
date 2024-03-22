//
//     Generated by private class-dump
//

@class UIButton, NSString, UIView;
@protocol AWENoxusPlayerSettingTypeView;

@interface AWELandscapeSpeedSettingElement : AWELandscapeInteractionBaseElement <AWENoxusPlayerSettingTypeViewDelegate> {
    BOOL _isShowingSpeedPanel;
    UIButton *_speedButton;
    UIView<AWENoxusPlayerSettingTypeView> *_speedSettingView;
    NSString *_speedChangeMethod;
    long long _speedType;
}

@property (retain, nonatomic) UIButton *speedButton;
@property (retain, nonatomic) UIView<AWENoxusPlayerSettingTypeView> *speedSettingView;
@property (nonatomic) BOOL isShowingSpeedPanel;
@property (copy, nonatomic) NSString *speedChangeMethod;
@property (nonatomic) long long speedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 didChangePlaybackRate:(double)arg1;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)onPlayerDidReadyForDisplay:(id)arg0;
- (void)hideAllPanels;
- (void)didEnterLandscape;
- (BOOL)isShowingPanel;
- (id)speedButton;
- (long long)speedType;
- (void)noxusSettingTypeListSelectModel:(id)arg0;
- (void)noxusSettingTypeDismiss:(BOOL)arg0;
- (void)setSpeedButton:(id)arg0;
- (void)setSpeedType:(long long)arg0;
- (BOOL)isShowingSpeedPanel;
- (void)dismissSpeedSettingView;
- (void)setIsShowingSpeedPanel:(BOOL)arg0;
- (id)speedChangeMethod;
- (void)trackPlayTimeWithSpeedMethod:(id)arg0;
- (void)traceSpeedValueSelected:(id)arg0 enterMethod:(id)arg1 extraDict:(id)arg2;
- (id)speedSettingView;
- (void)setSpeedChangeMethod:(id)arg0;
- (void)traceSpeedButtonClicked;
- (void)setSpeedSettingView:(id)arg0;
- (void)showSpeedSettingView;
- (void)updateSpeedButtonWithPlaybackRate:(double)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end