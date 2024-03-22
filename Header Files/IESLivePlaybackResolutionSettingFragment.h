//
//     Generated by private class-dump
//

@class UIView, NSDate, IESLivePlaybackResolutionLandscapeButton, HTSLiveToolbarItem, NSArray, NSString, IESLiveResolutionChooseView, IESLivePlaybackResolutionSwitchToastView, BDXBridgeEventSubscriber;
@protocol IESLiveAnimatedImageViewAdapter;

@interface IESLivePlaybackResolutionSettingFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackResolutionAction, IESLiveAirPlayAction, IESLivePlaybackAutoRotateAction, IESLivePlaybackChangeStreamAction> {
    BOOL _btnShowDidTracked;
    BOOL _isOpenedFromAirplay;
    IESLivePlaybackResolutionLandscapeButton *_resolutionBtn;
    IESLivePlaybackResolutionSwitchToastView *_toast;
    UIView<IESLiveAnimatedImageViewAdapter> *_hdrSwitchShowAnima;
    HTSLiveToolbarItem *_resolutionItem;
    NSArray *_dataList;
    unsigned long long _selectIndex;
    id /* block */ _stallNotifyBlock;
    BDXBridgeEventSubscriber *_lynxEventSubscriber;
    unsigned long long _highResolutionFPSThresh;
    NSDate *_startOpenTime;
    NSDate *_startChangeResolutionTime;
    IESLiveResolutionChooseView *_resolutionChooseView;
}

@property (retain, nonatomic) IESLivePlaybackResolutionLandscapeButton *resolutionBtn;
@property (retain, nonatomic) IESLivePlaybackResolutionSwitchToastView *toast;
@property (retain, nonatomic) UIView<IESLiveAnimatedImageViewAdapter> *hdrSwitchShowAnima;
@property (retain, nonatomic) HTSLiveToolbarItem *resolutionItem;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) unsigned long long selectIndex;
@property (copy, nonatomic) id /* block */ stallNotifyBlock;
@property (retain, nonatomic) BDXBridgeEventSubscriber *lynxEventSubscriber;
@property (nonatomic) unsigned long long highResolutionFPSThresh;
@property (nonatomic) BOOL btnShowDidTracked;
@property (nonatomic) BOOL isOpenedFromAirplay;
@property (copy, nonatomic) NSDate *startOpenTime;
@property (copy, nonatomic) NSDate *startChangeResolutionTime;
@property (retain, nonatomic) IESLiveResolutionChooseView *resolutionChooseView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolutionShowName:(unsigned long long)arg0;

- (void)setDataList:(id)arg0;
- (unsigned long long)selectIndex;
- (void)setSelectIndex:(unsigned long long)arg0;
- (void)configResolution:(id)arg0 completion:(id /* block */)arg1;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)arg0;
- (void)unsubscribeEvent;
- (BOOL)isUsingCache;
- (id)resolutionList;
- (void)updateOrientation:(long long)arg0;
- (void)didAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)airplayStateDidChange:(BOOL)arg0;
- (void)setResolutionChooseView:(id)arg0;
- (id)resolutionChooseView;
- (id)resolutionItem;
- (void)setResolutionItem:(id)arg0;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)streamChangedWithEpisode:(id)arg0;
- (void)setHighResolutionFPSThresh:(unsigned long long)arg0;
- (unsigned long long)highResolutionFPSThresh;
- (void)showVideoResolution;
- (void)showVideoResolutionWithSupportHighCharity:(BOOL)arg0 needMask:(BOOL)arg1;
- (id)currentButtonName;
- (void)enterChangeResolutionWithIndex:(unsigned long long)arg0;
- (id)currentResolutionItem;
- (unsigned long long)currentResolutionItemIndex;
- (void)updateResolutionWithDefinition:(id)arg0 completion:(id /* block */)arg1;
- (void)onVideoStalledStart:(long long)arg0 reason:(unsigned long long)arg1;
- (void)onVideoStalledEnd;
- (void)suggestReduceResolution;
- (void)p_trackName:(id)arg0;
- (void)showLandscapeSelect;
- (BOOL)btnShowDidTracked;
- (void)setBtnShowDidTracked:(BOOL)arg0;
- (void)setIsOpenedFromAirplay:(BOOL)arg0;
- (void)setStartOpenTime:(id)arg0;
- (id)video_generateList:(id)arg0;
- (void)updateBtnTitle;
- (void)loadResolutionInMoreSettingToolsIfNeeded;
- (id)resolutionShowName;
- (void)showPortraitResolutionChooseView;
- (void)trackDefinitionSettingButtonShow;
- (void)showToastWithState;
- (id /* block */)stallNotifyBlock;
- (void)setStallNotifyBlock:(id /* block */)arg0;
- (void)p_closeCornerToast;
- (void)p_selectOnCornerToast;
- (void)didSelectStateOf:(long long)arg0 completion:(id /* block */)arg1;
- (void)setResolutionBtn:(id)arg0;
- (id)resolutionBtn;
- (void)updateResolutionBtn;
- (BOOL)hasValidData;
- (void)changeMorePanelResolutionToolbarTitle;
- (id)cast_generateList:(id)arg0 supportHighCharity:(BOOL)arg1;
- (void)showLandscapeResolutionChooseView;
- (void)trackDefinitionSettingButtonClick;
- (id)translateConfigFromDataList:(id)arg0;
- (id)lynxEventSubscriber;
- (void)setLynxEventSubscriber:(id)arg0;
- (id)selectListData;
- (void)p_showHdrLodingText:(unsigned long long)arg0;
- (id)hdrSwitchShowAnima;
- (void)setHdrSwitchShowAnima:(id)arg0;
- (void)configResolutionWithItem:(id)arg0 completion:(id /* block */)arg1;
- (void)p_showHdrLoadingAnimationView:(id)arg0 completion:(id /* block */)arg1;
- (void)trackDefinitionSettingOptionSelected:(id)arg0;
- (void)setStartChangeResolutionTime:(id)arg0;
- (id)startChangeResolutionTime;
- (void)p_trackClarityChangeCost:(id)arg0 succeed:(BOOL)arg1;
- (void)p_trackClarityHdrOpenTimeConsum:(BOOL)arg0;
- (void)p_trackClarityHdrOpenSuccess:(BOOL)arg0;
- (BOOL)_is4kResolutionType:(id)arg0;
- (void)p_trackDefinitionChangeFail:(id)arg0;
- (id)video_generateStreamTypeList:(id)arg0;
- (id)video_generateVidTypeList:(id)arg0;
- (BOOL)isOpenedFromAirplay;
- (id)startOpenTime;
- (void)subscribeIndexSelectedEvent;
- (void)showSelect_portrait:(BOOL)arg0 needMask:(BOOL)arg1;
- (id)selectListTitles;
- (id)selectListResolutionTypes;
- (id)csvStrFromArray:(id)arg0;
- (id)cast_generateList:(id)arg0;
- (id)p_airPlayHdrButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)setToast:(id)arg0;
- (id)toast;
- (id)dataList;

@end