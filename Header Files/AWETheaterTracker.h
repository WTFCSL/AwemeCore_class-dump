//
//     Generated by private class-dump
//

@class AWETheaterPageContext, NSMutableSet;

@interface AWETheaterTracker : NSObject {
    AWETheaterPageContext *_context;
    NSMutableSet *_uploadedSet;
}

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) NSMutableSet *uploadedSet;

+ (void)trackCommonSectionImageFailEvent:(id)arg0 moduleName:(id)arg1;
+ (void)trackLongVideoHighlightPlay:(id)arg0 enterFrom:(id)arg1 moduleName:(id)arg2;
+ (void)trackTheaterEntranceGuideButtonClick:(id)arg0 buttonName:(id)arg1 section:(id)arg2 logPassBack:(id)arg3;
+ (void)trackMoreFeedSectionImageFailEvent:(id)arg0;
+ (void)trackOutAppNotifyGuideWithEventType:(id)arg0 enterFrom:(id)arg1;
+ (id)commonSectionSpuType:(id)arg0;
+ (id)commonSectionSpuID:(id)arg0;
+ (long long)commonSectionPaymentStatus:(id)arg0;
+ (long long)moreFeedSectionPaymentStatus:(id)arg0;
+ (id)liveSpuID:(id)arg0;
+ (void)trackTheaterEntranceGuideClickAction:(id)arg0 actionType:(id)arg1;
+ (void)trackTheaterAddGuideResultWithParams:(id)arg0;

- (id)commonParams;
- (void)trackEventWithName:(id)arg0 params:(id)arg1;
- (void)trackLVideoClickWithLogExtraDict:(id)arg0;
- (id)uploadedSet;
- (void)trackBaseLVideoShowWithLogExtraDict:(id)arg0 withTrackName:(id)arg1;
- (BOOL)needTrackLVideoShow:(id)arg0;
- (void)updateUploadedSet:(id)arg0;
- (void)trackBaseBannerPlayWithLogExtraDict:(id)arg0 withTrackName:(id)arg1;
- (void)trackVideoPlayFinishWithLogExtraDict:(id)arg0;
- (void)trackFinishPaymentTrialEndWithModel:(id)arg0;
- (void)trackEnterLVideoPage:(id)arg0;
- (void)trackLVideoShowWithLogExtraDict:(id)arg0;
- (void)trackVajraShowWithLogExtraDict:(id)arg0 filterName:(id)arg1;
- (void)trackStayTimeWithEnterFrom:(id)arg0 duration:(double)arg1;
- (void)trackFeedSharePannelWithScheme:(id)arg0;
- (void)setUploadedSet:(id)arg0;
- (id)commonSectionParamsWithSectionItem:(id)arg0 moduleName:(id)arg1 rank:(long long)arg2;
- (void)trackLVideoEntranceGuideShow:(id)arg0;
- (id)moreFeedSectionParamsWithSectionItem:(id)arg0 rank:(long long)arg1;
- (void)trackTheaterMoreFeedDisplayedWithModel:(id)arg0;
- (id)roomStatus:(id)arg0;
- (void)trackEnterTheaterMonitor:(long long)arg0 error:(id)arg1 errorType:(long long)arg2 trackerParams:(id)arg3;
- (void)trackTheaterMoreFeedMonitor:(long long)arg0 fetchType:(unsigned long long)arg1 error:(id)arg2 errorType:(long long)arg3 trackerParams:(id)arg4;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)reset;

@end