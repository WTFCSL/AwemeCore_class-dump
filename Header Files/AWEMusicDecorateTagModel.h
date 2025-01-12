//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AWEMusicDecorateTagModel : AWEBaseApiModel {
    long long _clipTagType;
    AWEURLModel *_tagImageURL;
    AWEURLModel *_tagImageURLDark;
}

@property (nonatomic) long long clipTagType;
@property (retain, nonatomic) AWEURLModel *tagImageURL;
@property (retain, nonatomic) AWEURLModel *tagImageURLDark;

+ (id)tagImageURLJSONTransformer;
+ (id)tagImageURLDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)clipTagType;
- (void)setClipTagType:(long long)arg0;
- (id)tagImageURL;
- (void)setTagImageURL:(id)arg0;
- (id)tagImageURLDark;
- (void)setTagImageURLDark:(id)arg0;
- (void).cxx_destruct;

@end
