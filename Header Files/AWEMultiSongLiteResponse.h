//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEMultiSongLiteResponse : AWEBaseApiModel {
    NSArray *_musics;
}

@property (retain, nonatomic) NSArray *musics;

+ (id)musicsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)musics;
- (void)setMusics:(id)arg0;
- (void).cxx_destruct;

@end