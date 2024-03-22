//
//     Generated by private class-dump
//

@class AWELivePaidLiveConfigUserRight, NSString, NSMutableArray, AWEURLModel;

@interface AWELivePaidLiveConfig : AWEBaseApiModel {
    long long _spuId;
    NSString *_spuIdStr;
    long long _skuId;
    NSString *_skuIdStr;
    NSString *_title;
    NSString *_subTitle;
    NSMutableArray *_tagsArray;
    AWEURLModel *_cover;
    long long _sellStatus;
    long long _status;
    AWELivePaidLiveConfigUserRight *_userRight;
}

@property (nonatomic) long long spuId;
@property (copy, nonatomic) NSString *spuIdStr;
@property (nonatomic) long long skuId;
@property (copy, nonatomic) NSString *skuIdStr;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long sellStatus;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWELivePaidLiveConfigUserRight *userRight;

+ (id)coverJSONTransformer;
+ (id)userRightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)tagsArray;
- (void)setTagsArray:(id)arg0;
- (long long)skuId;
- (void)setSkuId:(long long)arg0;
- (long long)spuId;
- (void)setSpuId:(long long)arg0;
- (id)skuIdStr;
- (id)userRight;
- (long long)sellStatus;
- (void)setSellStatus:(long long)arg0;
- (id)spuIdStr;
- (void)setSpuIdStr:(id)arg0;
- (void)setSkuIdStr:(id)arg0;
- (void)setUserRight:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (id)title;
- (void)setStatus:(long long)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end