//
//     Generated by private class-dump
//

@class NSString, AWEAdChallengeRoomModel, AWEAdChallengeShopModel, NSNumber;

@interface AWEAdChallengeCoverLinkModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_coverLinkType;
    NSString *_coverLinkSchema;
    AWEAdChallengeRoomModel *_roomData;
    AWEAdChallengeShopModel *_shopData;
}

@property (retain, nonatomic) NSNumber *coverLinkType;
@property (copy, nonatomic) NSString *coverLinkSchema;
@property (retain, nonatomic) AWEAdChallengeRoomModel *roomData;
@property (retain, nonatomic) AWEAdChallengeShopModel *shopData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)roomData;
- (void)setRoomData:(id)arg0;
- (id)coverLinkType;
- (void)setCoverLinkType:(id)arg0;
- (id)coverLinkSchema;
- (void)setCoverLinkSchema:(id)arg0;
- (id)shopData;
- (void)setShopData:(id)arg0;
- (void).cxx_destruct;

@end
