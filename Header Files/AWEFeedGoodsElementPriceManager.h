//
//     Generated by private class-dump
//

@interface AWEFeedGoodsElementPriceManager : NSObject

+ (id)sharedManager;

- (id)getGoodsDetailModelFromDictionary:(id)arg0;
- (id)getPriceLabelViewWithGoodsDetail:(id)arg0;
- (void)setupPriceLabel:(id)arg0 withGoodsDetail:(id)arg1;
- (id)decodeFromRawData:(id)arg0;
- (void)setupMainPriceLabel:(id)arg0 supportPriceLabel:(id)arg1 supportTextLabel:(id)arg2 withGoodsDetail:(id)arg3;
- (id)getPriceLabelViewWithAweme:(id)arg0;

@end
