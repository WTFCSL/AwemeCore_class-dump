//
//     Generated by private class-dump
//

@class NSString, AWEListDataController, NSDictionary;

@interface AWEFullPageRecommendViewControllerConfig : NSObject {
    BOOL _showStickerHeader;
    BOOL _autoInitFetchData;
    BOOL _canShowLongPressPanel;
    BOOL _waterfallAllowMix;
    BOOL _useTopNavigationVCPush;
    BOOL _enableSameFeed;
    BOOL _showCoverImageIcon;
    BOOL _showCoverVideoIcon;
    BOOL _needTrackEnterPage;
    BOOL _needTrackStayTime;
    BOOL _needTrackEmptyPageShow;
    BOOL _needTrackFristSlide;
    BOOL _needTrackPrefetchList;
    AWEListDataController *_dataController;
    NSString *_cardShowEventName;
    NSString *_cardClickEventName;
    NSDictionary *_logExtra;
    NSString *_isGraphicDetailRecommend;
}

@property (nonatomic) BOOL showStickerHeader;
@property (nonatomic) BOOL autoInitFetchData;
@property (nonatomic) BOOL canShowLongPressPanel;
@property (nonatomic) BOOL waterfallAllowMix;
@property (nonatomic) BOOL useTopNavigationVCPush;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) BOOL enableSameFeed;
@property (nonatomic) BOOL showCoverImageIcon;
@property (nonatomic) BOOL showCoverVideoIcon;
@property (copy, nonatomic) NSString *cardShowEventName;
@property (copy, nonatomic) NSString *cardClickEventName;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL needTrackEnterPage;
@property (nonatomic) BOOL needTrackStayTime;
@property (nonatomic) BOOL needTrackEmptyPageShow;
@property (nonatomic) BOOL needTrackFristSlide;
@property (nonatomic) BOOL needTrackPrefetchList;
@property (copy, nonatomic) NSString *isGraphicDetailRecommend;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setDataController:(id)arg0;
- (BOOL)canShowLongPressPanel;
- (void)setShowCoverVideoIcon:(BOOL)arg0;
- (void)setUseTopNavigationVCPush:(BOOL)arg0;
- (void)setShowCoverImageIcon:(BOOL)arg0;
- (id)initWithDataController:(id)arg0;
- (void)setCardShowEventName:(id)arg0;
- (void)setCardClickEventName:(id)arg0;
- (void)setIsGraphicDetailRecommend:(id)arg0;
- (void)setWaterfallAllowMix:(BOOL)arg0;
- (id)cardShowEventName;
- (id)isGraphicDetailRecommend;
- (id)cardClickEventName;
- (BOOL)waterfallAllowMix;
- (BOOL)useTopNavigationVCPush;
- (BOOL)showCoverImageIcon;
- (BOOL)showCoverVideoIcon;
- (BOOL)showStickerHeader;
- (void)setShowStickerHeader:(BOOL)arg0;
- (BOOL)autoInitFetchData;
- (void)setAutoInitFetchData:(BOOL)arg0;
- (void)setCanShowLongPressPanel:(BOOL)arg0;
- (BOOL)enableSameFeed;
- (void)setEnableSameFeed:(BOOL)arg0;
- (BOOL)needTrackEnterPage;
- (void)setNeedTrackEnterPage:(BOOL)arg0;
- (BOOL)needTrackStayTime;
- (void)setNeedTrackStayTime:(BOOL)arg0;
- (BOOL)needTrackEmptyPageShow;
- (void)setNeedTrackEmptyPageShow:(BOOL)arg0;
- (BOOL)needTrackFristSlide;
- (void)setNeedTrackFristSlide:(BOOL)arg0;
- (BOOL)needTrackPrefetchList;
- (void)setNeedTrackPrefetchList:(BOOL)arg0;
- (void).cxx_destruct;
- (id)dataController;

@end