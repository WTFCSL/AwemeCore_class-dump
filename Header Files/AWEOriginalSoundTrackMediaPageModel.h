//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEOriginalSoundTrackMediaPageModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_mediaList;
    long long _cursor;
}

@property (copy, nonatomic) NSArray *mediaList;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mediaList;
- (void)setMediaList:(id)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(long long)arg0;

@end