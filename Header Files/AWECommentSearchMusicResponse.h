//
//     Generated by private class-dump
//

@class NSNumber, NSArray, AWESearchGlobalDoodleConfigModel;

@interface AWECommentSearchMusicResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_cursor;
    NSArray *_musicList;
    AWESearchGlobalDoodleConfigModel *_extraModel;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;

+ (id)extraModelJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (id)musicList;
- (void)setMusicList:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end