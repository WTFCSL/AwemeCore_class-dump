//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWEAlbumCaptionImageResponseModel : AWEBaseApiModel {
    long long _demotionStatus;
    AWEAwemeModel *_aweme;
}

@property (nonatomic) long long demotionStatus;
@property (retain, nonatomic) AWEAwemeModel *aweme;

+ (id)demotionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (long long)demotionStatus;
- (void)setDemotionStatus:(long long)arg0;
- (void).cxx_destruct;

@end
