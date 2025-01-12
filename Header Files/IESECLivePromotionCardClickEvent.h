//
//     Generated by private class-dump
//

@class NSDictionary, IESECBTMModel, IESECLiveGoodsViewModel;

@interface IESECLivePromotionCardClickEvent : NSObject {
    long long _areaType;
    IESECLiveGoodsViewModel *_goodsViewModel;
    NSDictionary *_extraInfo;
    IESECBTMModel *_btmModel;
    id /* block */ _completion;
}

@property (nonatomic) long long areaType;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (copy, nonatomic) id /* block */ completion;

- (void)setExtraInfo:(id)arg0;
- (id)btmModel;
- (void)setBtmModel:(id)arg0;
- (void)setGoodsViewModel:(id)arg0;
- (id)goodsViewModel;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)extraInfo;
- (long long)areaType;
- (void)setAreaType:(long long)arg0;

@end
