//
//     Generated by private class-dump
//

@class IESLiveRealTimeFeaturesAPI, IESLiveRoomTagV3API, NSMutableDictionary, NSDictionary, NSString, IESLiveNewAIDataCenter;

@interface IESLiveNewAIManager : NSObject <IESLiveNewAIService> {
    IESLiveNewAIDataCenter *_dataCenter;
    IESLiveRealTimeFeaturesAPI *_realTimeFeaturesApi;
    IESLiveRoomTagV3API *_roomTagV3Api;
    NSMutableDictionary *_roomTagDictionary;
    NSDictionary *_liveClientAITag;
}

@property (retain, nonatomic) IESLiveNewAIDataCenter *dataCenter;
@property (retain, nonatomic) IESLiveRealTimeFeaturesAPI *realTimeFeaturesApi;
@property (retain, nonatomic) IESLiveRoomTagV3API *roomTagV3Api;
@property (retain, nonatomic) NSMutableDictionary *roomTagDictionary;
@property (retain, nonatomic) NSDictionary *liveClientAITag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)dataCenter;
- (void)setDataCenter:(id)arg0;
- (id)getInnerFeature;
- (id)getIndexInnerFeature;
- (id)getOuterFeature:(id)arg0;
- (id)getIndexOuterFeature:(id)arg0;
- (id)getInnerSkipFeature;
- (id)getOuterSkipFeature:(id)arg0;
- (void)exitLive;
- (void)outerLeave:(id)arg0;
- (void)getRoomV3Tag:(id)arg0 completion:(id /* block */)arg1;
- (id)getCurrentRoomV3Tag:(id)arg0;
- (id)getCurrentRoomV3TagDictionary:(id)arg0;
- (long long)getCurrentRoomV3Tag:(id)arg0 withLevel:(long long)arg1;
- (id)roomTrackerCharacterCollector;
- (id)trackerInterceptor;
- (void)setAITag:(id)arg0;
- (id)getAITag;
- (void)uploadRealTimeFeatures;
- (id)realTimeFeaturesApi;
- (id)roomTagV3Api;
- (id)roomTagDictionary;
- (void)setRealTimeFeaturesApi:(id)arg0;
- (void)setRoomTagV3Api:(id)arg0;
- (void)setRoomTagDictionary:(id)arg0;
- (void)setLiveClientAITag:(id)arg0;
- (id)liveClientAITag;
- (id)init;
- (void).cxx_destruct;

@end
