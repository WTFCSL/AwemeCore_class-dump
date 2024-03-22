//
//     Generated by private class-dump
//

@class IESECPriceElement, IESECTextElement, IESECLongContentLabelElement;

@interface IESECGoodsDetailAuctionBidItemModel : IESECBaseApiModel {
    IESECPriceElement *_priceElement;
    IESECLongContentLabelElement *_authorElement;
    IESECTextElement *_timeElement;
}

@property (retain, nonatomic) IESECPriceElement *priceElement;
@property (retain, nonatomic) IESECLongContentLabelElement *authorElement;
@property (retain, nonatomic) IESECTextElement *timeElement;

+ (id)JSONKeyPathsByPropertyKey;

- (id)authorElement;
- (void)setAuthorElement:(id)arg0;
- (id)priceElement;
- (void)setPriceElement:(id)arg0;
- (id)timeElement;
- (void)setTimeElement:(id)arg0;
- (void).cxx_destruct;

@end