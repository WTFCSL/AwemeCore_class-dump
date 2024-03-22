//
//     Generated by private class-dump
//

@class NSString, IESECServiceProxy, NSDictionary, NSMutableArray, IESECWinContext;
@protocol IESECWinGoodsService;

@interface IESECWinLynxCardService : NSObject <IESECListCardsContextDelegate, IESECWinLynxCardService> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_instanceBridges;
    BOOL _isUseLynxCard;
    id /* block */ _itemNeedRemoved;
    id /* block */ _itemNeedReload;
    NSDictionary *_forwardEventDic;
    IESECWinContext *_context;
    IESECServiceProxy<IESECWinGoodsService> *_goodsService;
}

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ itemNeedRemoved;
@property (copy, nonatomic) id /* block */ itemNeedReload;
@property (nonatomic) BOOL isUseLynxCard;
@property (retain, nonatomic) NSDictionary *forwardEventDic;

+ (id)getSSRApiVersion;

- (id)currentListContextIdForCards;
- (id)instanceBridges;
- (id)currentEnvIdentifier;
- (id)customConfigWithLynxData:(id)arg0 tabLayout:(unsigned long long)arg1;
- (id)globalPropsExtraWithItemType:(unsigned long long)arg0 trackContextExtra:(id)arg1 extra:(id)arg2;
- (id /* block */)itemNeedRemoved;
- (void)setItemNeedRemoved:(id /* block */)arg0;
- (id /* block */)itemNeedReload;
- (void)setItemNeedReload:(id /* block */)arg0;
- (BOOL)isUseLynxCard;
- (void)setIsUseLynxCard:(BOOL)arg0;
- (id)forwardEventDic;
- (void)setForwardEventDic:(id)arg0;
- (id)goodsService;
- (void)setGoodsService:(id)arg0;
- (void)registerWindowInstranceBridges;
- (void)registerInstranceBridge:(id)arg0;
- (id)initWithContext:(id)arg0;
- (id)init;
- (id)trackContext:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
