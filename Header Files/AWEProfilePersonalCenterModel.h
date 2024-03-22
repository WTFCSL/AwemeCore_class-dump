//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEProfilePersonalCenterDiamondCardModel;

@interface AWEProfilePersonalCenterModel : MTLModel <MTLJSONSerializing> {
    NSString *_leftCapsuleTitle;
    NSString *_rightCapsuleTitle;
    NSArray *_digitalAreaList;
    AWEProfilePersonalCenterDiamondCardModel *_cardModel;
}

@property (copy, nonatomic) NSString *leftCapsuleTitle;
@property (copy, nonatomic) NSString *rightCapsuleTitle;
@property (retain, nonatomic) NSArray *digitalAreaList;
@property (retain, nonatomic) AWEProfilePersonalCenterDiamondCardModel *cardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardModelJSONTransformer;
+ (id)digitalAreaListJSONTransformer;
+ (id)serviceCardModelJSONTransformer;
+ (id)personalTagModelsJSONTransformer;
+ (id)personalLinkModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)digitalAreaList;
- (id)leftCapsuleTitle;
- (id)rightCapsuleTitle;
- (void)setLeftCapsuleTitle:(id)arg0;
- (void)setRightCapsuleTitle:(id)arg0;
- (void)setDigitalAreaList:(id)arg0;
- (void).cxx_destruct;

@end