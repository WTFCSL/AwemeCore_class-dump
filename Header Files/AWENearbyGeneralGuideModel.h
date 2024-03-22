//
//     Generated by private class-dump
//

@class NSString, AWENearbyGenearlGuideRebootConfig, AWENearbyGeneralGuideDoubleCheckConfig, NSArray, NSMutableDictionary, AWEURLModel, AWENearbyGeneralShowActionModel, NSDictionary, AWENearbyGuideBubbleModel, AWENearbyFestivalModel, NSNumber, AWENearbyGuideSceneInfoModel;

@interface AWENearbyGeneralGuideModel : MTLModel <MTLJSONSerializing> {
    BOOL _notDotUndertake;
    BOOL _isDotDataFromUpdateDot;
    BOOL _notCache;
    BOOL _isFromCache;
    NSString *_bubbleId;
    unsigned long long _type;
    unsigned long long _scene;
    NSString *_exposeMsg;
    long long _priority;
    long long _validTime;
    unsigned long long _guideAction;
    unsigned long long _exposeUploadType;
    NSString *_impressionSvrData;
    AWENearbyGeneralShowActionModel *_showActionModel;
    unsigned long long _uploadImpressionScene;
    long long _pageType;
    NSString *_nearbyBubbleComponentId;
    NSString *_nearbyDotComponentId;
    NSString *_grouponBubbleComponentId;
    NSString *_grouponDotComponentId;
    unsigned long long _style;
    NSString *_bubbleText;
    AWEURLModel *_bubbleImgUrl;
    unsigned long long _bubbleImgType;
    AWEURLModel *_bubbleIconUrl;
    long long _bubbleShowDuration;
    long long _bubbleShowOutClick;
    long long _attribute;
    unsigned long long _dotStyle;
    NSString *_dotText;
    long long _dotPriority;
    long long _rebootRecoverDot;
    AWENearbyGenearlGuideRebootConfig *_rebootRecoverDotConfig;
    long long _removeDotUserChange;
    long long _redDotRemoveTimestamp;
    long long _redDotRemoveTime;
    long long _dotDowngradeTime;
    long long _sceneType;
    AWENearbyGeneralGuideDoubleCheckConfig *_guideDoubleCheckConfig;
    NSArray *_freqKeyArray;
    long long _throttleTime;
    NSArray *_commonAvoidDisable;
    NSDictionary *_avoidOtherBubbleType;
    NSDictionary *_avoidOtherBubbleTypeSecond;
    NSString *_limitUid;
    NSString *_limitDid;
    NSString *_feedGidInfo;
    NSString *_diamondTransInfo;
    NSString *_resourceTransInfo;
    NSNumber *_firstPullScene;
    NSString *_bubbleTypeCategory;
    NSString *_noticeCategory;
    NSString *_extraFeedTrackParam;
    NSString *_extraDiamondTrackParam;
    NSString *_guideContext;
    NSString *_floatBackInfo;
    NSString *_diamondUpdateInfo;
    NSString *_forceCity;
    long long _clearForceCity;
    NSString *_preTipText;
    NSString *_openSubPage;
    NSString *_searchTransInfo;
    NSString *_enterBubble;
    id /* block */ _showCompletion;
    id /* block */ _clickCompletion;
    id /* block */ _disappearCompletion;
    id /* block */ _precheckBlk;
    id /* block */ _canRemoveBlk;
    NSString *_limitedFreqKey;
    AWENearbyGuideSceneInfoModel *_guidSceneInfoModel;
    double _guideReciveTime;
    AWENearbyGuideBubbleModel *_oldBubbleModel;
    AWENearbyFestivalModel *_festivalModel;
    NSString *_bubbleTextForTrack;
    NSMutableDictionary *_extraTrackParams;
}

@property (retain, nonatomic) NSMutableDictionary *extraTrackParams;
@property (copy, nonatomic) NSString *bubbleId;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *exposeMsg;
@property (nonatomic) long long priority;
@property (nonatomic) long long validTime;
@property (nonatomic) unsigned long long guideAction;
@property (nonatomic) unsigned long long exposeUploadType;
@property (copy, nonatomic) NSString *impressionSvrData;
@property (retain, nonatomic) AWENearbyGeneralShowActionModel *showActionModel;
@property (nonatomic) unsigned long long uploadImpressionScene;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *nearbyBubbleComponentId;
@property (copy, nonatomic) NSString *nearbyDotComponentId;
@property (copy, nonatomic) NSString *grouponBubbleComponentId;
@property (copy, nonatomic) NSString *grouponDotComponentId;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) AWEURLModel *bubbleImgUrl;
@property (nonatomic) unsigned long long bubbleImgType;
@property (copy, nonatomic) AWEURLModel *bubbleIconUrl;
@property (nonatomic) long long bubbleShowDuration;
@property (nonatomic) long long bubbleShowOutClick;
@property (nonatomic) long long attribute;
@property (nonatomic) BOOL notDotUndertake;
@property (nonatomic) unsigned long long dotStyle;
@property (copy, nonatomic) NSString *dotText;
@property (nonatomic) long long dotPriority;
@property (nonatomic) long long rebootRecoverDot;
@property (copy, nonatomic) AWENearbyGenearlGuideRebootConfig *rebootRecoverDotConfig;
@property (nonatomic) long long removeDotUserChange;
@property (nonatomic) long long redDotRemoveTimestamp;
@property (nonatomic) long long redDotRemoveTime;
@property (nonatomic) long long dotDowngradeTime;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) AWENearbyGeneralGuideDoubleCheckConfig *guideDoubleCheckConfig;
@property (nonatomic) BOOL isDotDataFromUpdateDot;
@property (copy, nonatomic) NSArray *freqKeyArray;
@property (nonatomic) long long throttleTime;
@property (copy, nonatomic) NSArray *commonAvoidDisable;
@property (copy, nonatomic) NSDictionary *avoidOtherBubbleType;
@property (copy, nonatomic) NSDictionary *avoidOtherBubbleTypeSecond;
@property (copy, nonatomic) NSString *limitUid;
@property (copy, nonatomic) NSString *limitDid;
@property (copy, nonatomic) NSString *feedGidInfo;
@property (copy, nonatomic) NSString *diamondTransInfo;
@property (copy, nonatomic) NSString *resourceTransInfo;
@property (retain, nonatomic) NSNumber *firstPullScene;
@property (copy, nonatomic) NSString *bubbleTypeCategory;
@property (copy, nonatomic) NSString *noticeCategory;
@property (copy, nonatomic) NSString *extraFeedTrackParam;
@property (copy, nonatomic) NSString *extraDiamondTrackParam;
@property (copy, nonatomic) NSString *guideContext;
@property (copy, nonatomic) NSString *floatBackInfo;
@property (copy, nonatomic) NSString *diamondUpdateInfo;
@property (copy, nonatomic) NSString *forceCity;
@property (nonatomic) long long clearForceCity;
@property (copy, nonatomic) NSString *preTipText;
@property (copy, nonatomic) NSString *openSubPage;
@property (copy, nonatomic) NSString *searchTransInfo;
@property (copy, nonatomic) NSString *enterBubble;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ clickCompletion;
@property (copy, nonatomic) id /* block */ disappearCompletion;
@property (copy, nonatomic) id /* block */ precheckBlk;
@property (copy, nonatomic) id /* block */ canRemoveBlk;
@property (nonatomic) BOOL notCache;
@property (nonatomic) BOOL isFromCache;
@property (copy, nonatomic) NSString *limitedFreqKey;
@property (retain, nonatomic) AWENearbyGuideSceneInfoModel *guidSceneInfoModel;
@property (nonatomic) double guideReciveTime;
@property (retain, nonatomic) AWENearbyGuideBubbleModel *oldBubbleModel;
@property (retain, nonatomic) AWENearbyFestivalModel *festivalModel;
@property (copy, nonatomic) NSString *bubbleTextForTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)freqKeyArrayJSONTransformer;
+ (id)showActionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (void)setThrottleTime:(long long)arg0;
- (void)setShowCompletion:(id /* block */)arg0;
- (id /* block */)showCompletion;
- (long long)throttleTime;
- (void)addExtraParams:(id)arg0;
- (void)initProperty;
- (id)bubbleImgUrl;
- (void)setBubbleImgUrl:(id)arg0;
- (unsigned long long)bubbleImgType;
- (void)setBubbleImgType:(unsigned long long)arg0;
- (id)bubbleIconUrl;
- (void)setBubbleIconUrl:(id)arg0;
- (unsigned long long)dotStyle;
- (void)setDotStyle:(unsigned long long)arg0;
- (id)dotText;
- (void)setDotText:(id)arg0;
- (void)setGuideContext:(id)arg0;
- (void)setDiamondUpdateInfo:(id)arg0;
- (id)guideContext;
- (id)feedGidInfo;
- (void)setFeedGidInfo:(id)arg0;
- (id)resourceTransInfo;
- (void)setResourceTransInfo:(id)arg0;
- (id)firstPullScene;
- (void)setFirstPullScene:(id)arg0;
- (id)preTipText;
- (void)setPreTipText:(id)arg0;
- (id)diamondUpdateInfo;
- (id)floatBackInfo;
- (void)setFloatBackInfo:(id)arg0;
- (id)searchTransInfo;
- (void)setSearchTransInfo:(id)arg0;
- (void)setExtraTrackParams:(id)arg0;
- (id)extraTrackParams;
- (id)bubbleId;
- (void)setValidTime:(long long)arg0;
- (long long)validTime;
- (void)setBubbleId:(id)arg0;
- (id)nearbyBubbleComponentId;
- (long long)bubbleShowDuration;
- (void)setBubbleShowDuration:(long long)arg0;
- (long long)bubbleShowOutClick;
- (id)nearbyDotComponentId;
- (id)grouponBubbleComponentId;
- (id)grouponDotComponentId;
- (id)freqKeyArray;
- (void)setLimitedFreqKey:(id)arg0;
- (BOOL)isEscapeSettings:(unsigned long long)arg0;
- (id /* block */)clickCompletion;
- (id /* block */)disappearCompletion;
- (void)setCanRemoveBlk:(id /* block */)arg0;
- (double)guideReciveTime;
- (id)limitedFreqKey;
- (id)getAllExtraParams;
- (id)bubbleTextForTrack;
- (void)createTrackParam;
- (unsigned long long)guideAction;
- (void)setGrouponBubbleComponentId:(id)arg0;
- (void)setGuideAction:(unsigned long long)arg0;
- (void)setNearbyBubbleComponentId:(id)arg0;
- (void)setPrecheckBlk:(id /* block */)arg0;
- (id /* block */)precheckBlk;
- (id)noticeCategory;
- (id)bubbleTypeCategory;
- (id)oldBubbleModel;
- (void)setBubbleTextForTrack:(id)arg0;
- (id)extraFeedTrackParam;
- (id)diamondTransInfo;
- (id)enterBubble;
- (id)openSubPage;
- (id)extraDiamondTrackParam;
- (void)checkDotTypeWith:(id)arg0;
- (id)guidSceneInfoModel;
- (void)setGuidSceneInfoModel:(id)arg0;
- (id)createGuideSceneInfo;
- (void)setClickCompletion:(id /* block */)arg0;
- (void)setDisappearCompletion:(id /* block */)arg0;
- (id)createNearbyTabDotModel;
- (id)copyForStorage;
- (void)setOldBubbleModel:(id)arg0;
- (id)forceCity;
- (long long)clearForceCity;
- (BOOL)notDotUndertake;
- (id)showActionModel;
- (unsigned long long)exposeUploadType;
- (id)exposeMsg;
- (unsigned long long)uploadImpressionScene;
- (id)impressionSvrData;
- (void)setNotCache:(BOOL)arg0;
- (id)limitUid;
- (id)limitDid;
- (void)setGuideReciveTime:(double)arg0;
- (BOOL)notCache;
- (id)guideDoubleCheckConfig;
- (void)setIsDotDataFromUpdateDot:(BOOL)arg0;
- (id /* block */)canRemoveBlk;
- (id)avoidOtherBubbleType;
- (id)avoidOtherBubbleTypeSecond;
- (long long)rebootRecoverDot;
- (BOOL)isDotDataFromUpdateDot;
- (long long)redDotRemoveTime;
- (long long)dotDowngradeTime;
- (long long)redDotRemoveTimestamp;
- (long long)dotPriority;
- (long long)removeDotUserChange;
- (id)commonAvoidDisable;
- (id)rebootRecoverDotConfig;
- (void)setExposeMsg:(id)arg0;
- (void)setExposeUploadType:(unsigned long long)arg0;
- (void)setImpressionSvrData:(id)arg0;
- (void)setShowActionModel:(id)arg0;
- (void)setUploadImpressionScene:(unsigned long long)arg0;
- (void)setNearbyDotComponentId:(id)arg0;
- (void)setGrouponDotComponentId:(id)arg0;
- (void)setBubbleShowOutClick:(long long)arg0;
- (void)setNotDotUndertake:(BOOL)arg0;
- (void)setDotPriority:(long long)arg0;
- (void)setRebootRecoverDot:(long long)arg0;
- (void)setRebootRecoverDotConfig:(id)arg0;
- (void)setRemoveDotUserChange:(long long)arg0;
- (void)setRedDotRemoveTimestamp:(long long)arg0;
- (void)setRedDotRemoveTime:(long long)arg0;
- (void)setDotDowngradeTime:(long long)arg0;
- (void)setGuideDoubleCheckConfig:(id)arg0;
- (void)setFreqKeyArray:(id)arg0;
- (void)setCommonAvoidDisable:(id)arg0;
- (void)setAvoidOtherBubbleType:(id)arg0;
- (void)setAvoidOtherBubbleTypeSecond:(id)arg0;
- (void)setLimitUid:(id)arg0;
- (void)setLimitDid:(id)arg0;
- (void)setDiamondTransInfo:(id)arg0;
- (void)setBubbleTypeCategory:(id)arg0;
- (void)setNoticeCategory:(id)arg0;
- (void)setExtraFeedTrackParam:(id)arg0;
- (void)setExtraDiamondTrackParam:(id)arg0;
- (void)setForceCity:(id)arg0;
- (void)setClearForceCity:(long long)arg0;
- (void)setOpenSubPage:(id)arg0;
- (void)setEnterBubble:(id)arg0;
- (id)festivalModel;
- (void)setFestivalModel:(id)arg0;
- (long long)pageType;
- (unsigned long long)style;
- (id)init;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setAttribute:(long long)arg0;
- (long long)attribute;
- (void)setPriority:(long long)arg0;
- (BOOL)isFromCache;
- (void)setType:(unsigned long long)arg0;
- (void)setPageType:(long long)arg0;
- (void)setIsFromCache:(BOOL)arg0;
- (long long)priority;
- (void)setStyle:(unsigned long long)arg0;
- (unsigned long long)scene;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;

@end
