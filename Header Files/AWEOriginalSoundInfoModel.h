//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AWEOriginalSoundInfoModel : AWEBaseApiModel {
    AWEURLModel *_playURL;
}

@property (readonly, nonatomic) AWEURLModel *playURL;

+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)playURL;

@end
