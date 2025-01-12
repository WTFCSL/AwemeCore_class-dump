//
//     Generated by private class-dump
//

@class IESECAfterLiveGuideCardWindowCardInfo, NSString, IESECAfterLiveGuideCardShopCardInfo;

@interface IESECAfterLiveGuideCardResponse : MTLModel <MTLJSONSerializing> {
    unsigned long long _cardType;
    IESECAfterLiveGuideCardShopCardInfo *_shopCardInfo;
    IESECAfterLiveGuideCardWindowCardInfo *_windowCardInfo;
}

@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) IESECAfterLiveGuideCardShopCardInfo *shopCardInfo;
@property (retain, nonatomic) IESECAfterLiveGuideCardWindowCardInfo *windowCardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)shopCardInfo;
- (void)setShopCardInfo:(id)arg0;
- (id)windowCardInfo;
- (void)setWindowCardInfo:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg0;

@end
