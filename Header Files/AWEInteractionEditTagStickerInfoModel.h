//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWEInteractionEditTagUserTagModel, AWEInteractionEditTagPOITagModel, AWEInteractionEditTagGoodsTagModel, AWEInteractionEditTagCustomTagModel, AWEInteractionEditTagBrandTagModel;

@interface AWEInteractionEditTagStickerInfoModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSString *_text;
    NSString *_subTitle;
    long long _orientation;
    AWEInteractionEditTagCustomTagModel *_customTag;
    AWEInteractionEditTagUserTagModel *_userTag;
    AWEInteractionEditTagPOITagModel *_POITag;
    AWEInteractionEditTagGoodsTagModel *_goodsTag;
    AWEInteractionEditTagBrandTagModel *_brandTag;
    NSDictionary *_adTag;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) AWEInteractionEditTagCustomTagModel *customTag;
@property (retain, nonatomic) AWEInteractionEditTagUserTagModel *userTag;
@property (retain, nonatomic) AWEInteractionEditTagPOITagModel *POITag;
@property (retain, nonatomic) AWEInteractionEditTagGoodsTagModel *goodsTag;
@property (retain, nonatomic) AWEInteractionEditTagBrandTagModel *brandTag;
@property (copy, nonatomic) NSDictionary *adTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customTagJSONTransformer;
+ (id)userTagJSONTransformer;
+ (id)POITagJSONTransformer;
+ (id)goodsTagJSONTransformer;
+ (id)brandTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCustomTag:(id)arg0;
- (id)customTag;
- (void)setGoodsTag:(id)arg0;
- (id)goodsTag;
- (id)brandTag;
- (id)POITag;
- (BOOL)interactional;
- (void)setPOITag:(id)arg0;
- (void)setBrandTag:(id)arg0;
- (id)tagType;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (long long)type;
- (long long)orientation;
- (void)setType:(long long)arg0;
- (void)setOrientation:(long long)arg0;
- (id)text;
- (id)adTag;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)tagId;
- (id)userTag;
- (void)setUserTag:(id)arg0;
- (void)setAdTag:(id)arg0;

@end
