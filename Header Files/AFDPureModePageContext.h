//
//     Generated by private class-dump
//

@class NSString, AFDPureModeConfiguration, AWEAwemeModel, AWEPageContext, NSDictionary;
@protocol AFDSpeedManagerProtocol, AFDPureModePageEventTrackerProtocol, AFDPureModeCustomizableProtocol;

@interface AFDPureModePageContext : AWEPageContext {
    BOOL _isFromAlbumDetailPage;
    BOOL _isFromFullScreenPlayer;
    BOOL _canShowMultiMixVideo;
    BOOL _hasShownPiP;
    BOOL _isSupportPiP;
    BOOL _isPiPActive;
    BOOL _isInAlbumPreview;
    BOOL _needSetTargetContentOffset;
    BOOL _isDisplaying;
    BOOL _isHorizontalScrolling;
    AWEPageContext *_containerContext;
    AFDPureModeConfiguration *_configuration;
    id<AFDPureModeCustomizableProtocol> _customization;
    id<AFDPureModePageEventTrackerProtocol> _eventTracker;
    id<AFDSpeedManagerProtocol> _speedManager;
    AWEAwemeModel *_model;
    AWEAwemeModel *_currentModel;
    AWEAwemeModel *_fromModel;
    NSString *_enterPipMethod;
    NSString *_referString;
    NSString *_enterFrom;
    NSDictionary *_logExtraDict;
    NSString *_commercePriorityType;
    NSString *_adEventName;
    long long _currentPaginatedIndex;
    long long _totalPaginatedCount;
    long long _playProgressThreshold;
}

@property (nonatomic) long long playProgressThreshold;
@property (retain, nonatomic) AWEPageContext *containerContext;
@property (retain, nonatomic) AFDPureModeConfiguration *configuration;
@property (weak, nonatomic) id<AFDPureModeCustomizableProtocol> customization;
@property (weak, nonatomic) id<AFDPureModePageEventTrackerProtocol> eventTracker;
@property (weak, nonatomic) id<AFDSpeedManagerProtocol> speedManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (copy, nonatomic) NSString *enterPipMethod;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *commercePriorityType;
@property (nonatomic) BOOL isFromAlbumDetailPage;
@property (nonatomic) BOOL isFromFullScreenPlayer;
@property (nonatomic) BOOL canShowMultiMixVideo;
@property (nonatomic) BOOL hasShownPiP;
@property (nonatomic) BOOL isSupportPiP;
@property (nonatomic) BOOL isPiPActive;
@property (copy, nonatomic) NSString *adEventName;
@property (nonatomic) BOOL isInAlbumPreview;
@property (nonatomic) BOOL needSetTargetContentOffset;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL isHorizontalScrolling;
@property (nonatomic) long long currentPaginatedIndex;
@property (nonatomic) long long totalPaginatedCount;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (BOOL)isFromAlbumDetailPage;
- (id)speedManager;
- (void)setSpeedManager:(id)arg0;
- (long long)playProgressThreshold;
- (long long)currentPaginatedIndex;
- (void)setCurrentPaginatedIndex:(long long)arg0;
- (long long)totalPaginatedCount;
- (void)setTotalPaginatedCount:(long long)arg0;
- (void)setIsDisplaying:(BOOL)arg0;
- (BOOL)canShowMultiMixVideo;
- (BOOL)isRichAwemeAvalibleForAweme:(id)arg0;
- (BOOL)needSetTargetContentOffset;
- (void)setNeedSetTargetContentOffset:(BOOL)arg0;
- (void)setIsFromAlbumDetailPage:(BOOL)arg0;
- (id)commercePriorityType;
- (BOOL)isHorizontalScrolling;
- (void)setSpeedModeNextEnterMethod:(id)arg0;
- (BOOL)canShowSpeedControlWithModel:(id)arg0;
- (BOOL)isInAlbumPreview;
- (void)setPlayProgressThreshold:(long long)arg0;
- (BOOL)pinchPiPEnable;
- (BOOL)isMultipleContent;
- (BOOL)isOnlyOneContent;
- (BOOL)isAlbumContent;
- (BOOL)isCloseFriendContent;
- (BOOL)checkIsSupportPiP;
- (id)enterPipMethod;
- (void)setEnterPipMethod:(id)arg0;
- (void)setCommercePriorityType:(id)arg0;
- (BOOL)isFromFullScreenPlayer;
- (void)setIsFromFullScreenPlayer:(BOOL)arg0;
- (void)setCanShowMultiMixVideo:(BOOL)arg0;
- (BOOL)hasShownPiP;
- (void)setHasShownPiP:(BOOL)arg0;
- (BOOL)isSupportPiP;
- (void)setIsSupportPiP:(BOOL)arg0;
- (BOOL)isPiPActive;
- (void)setIsPiPActive:(BOOL)arg0;
- (void)setIsInAlbumPreview:(BOOL)arg0;
- (void)setIsHorizontalScrolling:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)eventTracker;
- (id)model;
- (id)configuration;
- (void)setConfiguration:(id)arg0;
- (BOOL)isDisplaying;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;
- (id)customization;
- (void)setCustomization:(id)arg0;
- (void)setEventTracker:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end