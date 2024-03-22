//
//     Generated by private class-dump
//

@class IESLiveWindowEntranceModel, NSString, NSArray, NSDictionary, IESLiveNewAudienceFinishAnchorModel, IESLiveSitckerReservation, IESLiveNewAudienceEndingReplayInfoModel, NSNumber;

@interface IESLiveNewAudienceFinishResponseModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    IESLiveNewAudienceEndingReplayInfoModel *_endingReplayInfo;
    IESLiveWindowEntranceModel *_windowEntranceInfo;
}

@property (retain, nonatomic) NSArray *roomList;
@property (retain, nonatomic) NSDictionary *sources;
@property (retain, nonatomic) IESLiveNewAudienceFinishAnchorModel *anchorModel;
@property (retain, nonatomic) IESLiveSitckerReservation *reservation;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSNumber *nextWaitSeconds;
@property (retain, nonatomic) IESLiveNewAudienceEndingReplayInfoModel *endingReplayInfo;
@property (retain, nonatomic) IESLiveWindowEntranceModel *windowEntranceInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)roomListJSONTransformer;
+ (id)anchorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)windowEntranceInfo;
- (void)setWindowEntranceInfo:(id)arg0;
- (id)endingReplayInfo;
- (void)setEndingReplayInfo:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;

@end