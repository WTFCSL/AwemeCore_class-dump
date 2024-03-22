//
//     Generated by private class-dump
//

@class NSArray, CreateInfoResponse_FansClubConfig, IESLiveFansClubModeSwitchApi, NSString, NSNumber;

@interface IESLiveAnchorFansClubModeSettingStore : NSObject {
    BOOL _canSwitchMode;
    NSArray *_sections;
    NSArray *_modes;
    NSNumber *_currentMode;
    NSString *_notice;
    NSString *_ruleTips;
    NSString *_ruleURL;
    NSString *_disableToast;
    NSString *_switchAlertTitle;
    NSString *_switchAlertText;
    NSString *_switchAlertHighLightText;
    id /* block */ _switchFansClubModeBlock;
    IESLiveFansClubModeSwitchApi *_fansClubModeSwitchApi;
    CreateInfoResponse_FansClubConfig *_fansClubConfig;
}

@property (retain, nonatomic) IESLiveFansClubModeSwitchApi *fansClubModeSwitchApi;
@property (retain, nonatomic) CreateInfoResponse_FansClubConfig *fansClubConfig;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *modes;
@property (retain, nonatomic) NSNumber *currentMode;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *ruleTips;
@property (retain, nonatomic) NSString *ruleURL;
@property (nonatomic) BOOL canSwitchMode;
@property (retain, nonatomic) NSString *disableToast;
@property (retain, nonatomic) NSString *switchAlertTitle;
@property (retain, nonatomic) NSString *switchAlertText;
@property (retain, nonatomic) NSString *switchAlertHighLightText;
@property (copy, nonatomic) id /* block */ switchFansClubModeBlock;

- (id)disableToast;
- (void)setDisableToast:(id)arg0;
- (void)setRuleTips:(id)arg0;
- (void)setRuleURL:(id)arg0;
- (void)setCanSwitchMode:(BOOL)arg0;
- (void)setSwitchAlertTitle:(id)arg0;
- (void)setSwitchAlertText:(id)arg0;
- (void)setSwitchAlertHighLightText:(id)arg0;
- (id)fansClubModeSwitchApi;
- (id)fansClubConfig;
- (void)updateWithFansClubConfig:(id)arg0;
- (void)switchFansClubMode:(id)arg0 fromMode:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithFansClubConfig:(id)arg0;
- (id)ruleTips;
- (id)ruleURL;
- (BOOL)canSwitchMode;
- (id)switchAlertTitle;
- (id)switchAlertText;
- (id)switchAlertHighLightText;
- (id /* block */)switchFansClubModeBlock;
- (void)setSwitchFansClubModeBlock:(id /* block */)arg0;
- (void)setFansClubModeSwitchApi:(id)arg0;
- (void)setFansClubConfig:(id)arg0;
- (id)sections;
- (id)currentMode;
- (void).cxx_destruct;
- (void)setCurrentMode:(id)arg0;
- (void)setSections:(id)arg0;
- (id)notice;
- (void)setNotice:(id)arg0;
- (id)modes;
- (void)setModes:(id)arg0;

@end
