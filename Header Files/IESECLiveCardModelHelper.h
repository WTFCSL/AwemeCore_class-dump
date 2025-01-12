//
//     Generated by private class-dump
//

@class IESECLiveGoodsModelUpdateHelper, IESECLiveApi, IESECLiveContext, IESECLiveCardDataModel, NSString;
@protocol IESECLiveCardModelUpdateDelegate;

@interface IESECLiveCardModelHelper : NSObject <IESECLiveGoodsModelUpdateHelperDelegate, IESECLiveEventPlugin, IESECLiveMessageSubscriber> {
    BOOL _existHalfScreen;
    id<IESECLiveCardModelUpdateDelegate> _cardView;
    IESECLiveGoodsModelUpdateHelper *_modelUpdateHelper;
    IESECLiveCardDataModel *_readyCardData;
    long long _enterFromSource;
    IESECLiveContext *_liveContext;
    IESECLiveApi *_api;
}

@property (retain, nonatomic) IESECLiveGoodsModelUpdateHelper *modelUpdateHelper;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveApi *api;
@property (nonatomic) BOOL existHalfScreen;
@property (weak, nonatomic) id<IESECLiveCardModelUpdateDelegate> cardView;
@property (retain, nonatomic) IESECLiveCardDataModel *readyCardData;
@property (nonatomic) long long enterFromSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)fetchParams;
- (id)initWithLiveContext:(id)arg0;
- (void)messageReceived_IESECLiveCommonMessage:(id)arg0;
- (void)messageReceived_IESECProductUpdateMessage:(id)arg0;
- (void)messageReceived_IESECLiveMarketingMessage:(id)arg0;
- (id)registerMessageClasses;
- (BOOL)p_delegateEnableUpdate;
- (void)p_delegateUpdateCardModel:(id)arg0;
- (id)cardDataModelToBeUpdated;
- (id)readyCardData;
- (BOOL)p_unableShowMsgCardConsiderHalfScreen;
- (void)setReadyCardData:(id)arg0;
- (void)p_updateRelatedCardByRequestWithExtraParams:(id)arg0;
- (long long)enterFromSource;
- (void)fetchCardModel:(id)arg0 compeltion:(id /* block */)arg1;
- (void)setExistHalfScreen:(BOOL)arg0;
- (BOOL)existHalfScreen;
- (void)fetchRelatedCardModel:(id)arg0 completion:(id /* block */)arg1;
- (id)goodsModelToBeUpdated;
- (void)didUpdateGoodsModels:(id)arg0 atIndexPaths:(id)arg1 withUpdateType:(long long)arg2 extraInfo:(id)arg3;
- (void)didUpdateCardModel:(id)arg0 extraInfo:(id)arg1;
- (void)didUpdateCardModelWithApiPath:(id)arg0 extraParams:(id)arg1;
- (void)receive:(id)arg0;
- (id)consumedEventsSet;
- (BOOL)disptachInBackgroundThread;
- (id)modelUpdateHelper;
- (void)setModelUpdateHelper:(id)arg0;
- (void)setEnterFromSource:(long long)arg0;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
