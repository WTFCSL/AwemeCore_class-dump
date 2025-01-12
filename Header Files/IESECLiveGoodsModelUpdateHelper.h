//
//     Generated by private class-dump
//

@class IESECLiveApi, IESECLiveContext, NSString, IESECLiveRandomDelayTimer;
@protocol IESECLiveGoodsModelUpdateHelperDelegate;

@interface IESECLiveGoodsModelUpdateHelper : NSObject <IESECLiveEventPlugin, IESECLiveMessageSubscriber, IESECLiveMessageSubscriber, IESECMessageSubscriber> {
    id<IESECLiveGoodsModelUpdateHelperDelegate> _delegate;
    long long _updateScene;
    long long _updateRequestFrom;
    IESECLiveApi *_api;
    IESECLiveContext *_liveContext;
    IESECLiveRandomDelayTimer *_peakReduce;
}

@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveGoodsModelUpdateHelperDelegate> delegate;
@property (nonatomic) long long updateScene;
@property (nonatomic) long long updateRequestFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentCardModel;
- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)initWithLiveContext:(id)arg0;
- (void)messageReceived_IESECProductUpdateMessage:(id)arg0;
- (void)messageReceived_IESECLiveMarketingMessage:(id)arg0;
- (void)setUpdateScene:(long long)arg0;
- (void)setUpdateRequestFrom:(long long)arg0;
- (id)registerMessageClasses;
- (void)updateGoodsAllInfoWithExtraInfo:(id)arg0;
- (void)receive:(id)arg0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (id)peakReduce;
- (void)setPeakReduce:(id)arg0;
- (void)fetchGoodsCampaignWithGoodsModelList:(id)arg0 callback:(id /* block */)arg1;
- (void)renewGoodsPriceWithProductIDs:(id)arg0 promotionIDs:(id)arg1;
- (long long)updateScene;
- (BOOL)p_delegateShouldUpdate;
- (void)p_updateCardModel:(id)arg0 refreshMessage:(id)arg1;
- (id)wholeGoodsModelList;
- (void)p_updateGoodsModels:(id)arg0 message:(id)arg1;
- (void)p_updateGoodsModels:(id)arg0 marketingMessage:(id)arg1;
- (void)updateTaskInfoWithMarketingMessage:(id)arg0;
- (void)p_updateGoodsModels:(id)arg0 atIndexPaths:(id)arg1 withUpdateType:(long long)arg2 extraInfo:(id)arg3;
- (void)p_updateCardModel:(id)arg0 extraInfo:(id)arg1;
- (long long)updateRequestFrom;
- (void)p_updateWithType:(long long)arg0 extraInfo:(id)arg1;
- (void)messageReceived_IESECProductRefreshMessage:(id)arg0;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
