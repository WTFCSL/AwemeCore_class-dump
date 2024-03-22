//
//     Generated by private class-dump
//

@class RTVFinishForwardModel, NSString, NSDictionary, RTVBehaviorOptions, NSNumber;

@interface RTVXRShareFeedAction : RTVXRAction {
    long long _enterFrom;
    RTVFinishForwardModel *_finishForwardModel;
    NSString *_feedItemID;
    NSNumber *_feedItemType;
    NSDictionary *_rawData;
    RTVBehaviorOptions *_behaviorOptions;
}

@property (readonly, nonatomic) long long enterFrom;
@property (readonly, nonatomic) RTVFinishForwardModel *finishForwardModel;
@property (readonly, copy, nonatomic) NSString *feedItemID;
@property (readonly, nonatomic) NSNumber *feedItemType;
@property (readonly, copy, nonatomic) NSDictionary *rawData;
@property (readonly, copy, nonatomic) RTVBehaviorOptions *behaviorOptions;

- (long long)enterFrom;
- (void)updateRawData:(id)arg0;
- (void)updateEnterFrom:(long long)arg0;
- (void)updateBehaviorOptions:(id)arg0;
- (void)updateFeedItemID:(id)arg0;
- (void)updateItemType:(id)arg0;
- (void)updateFinishForwardModel:(id)arg0;
- (id)feedItemID;
- (id)feedItemType;
- (id)finishForwardModel;
- (void).cxx_destruct;
- (id)rawData;
- (id)behaviorOptions;

@end