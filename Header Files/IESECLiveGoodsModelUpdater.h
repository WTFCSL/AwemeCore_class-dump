//
//     Generated by private class-dump
//

@class IESECLiveApi, IESECLiveContext, NSString, IESECLiveRandomDelayTimer;
@protocol IESECLiveGoodsModelUpdaterDataSource, IESECLiveGoodsModelUpdaterDelegate;

@interface IESECLiveGoodsModelUpdater : NSObject <IESECLiveEventPlugin, IESECLiveMessageSubscriber, IESECLiveMessageSubscriber, IESECMessageSubscriber> {
    BOOL _disableUpdate;
    id<IESECLiveGoodsModelUpdaterDataSource> _dataSource;
    id<IESECLiveGoodsModelUpdaterDelegate> _delegate;
    long long _updateScene;
    IESECLiveApi *_api;
    IESECLiveContext *_liveContext;
    long long _updateRequestFrom;
    IESECLiveRandomDelayTimer *_peakReduce;
}

@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) long long updateRequestFrom;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveGoodsModelUpdaterDataSource> dataSource;
@property (weak, nonatomic) id<IESECLiveGoodsModelUpdaterDelegate> delegate;
@property (nonatomic) long long updateScene;
@property (nonatomic) BOOL disableUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)initWithLiveContext:(id)arg0;
- (void)messageReceived_IESECProductUpdateMessage:(id)arg0;
- (void)messageReceived_IESECLiveMarketingMessage:(id)arg0;
- (void)setUpdateScene:(long long)arg0;
- (void)setUpdateRequestFrom:(long long)arg0;
- (id)registerMessageClasses;
- (void)receive:(id)arg0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (id)peakReduce;
- (void)setPeakReduce:(id)arg0;
- (void)fetchGoodsCampaignWithGoodsModelList:(id)arg0 callback:(id /* block */)arg1;
- (void)renewGoodsPriceWithProductIDs:(id)arg0 promotionIDs:(id)arg1;
- (long long)updateScene;
- (id)wholeGoodsModelList;
- (long long)updateRequestFrom;
- (void)messageReceived_IESECProductRefreshMessage:(id)arg0;
- (void)p_updateGoodsViewModels:(id)arg0 refreshMessage:(id)arg1;
- (void)p_updateGoodsViewModels:(id)arg0 message:(id)arg1;
- (void)p_updateItems:(id)arg0 atIndexPaths:(id)arg1 withUpdateType:(long long)arg2 extraInfo:(id)arg3;
- (long long)cellHeaderUpdateTypeWithMsgType:(int)arg0 goodsViewModelArray:(id)arg1;
- (void)p_updateCellHeaderWithType:(long long)arg0 message:(id)arg1 goodsViewModelArray:(id)arg2;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)api;
- (BOOL)disableUpdate;
- (void)setDisableUpdate:(BOOL)arg0;
- (void)setApi:(id)arg0;

@end
