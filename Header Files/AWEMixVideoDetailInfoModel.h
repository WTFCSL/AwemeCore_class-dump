//
//     Generated by private class-dump
//

@class AWEMixVideoModel;

@interface AWEMixVideoDetailInfoModel : AWEBaseApiModel {
    AWEMixVideoModel *_mixInfo;
}

@property (retain, nonatomic) AWEMixVideoModel *mixInfo;

+ (id)mixInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mixInfo;
- (void)setMixInfo:(id)arg0;
- (void).cxx_destruct;

@end
