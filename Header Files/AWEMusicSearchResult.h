//
//     Generated by private class-dump
//

@class AWEMediaModel;

@interface AWEMusicSearchResult : AWEBaseApiModel {
    AWEMediaModel *_media;
}

@property (retain, nonatomic) AWEMediaModel *media;

+ (id)mediaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)media;
- (void)setMedia:(id)arg0;

@end