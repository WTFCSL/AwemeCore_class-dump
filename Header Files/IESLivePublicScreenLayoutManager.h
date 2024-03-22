//
//     Generated by private class-dump
//

@class IESLivePublicScreenLayoutManagerForPad, NSMutableDictionary, NSString, IESLivePublicScreenInfoModel;
@protocol IESLiveRevenueInteractModule, IESLiveRoomService, IESLivePublicScreenLayoutCalculator, HTSLivePluginLayoutMachineProvider, IESLiveMultiTabService, IESLiveMessageInteractionModuleAdapter, IESLiveCommunityInteractModuleAdapter, HTSLiveStreamPlayerProviderAdapter, IESLiveInteractionModuleAdapter;

@interface IESLivePublicScreenLayoutManager : NSObject <IESLiveMessageInteractionModuleCommentAction, IESLivePublicScreenLayoutProvider, HTSLiveStreamPlayerAction, IESLivePublicScreenLayoutChangeProvider, IESLivePublicScreenCollectionViewActions, IESLivePublicScreenLayoutCalculateDataProvider, IESLiveMessageListLayoutService> {
    BOOL _isPad;
    BOOL _keyboardShow;
    BOOL _isUnmount;
    IESLivePublicScreenLayoutManagerForPad *_padLayoutManeger;
    NSMutableDictionary *_subscriberDic;
    id<IESLiveRoomService> _roomService;
    id<HTSLiveStreamPlayerProviderAdapter> _streamPlayerProvider;
    id<HTSLivePluginLayoutMachineProvider> _layoutMachineProvider;
    id<IESLiveMultiTabService> _multiTabService;
    unsigned long long _currentScene;
    double _totalKeyboardOffset;
    IESLivePublicScreenInfoModel *_currentPublicScreenInfoModel;
    id<IESLivePublicScreenLayoutCalculator> _normalCalculator;
    id<IESLivePublicScreenLayoutCalculator> _channelCalculator;
    id<IESLiveInteractionModuleAdapter> _socialAdapter;
    id<IESLiveRevenueInteractModule> _revenueAdapter;
    id<IESLiveMessageInteractionModuleAdapter> _messageInteractionAdapter;
    id<IESLiveCommunityInteractModuleAdapter> _communityInteractAdapter;
    double _viewErrorWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _playerFrame;
}

@property (retain, nonatomic) IESLivePublicScreenLayoutManagerForPad *padLayoutManeger;
@property (retain, nonatomic) NSMutableDictionary *subscriberDic;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (weak, nonatomic) id<HTSLiveStreamPlayerProviderAdapter> streamPlayerProvider;
@property (weak, nonatomic) id<HTSLivePluginLayoutMachineProvider> layoutMachineProvider;
@property (weak, nonatomic) id<IESLiveMultiTabService> multiTabService;
@property (nonatomic) unsigned long long currentScene;
@property (nonatomic) BOOL isPad;
@property (nonatomic) BOOL keyboardShow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerFrame;
@property (nonatomic) double totalKeyboardOffset;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *currentPublicScreenInfoModel;
@property (retain, nonatomic) id<IESLivePublicScreenLayoutCalculator> normalCalculator;
@property (retain, nonatomic) id<IESLivePublicScreenLayoutCalculator> channelCalculator;
@property (retain, nonatomic) id<IESLiveInteractionModuleAdapter> socialAdapter;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueAdapter;
@property (retain, nonatomic) id<IESLiveMessageInteractionModuleAdapter> messageInteractionAdapter;
@property (retain, nonatomic) id<IESLiveCommunityInteractModuleAdapter> communityInteractAdapter;
@property (nonatomic) double viewErrorWidth;
@property (nonatomic) BOOL isUnmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)arg0;
- (void)setKeyboardShow:(BOOL)arg0;
- (BOOL)keyboardShow;
- (void)setCurrentScene:(unsigned long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (void)setPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRoomService:(id)arg0;
- (id)roomService;
- (void)commentDidStartWithCommentPanelViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)shouldHasViceView;
- (id)streamPlayerProvider;
- (void)setStreamPlayerProvider:(id)arg0;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)subscriberDic;
- (void)setSubscriberDic:(id)arg0;
- (void)enablePublicScreenCalculateForType:(unsigned long long)arg0 enabled:(BOOL)arg1;
- (void)addPublicScreenLayoutSubscriber:(id)arg0 forPublicScreenType:(unsigned long long)arg1;
- (double)messageListHeight;
- (double)messageListWidth;
- (double)roomContainerHeight;
- (BOOL)isUnderMessageListHeightGiftTrayAboveOptimization;
- (void)willUnmount;
- (void)enablePublicScreenCalculate:(BOOL)arg0;
- (double)messageListHeightWithType:(unsigned long long)arg0;
- (double)messageListWidthWithType:(unsigned long long)arg0;
- (BOOL)isSideStyle;
- (double)sideScreenWidth;
- (BOOL)isTemplateSideStyle;
- (BOOL)isLiveIPadFakeFullScreen;
- (void)updatePublicScreenContainerHeight:(long long)arg0 height:(double)arg1 publicScreenType:(unsigned long long)arg2;
- (id)currentPublicScreenInfoModel;
- (void)selectedToPublicScreenWithInfoModel:(id)arg0;
- (void)selectedPublicScreenFromInfoModel:(id)arg0 toInfoModel:(id)arg1;
- (id)multiTabService;
- (void)setMultiTabService:(id)arg0;
- (void)setLayoutMachineProvider:(id)arg0;
- (id)layoutMachineProvider;
- (unsigned long long)currentPublicScreenLayoutScene;
- (void)cancelLayoutSceneIfIsCurrentScene:(unsigned long long)arg0;
- (void)updatePublicScreenHeightWithScene:(unsigned long long)arg0;
- (void)updatePublicScreenHeight;
- (void)updatePublicScreenHeightWithLevel:(unsigned long long)arg0;
- (void)updateTopAvoidHeight:(double)arg0 scene:(id)arg1;
- (void)updatePublicScreenHeightDynamicallyType:(unsigned long long)arg0;
- (void)updatePublicScreenWidth:(double)arg0 withSource:(unsigned long long)arg1;
- (void)removePublicScreenOutSetWidth;
- (void)updateNormalCalculator:(id)arg0;
- (double)smallGiftViewHeight;
- (BOOL)isSmallGiftViewMoveDownScene;
- (double)userEnterViewHeight;
- (double)userEnterViewSpacing;
- (BOOL)isUnmount;
- (void)setIsUnmount:(BOOL)arg0;
- (double)caculateHeightForCommon;
- (double)anchorHorisontalUserEnterAvoidHeight;
- (unsigned long long)currentLayoutScene;
- (BOOL)isHorisontal;
- (double)defaultAllAvoidHeight;
- (double)totalKeyboardOffset;
- (void)setupCalculatorWithType:(unsigned long long)arg0;
- (id)channelCalculator;
- (void)setChannelCalculator:(id)arg0;
- (id)normalCalculator;
- (void)setNormalCalculator:(id)arg0;
- (double)designatedMessageListWidthWithPublicScreenType:(unsigned long long)arg0;
- (id)revenueAdapter;
- (id)communityInteractAdapter;
- (void)publicScreenLayoutChangedWithCalculator:(id)arg0;
- (id)calculatorWithType:(unsigned long long)arg0;
- (void)setCurrentPublicScreenInfoModel:(id)arg0;
- (id)subscribersForPublicScreenType:(unsigned long long)arg0;
- (void)sendMessageListHeightChangedAction:(id)arg0 forType:(unsigned long long)arg1;
- (void)sendPublicScreenLayoutChangedAction:(id)arg0 forType:(unsigned long long)arg1;
- (id)padLayoutManeger;
- (void)assignCurrentScene:(unsigned long long)arg0;
- (void)monitorPublicScreenViewWidth:(double)arg0 withSource:(unsigned long long)arg1;
- (BOOL)needChangeHeightWhenKeyBoardShow;
- (void)setTotalKeyboardOffset:(double)arg0;
- (void)log_messageListHeightChanged:(double)arg0 type:(unsigned long long)arg1;
- (id)layoutInfoDictWith:(id)arg0;
- (void)log_publicScreenLayoutChanged:(id)arg0 reason:(id)arg1;
- (id)layoutInfoDictForType:(unsigned long long)arg0;
- (double)getConstMessageListHeight;
- (double)messageListHeightForMultiTab;
- (BOOL)isCommonTemplateStyle;
- (BOOL)isGameWithViceView;
- (double)bottomPaddingForCaculate;
- (double)allAvoidHeight;
- (double)userEnterAvoidHeight;
- (double)smallGiftAvoidHeight;
- (id)socialAdapter;
- (id)messageInteractionAdapter;
- (double)pkOffset;
- (double)multiLinkOffset;
- (double)equalBigPartyOffset;
- (double)normalAudioOffset;
- (double)multiAudioOffset;
- (double)playerOffset;
- (double)screenTopToBannerBottomConstHeight;
- (double)multiLinkMediaOffset;
- (void)p_monitorPublicScreenViewWidthError;
- (void)setViewErrorWidth:(double)arg0;
- (double)viewErrorWidth;
- (void)p_monitorPublicScreenLayoutWithInfoModel:(id)arg0;
- (id)log_commonParameters;
- (void)messageListHeightChanged:(double)arg0 calculator:(id)arg1;
- (void)monitorPublicScreenLayoutWithInfoModel:(id)arg0;
- (double)toolBarContainerBottomOffset;
- (void)setPadLayoutManeger:(id)arg0;
- (void)setSocialAdapter:(id)arg0;
- (void)setRevenueAdapter:(id)arg0;
- (void)setMessageInteractionAdapter:(id)arg0;
- (void)setCommunityInteractAdapter:(id)arg0;
- (double)topOffset;
- (BOOL)isPad;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (double)bottomPadding;
- (unsigned long long)currentScene;
- (void)keyboardWillHide;
- (void)setIsPad:(BOOL)arg0;
- (void)dealloc;

@end
