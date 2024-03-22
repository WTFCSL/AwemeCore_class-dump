//
//     Generated by private class-dump
//

@class AWEBubble, NSString, NSTimer, UIView, NSObject;
@protocol AWEMultiAnchorExtendViewProtocol, AWEPOIEntryAnchorViewManagerProtocol, AWEPOIPromptCardManager, AWEFeedAnchorViewBehaviorProtocol, AWEPOIAnchorBubbleManagerProtocol;

@interface AWEFeedAnchorPOIConfig : AWEFeedAnchorBaseConfig <AWEPOIPlayInteractionVCManagerProtocol, AWEPOIEntryAnchorViewManagerDelegate> {
    BOOL _promptCardAlreadyShown;
    BOOL _disableRecruitedBubble;
    BOOL _shouldUploadPOISlideInfo;
    BOOL _isFromAvatarLiveElement;
    BOOL _anchorInitializeMark;
    NSString *_POIIDInLogExtra;
    id<AWEPOIEntryAnchorViewManagerProtocol> _anchorManager;
    id<AWEPOIAnchorBubbleManagerProtocol> _bubbleManager;
    NSTimer *_poiShowDetailTimer;
    NSTimer *_poiRecruitedBubbleTimer;
    NSObject<AWEPOIPromptCardManager> *_promptCardManager;
    UIView<AWEFeedAnchorViewBehaviorProtocol, AWEMultiAnchorExtendViewProtocol> *_poiEntryView;
    NSObject *_collectObserver;
    NSObject *_douDiscountObserver;
    AWEBubble *_recruitedBubble;
    NSString *_creationId;
}

@property (retain, nonatomic) NSTimer *poiShowDetailTimer;
@property (retain, nonatomic) NSTimer *poiRecruitedBubbleTimer;
@property (retain, nonatomic) NSObject<AWEPOIPromptCardManager> *promptCardManager;
@property (nonatomic) BOOL promptCardAlreadyShown;
@property (nonatomic) BOOL disableRecruitedBubble;
@property (nonatomic) BOOL shouldUploadPOISlideInfo;
@property (nonatomic) BOOL isFromAvatarLiveElement;
@property (retain, nonatomic) UIView<AWEFeedAnchorViewBehaviorProtocol, AWEMultiAnchorExtendViewProtocol> *poiEntryView;
@property (retain, nonatomic) NSObject *collectObserver;
@property (retain, nonatomic) NSObject *douDiscountObserver;
@property (retain, nonatomic) AWEBubble *recruitedBubble;
@property (retain, nonatomic) NSString *creationId;
@property (nonatomic) BOOL anchorInitializeMark;
@property (copy, nonatomic) NSString *POIIDInLogExtra;
@property (retain, nonatomic) id<AWEPOIEntryAnchorViewManagerProtocol> anchorManager;
@property (retain, nonatomic) id<AWEPOIAnchorBubbleManagerProtocol> bubbleManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasMutableAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1 anchorInfo:(id)arg2;
+ (void)onMutableAnchorSheetShowWithAweme:(id)arg0 context:(id)arg1 count:(long long)arg2;
+ (void)onMutableAnchorSheetClickWithAweme:(id)arg0 context:(id)arg1 count:(long long)arg2;
+ (id)anchorType;

- (void)onPoiLabelClicked:(id)arg0;
- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id)creationId;
- (void)setCreationId:(id)arg0;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)anchorManager;
- (void)tryHidePauseIcon;
- (void)tryShowPauseIcon;
- (BOOL)shouldShowPoiButton;
- (void)setPOIIDInLogExtra:(id)arg0;
- (void)showPOIDetail;
- (void)showPOIPromptCard;
- (id)bubbleManager;
- (void)setBubbleManager:(id)arg0;
- (void)setAnchorManager:(id)arg0;
- (void)hideInteractionControllerWithAnimation:(BOOL)arg0;
- (void)resumeInteractionControllerWithAnimation:(BOOL)arg0;
- (void)switchPlayStateWithAnimation:(BOOL)arg0;
- (void)playWithAnimation:(BOOL)arg0;
- (void)pauseWithAnimation:(BOOL)arg0;
- (void)trackAdPoiPointShow;
- (void)showPOIPromptCardImmediately:(BOOL)arg0;
- (id)douDiscountObserver;
- (id)promptCardManager;
- (void)setDouDiscountObserver:(id)arg0;
- (void)setupPOIPromptCard;
- (void)setPromptCardAlreadyShown:(BOOL)arg0;
- (BOOL)promptCardAlreadyShown;
- (void)trackProjectCardShow;
- (void)updatePromptLogExtraWithAwemeModel:(id)arg0;
- (void)setPromptCardManager:(id)arg0;
- (BOOL)anchorInitializeMark;
- (void)setAnchorInitializeMark:(BOOL)arg0;
- (id)poiEntryView;
- (void)startShowPOIDetailTimerIfNeeded;
- (id)createPOIAnchorManagerContext;
- (id)collectObserver;
- (void)setCollectObserver:(id)arg0;
- (void)trackSearchDouPlushAnchorPOIShow;
- (id)getFeedPOIStyle;
- (id)createPOIRankAnchorManagerContext;
- (void)setShouldUploadPOISlideInfo:(BOOL)arg0;
- (BOOL)shouldShowPoiDetail;
- (BOOL)didOriginADInfoHasTimerExtendPOI;
- (void)setPoiShowDetailTimer:(id)arg0;
- (id)poiShowDetailTimer;
- (id)poiRecruitedBubbleTimer;
- (void)setPoiRecruitedBubbleTimer:(id)arg0;
- (void)invalidateRecruitedTimer;
- (id)recruitedBubble;
- (BOOL)shouldUploadPOISlideInfo;
- (id)POIIDInLogExtra;
- (void)setDisableRecruitedBubble:(BOOL)arg0;
- (void)setRecruitedBubble:(id)arg0;
- (void)showRecruitedBubbleWithText:(id)arg0;
- (BOOL)disableRecruitedBubble;
- (BOOL)isFromAvatarLiveElement;
- (void)setIsFromAvatarLiveElement:(BOOL)arg0;
- (void)setPoiEntryView:(id)arg0;
- (void)invalidateTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;

@end