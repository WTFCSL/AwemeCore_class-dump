//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSDateFormatter, NSString, NSMutableArray;
@protocol IESLiveClientAIInjector;

@interface IESLiveAIDataCenter : NSObject <IESLiveTrackerDelegate> {
    BOOL _isInInnerRoom;
    BOOL _needUploadFeatureForLeaveLive;
    NSMutableArray *_roomsFeaturesArray;
    NSMutableArray *_roomsFeaturesMinSizeArray;
    NSMutableArray *_roomsFeaturesSingleArray;
    NSMutableDictionary *_featureDetails;
    NSMutableDictionary *_featureDetailsB;
    NSMutableDictionary *_featureDetailsMinSize;
    NSMutableArray *_skipRoomsFeaturesArray;
    NSMutableDictionary *_featureDetailsPreView;
    NSMutableDictionary *_featureDetailsPreViewMinSize;
    NSMutableArray *_trackEventArray;
    NSMutableArray *_trackEventArrayB;
    NSDictionary *_featureToIndexMap;
    NSDictionary *_featureToIndexMapPreview;
    NSDateFormatter *_formatter;
    double _enterLiveTime;
    double _enterPreViewLiveTime;
    id<IESLiveClientAIInjector> _clientAIInjector;
}

@property (retain, nonatomic) NSMutableArray *roomsFeaturesArray;
@property (retain, nonatomic) NSMutableArray *roomsFeaturesMinSizeArray;
@property (retain, nonatomic) NSMutableArray *roomsFeaturesSingleArray;
@property (retain, nonatomic) NSMutableDictionary *featureDetails;
@property (retain, nonatomic) NSMutableDictionary *featureDetailsB;
@property (retain, nonatomic) NSMutableDictionary *featureDetailsMinSize;
@property (retain, nonatomic) NSMutableArray *skipRoomsFeaturesArray;
@property (retain, nonatomic) NSMutableDictionary *featureDetailsPreView;
@property (retain, nonatomic) NSMutableDictionary *featureDetailsPreViewMinSize;
@property (retain, nonatomic) NSMutableArray *trackEventArray;
@property (retain, nonatomic) NSMutableArray *trackEventArrayB;
@property (retain, nonatomic) NSDictionary *featureToIndexMap;
@property (retain, nonatomic) NSDictionary *featureToIndexMapPreview;
@property (retain, nonatomic) NSDateFormatter *formatter;
@property (nonatomic) double enterLiveTime;
@property (nonatomic) double enterPreViewLiveTime;
@property (nonatomic) BOOL isInInnerRoom;
@property (nonatomic) BOOL needUploadFeatureForLeaveLive;
@property (retain, nonatomic) id<IESLiveClientAIInjector> clientAIInjector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userService;
- (id)getSingleInnerRoomFeatureArray;
- (id)getSkipRoomFeatures;
- (void)updateRealTimeFeatures:(id)arg0 updateValue:(id)arg1;
- (void)updateRealTimeFeaturesPreviewAdd:(id)arg0 addValue:(id)arg1;
- (id)getRealTimeFeaturesPreViewString:(id)arg0;
- (id)getRealTimeFeaturesPreViewNumber:(id)arg0;
- (void)recordEnterLive;
- (void)recordExitLive;
- (void)recordEnterPreViewLive;
- (void)willCommitTrackEvent:(id)arg0 params:(id)arg1;
- (double)enterLiveTime;
- (id)currentAudienceVCRoomModel;
- (void)setEnterLiveTime:(double)arg0;
- (id)clientAIInjector;
- (void)setClientAIInjector:(id)arg0;
- (void)setFeatureDetails:(id)arg0;
- (void)setFeatureDetailsPreView:(id)arg0;
- (void)setTrackEventArray:(id)arg0;
- (void)setRoomsFeaturesArray:(id)arg0;
- (void)setRoomsFeaturesMinSizeArray:(id)arg0;
- (void)setRoomsFeaturesSingleArray:(id)arg0;
- (void)setSkipRoomsFeaturesArray:(id)arg0;
- (void)setFeatureDetailsMinSize:(id)arg0;
- (void)setFeatureDetailsPreViewMinSize:(id)arg0;
- (id)roomsFeaturesArray;
- (id)recordPerformanceFeature;
- (id)roomsFeaturesMinSizeArray;
- (id)roomsFeaturesSingleArray;
- (id)skipRoomsFeaturesArray;
- (double)enterPreViewLiveTime;
- (id)featureDetailsPreView;
- (void)transformPreviewFeaturesToMinSize;
- (id)featureDetailsPreViewMinSize;
- (void)removePreviewFeature;
- (id)featureDetails;
- (void)setFeatureDetailsB:(id)arg0;
- (id)trackEventArray;
- (void)setTrackEventArrayB:(id)arg0;
- (id)featureDetailsB;
- (void)sumCurrentRoomFeatures;
- (void)transformFeaturesToMinSize;
- (id)featureDetailsMinSize;
- (id)featureToIndexMap;
- (id)featureToIndexMapPreview;
- (id)trackEventArrayB;
- (void)transformFeatureDicAtoB;
- (void)saveCurrentRoomFeatures;
- (void)updateRealTimeFeaturesPreview:(id)arg0 updateValue:(id)arg1;
- (void)removeRoomFeature;
- (void)initRoomFeautres;
- (void)currentRoomCommonFeatures;
- (BOOL)needUploadFeatureForLeaveLive;
- (void)setNeedUploadFeatureForLeaveLive:(BOOL)arg0;
- (void)setIsInInnerRoom:(BOOL)arg0;
- (id)slidePerfMonitor;
- (void)setEnterPreViewLiveTime:(double)arg0;
- (void)trackEventRecordFeatures:(id)arg0 params:(id)arg1;
- (id)getRoomTrackEventArray;
- (id)getRoomTrackEventArrayMinSize;
- (id)getPreviewRoomFeatureDetails;
- (void)setFeatureToIndexMap:(id)arg0;
- (void)setFeatureToIndexMapPreview:(id)arg0;
- (BOOL)isInInnerRoom;
- (id)init;
- (void).cxx_destruct;
- (id)formatter;
- (void)setFormatter:(id)arg0;

@end