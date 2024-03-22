//
//     Generated by private class-dump
//

@class NSString, NSArray, IESECLiveGoodsListAuthorReputationModel, NSDictionary, NSNumber, IESECLiveGoodsListAuthorShopAvatarModel;

@interface IESECLiveGoodsListAuthorShopInfo : MTLModel <MTLJSONSerializing> {
    NSString *_shopName;
    NSString *_jumpURL;
    NSArray *_shopTags;
    IESECLiveGoodsListAuthorReputationModel *_shopReputation;
    NSNumber *_fontSize;
    IESECLiveGoodsListAuthorShopAvatarModel *_shopAvatar;
    NSArray *_userActParams;
    NSDictionary *_trackParams;
}

@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSArray *shopTags;
@property (retain, nonatomic) IESECLiveGoodsListAuthorReputationModel *shopReputation;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopAvatarModel *shopAvatar;
@property (retain, nonatomic) NSArray *userActParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shopTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (void)setTrackParams:(id)arg0;
- (id)shopName;
- (void)setShopName:(id)arg0;
- (id)userActParams;
- (void)setUserActParams:(id)arg0;
- (id)shopTags;
- (id)shopAvatar;
- (id)shopReputation;
- (void)setShopTags:(id)arg0;
- (void)setShopReputation:(id)arg0;
- (void)setShopAvatar:(id)arg0;
- (void).cxx_destruct;
- (void)setFontSize:(id)arg0;
- (id)fontSize;

@end