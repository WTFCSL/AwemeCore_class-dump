//
//     Generated by private class-dump
//

@class AWEAdChallengeShopModel, AWEAdChallengeRoomModel, NSString, NSNumber;

@interface AWEAdChallengeLiveECommerceCardModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_cardType;
    AWEAdChallengeRoomModel *_roomData;
    AWEAdChallengeShopModel *_shopData;
    NSString *_cardCover;
}

@property (retain, nonatomic) NSNumber *cardType;
@property (retain, nonatomic) AWEAdChallengeRoomModel *roomData;
@property (retain, nonatomic) AWEAdChallengeShopModel *shopData;
@property (copy, nonatomic) NSString *cardCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)roomData;
- (void)setRoomData:(id)arg0;
- (id)shopData;
- (void)setShopData:(id)arg0;
- (id)cardCover;
- (void)setCardCover:(id)arg0;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:(id)arg0;

@end
