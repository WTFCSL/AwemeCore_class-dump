//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEInteractionStickerModel;

@interface AWEMusicDetailInspirationQuickFlashBodyModel : AWEBaseApiModel {
    BOOL _hasMore;
    AWEInteractionStickerModel *_quickFlashStickerModel;
    NSArray *_awemeList;
    NSString *_nextCursor;
}

@property (retain, nonatomic) AWEInteractionStickerModel *quickFlashStickerModel;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)quickFlashStickerModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)nextCursor;
- (void)setNextCursor:(id)arg0;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)quickFlashStickerModel;
- (void)setQuickFlashStickerModel:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
