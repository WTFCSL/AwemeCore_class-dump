//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString, NSDictionary, UIImage, NSIndexPath, IESLiveEnterRoomBusinessParamsArray;
@protocol HTSLiveRoomCollectionDelegate;

@interface IESLiveEnterRoomBusinessContext : NSObject {
    BOOL _openDrawer;
    BOOL _vsHasAppointmentTag;
    BOOL _vsIsInnerFromDrawer;
    IESLiveEnterRoomBusinessParamsArray *_businessParams;
    id<HTSLiveRoomCollectionDelegate> _delegate;
    id<HTSLiveRoomCollectionDelegate> _outsideDelegate;
    NSArray *_innerFeedInjections;
    id _audienceViewControllerDelegate;
    NSString *_matchID;
    NSString *_sharePlatform;
    UIImage *_defaultCoverImage;
}

@property (weak, nonatomic) IESLiveEnterRoomBusinessParamsArray *businessParams;
@property (retain, nonatomic) id<HTSLiveRoomCollectionDelegate> delegate;
@property (weak, nonatomic) id<HTSLiveRoomCollectionDelegate> outsideDelegate;
@property (retain, nonatomic) NSArray *innerFeedInjections;
@property (weak, nonatomic) id audienceViewControllerDelegate;
@property (retain, nonatomic) NSIndexPath *originIndexPath;
@property (copy, nonatomic) NSString *innerFeedRequestFrom;
@property (retain, nonatomic) NSNumber *innerFeedRequestMaxTime;
@property (copy, nonatomic) NSString *innerFeedUnreadExtra;
@property (copy, nonatomic) NSString *innerFeedURL;
@property (copy, nonatomic) NSString *dynamicFeedId;
@property (retain, nonatomic) NSNumber *liveRoomMode;
@property (retain, nonatomic) NSString *distributeUserID;
@property (nonatomic) BOOL isRutrunBack;
@property (nonatomic) BOOL isFromMatchRoom;
@property (copy, nonatomic) NSDictionary *innerFeedExtraReqParams;
@property (retain, nonatomic) NSDictionary *vsParams;
@property (nonatomic) BOOL vsEnableProfileSameFeed;
@property (copy, nonatomic) NSString *originCameraIDstr;
@property (retain, nonatomic) NSNumber *multiTabID;
@property (copy, nonatomic) NSString *matchID;
@property (retain, nonatomic) NSNumber *raceCollectionItemId;
@property (copy, nonatomic) NSString *logParams;
@property (nonatomic) BOOL openDrawer;
@property (nonatomic) BOOL vsHasAppointmentTag;
@property (nonatomic) BOOL vsIsInnerFromDrawer;
@property (copy, nonatomic) NSString *originUserID;
@property (nonatomic) BOOL allowDislike;
@property (nonatomic) BOOL canGoBack;
@property (nonatomic) BOOL disableBackTip;
@property (nonatomic) BOOL enableUseOuterFeed;
@property (nonatomic) BOOL goLiveSquare;
@property (nonatomic) BOOL pushWithBack;
@property (copy, nonatomic) NSString *selectedCityCode;
@property (nonatomic) BOOL disableRepeatedlyEnter;
@property (copy, nonatomic) NSString *followGroupId;
@property (copy, nonatomic) NSString *followGroupType;
@property (nonatomic) BOOL isEnterFromSchema;
@property (nonatomic) BOOL isInnerFromDrawer;
@property (retain, nonatomic) NSNumber *tabId;
@property (copy, nonatomic) NSString *originEnterFrom;
@property (copy, nonatomic) NSString *originEnterMethod;
@property (copy, nonatomic) NSString *sharePlatform;
@property (copy, nonatomic) NSString *schemaExtraParams;
@property (retain, nonatomic) NSString *extraPangleSchemeParams;
@property (retain, nonatomic) NSString *liveShortTouchParams;
@property (retain, nonatomic) NSDictionary *feedbackCard;
@property (nonatomic) BOOL forbidAutoLoadMore;
@property (retain, nonatomic) NSString *ecomLiveParams;
@property (copy, nonatomic) NSString *ecomGoodsList;
@property (nonatomic) BOOL needVideoId;
@property (nonatomic) BOOL withAggregateColumn;
@property (retain, nonatomic) NSNumber *innerFeedHasMore;
@property (retain, nonatomic) NSString *relevantCategory;
@property (retain, nonatomic) NSString *whiteCateFirstTagId;
@property (retain, nonatomic) NSString *aggregateColumnName;
@property (retain, nonatomic) NSString *aggregateBannerId;
@property (retain, nonatomic) NSNumber *roomChannelInviteId;
@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL enterByPinch;
@property (nonatomic) BOOL isFromPreviewEnter;
@property (retain, nonatomic) NSNumber *seekTime;
@property (copy, nonatomic) NSString *shopGuideId;
@property (retain, nonatomic) NSDictionary *extendActionParams;
@property (copy, nonatomic) id /* block */ micLinkUserIDs;
@property (nonatomic) BOOL isFromMixedSlippery;
@property (nonatomic) BOOL enableInnerDrawFeedOptimize;
@property (retain, nonatomic) UIImage *defaultCoverImage;
@property (copy, nonatomic) NSString *sourceKey;
@property (retain, nonatomic) NSNumber *latestWatchTime;
@property (retain, nonatomic) NSNumber *playbackStartDuration;
@property (retain, nonatomic) NSNumber *playbackCreateTime;
@property (copy, nonatomic) NSString *strategySDKKey;

- (id)sharePlatform;
- (void)setSharePlatform:(id)arg0;
- (id)liveRoomMode;
- (BOOL)disableBackTip;
- (void)setDisableBackTip:(BOOL)arg0;
- (BOOL)pushWithBack;
- (void)setPushWithBack:(BOOL)arg0;
- (BOOL)goLiveSquare;
- (void)setGoLiveSquare:(BOOL)arg0;
- (BOOL)withAggregateColumn;
- (void)setWithAggregateColumn:(BOOL)arg0;
- (BOOL)vsHasAppointmentTag;
- (void)setVsHasAppointmentTag:(BOOL)arg0;
- (BOOL)vsIsInnerFromDrawer;
- (void)setVsIsInnerFromDrawer:(BOOL)arg0;
- (void)setCanGoBack:(BOOL)arg0;
- (id)ecomLiveParams;
- (void)setEcomLiveParams:(id)arg0;
- (id)tabId;
- (id)businessParams;
- (id)defaultCoverImage;
- (void)setTabId:(id)arg0;
- (id)shopGuideId;
- (void)setShopGuideId:(id)arg0;
- (void)setBusinessParams:(id)arg0;
- (id)logParams;
- (void)setLogParams:(id)arg0;
- (void)setFollowGroupType:(id)arg0;
- (id)followGroupType;
- (void)setOriginEnterFrom:(id)arg0;
- (id)originEnterFrom;
- (void)setIsFromPreviewEnter:(BOOL)arg0;
- (id)roomChannelInviteId;
- (void)setIsFromMixedSlippery:(BOOL)arg0;
- (id)feedbackCard;
- (void)setLiveRoomMode:(id)arg0;
- (void)setDefaultCoverImage:(id)arg0;
- (void)setSelectedCityCode:(id)arg0;
- (void)setEnableInnerDrawFeedOptimize:(BOOL)arg0;
- (void)setEnterByPinch:(BOOL)arg0;
- (void)setExtendActionParams:(id)arg0;
- (void)setFeedbackCard:(id)arg0;
- (void)setInnerFeedInjections:(id)arg0;
- (id)strategySDKKey;
- (void)setStrategySDKKey:(id)arg0;
- (id)extendActionParams;
- (BOOL)enterByPinch;
- (void)setInnerFeedRequestFrom:(id)arg0;
- (void)setVsParams:(id)arg0;
- (void)setOriginUserID:(id)arg0;
- (id)selectedCityCode;
- (id)ecomGoodsList;
- (void)setEcomGoodsList:(id)arg0;
- (BOOL)needVideoId;
- (void)setNeedVideoId:(BOOL)arg0;
- (void)setInnerFeedURL:(id)arg0;
- (void)setInnerFeedRequestMaxTime:(id)arg0;
- (void)setInnerFeedUnreadExtra:(id)arg0;
- (id)innerFeedURL;
- (id)innerFeedRequestFrom;
- (id)vsParams;
- (void)setAudienceViewControllerDelegate:(id)arg0;
- (id)innerFeedInjections;
- (BOOL)isFromPreviewEnter;
- (id /* block */)micLinkUserIDs;
- (void)setMicLinkUserIDs:(id /* block */)arg0;
- (BOOL)enableInnerDrawFeedOptimize;
- (void)setVsEnableProfileSameFeed:(BOOL)arg0;
- (void)setForbidAutoLoadMore:(BOOL)arg0;
- (void)setRaceCollectionItemId:(id)arg0;
- (void)setMultiTabID:(id)arg0;
- (id)multiTabID;
- (id)raceCollectionItemId;
- (id)originIndexPath;
- (void)setSchemaExtraParams:(id)arg0;
- (id)schemaExtraParams;
- (id)innerFeedHasMore;
- (id)aggregateColumnName;
- (BOOL)isInnerFromDrawer;
- (void)setIsInnerFromDrawer:(BOOL)arg0;
- (void)setRoomChannelInviteId:(id)arg0;
- (id)liveShortTouchParams;
- (id)extraPangleSchemeParams;
- (id)originEnterMethod;
- (void)setOriginEnterMethod:(id)arg0;
- (BOOL)isFromMatchRoom;
- (void)setIsFromMatchRoom:(BOOL)arg0;
- (BOOL)openDrawer;
- (id)latestWatchTime;
- (void)setLatestWatchTime:(id)arg0;
- (void)setInnerFeedExtraReqParams:(id)arg0;
- (BOOL)isRutrunBack;
- (void)setIsRutrunBack:(BOOL)arg0;
- (void)setOriginCameraIDstr:(id)arg0;
- (id)originCameraIDstr;
- (void)setExtraPangleSchemeParams:(id)arg0;
- (void)setLiveShortTouchParams:(id)arg0;
- (void)setInnerFeedHasMore:(id)arg0;
- (void)setAggregateColumnName:(id)arg0;
- (void)setOpenDrawer:(BOOL)arg0;
- (id)audienceViewControllerDelegate;
- (BOOL)isFromMixedSlippery;
- (BOOL)isEnterFromSchema;
- (void)setIsEnterFromSchema:(BOOL)arg0;
- (BOOL)disableRepeatedlyEnter;
- (void)setDisableRepeatedlyEnter:(BOOL)arg0;
- (id)aggregateBannerId;
- (void)setAggregateBannerId:(id)arg0;
- (id)distributeUserID;
- (void)setAllowDislike:(BOOL)arg0;
- (void)setOriginIndexPath:(id)arg0;
- (id)innerFeedRequestMaxTime;
- (id)innerFeedUnreadExtra;
- (void)setDynamicFeedId:(id)arg0;
- (id)dynamicFeedId;
- (void)setDistributeUserID:(id)arg0;
- (id)innerFeedExtraReqParams;
- (BOOL)vsEnableProfileSameFeed;
- (id)originUserID;
- (BOOL)allowDislike;
- (void)setEnableUseOuterFeed:(BOOL)arg0;
- (BOOL)enableUseOuterFeed;
- (void)setFollowGroupId:(id)arg0;
- (id)followGroupId;
- (BOOL)forbidAutoLoadMore;
- (void)setRelevantCategory:(id)arg0;
- (id)relevantCategory;
- (void)setWhiteCateFirstTagId:(id)arg0;
- (id)whiteCateFirstTagId;
- (void)setPlaybackStartDuration:(id)arg0;
- (id)playbackStartDuration;
- (void)setPlaybackCreateTime:(id)arg0;
- (id)playbackCreateTime;
- (id)outsideDelegate;
- (void)setOutsideDelegate:(id)arg0;
- (void).cxx_destruct;
- (BOOL)canGoBack;
- (void)setOffset:(id)arg0;
- (void)setSeekTime:(id)arg0;
- (id)offset;
- (id)delegate;
- (id)seekTime;
- (void)setDelegate:(id)arg0;
- (id)sourceKey;
- (id)matchID;
- (void)setMatchID:(id)arg0;
- (void)setSourceKey:(id)arg0;

@end