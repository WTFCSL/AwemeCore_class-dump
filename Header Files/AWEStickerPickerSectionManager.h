//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEStickerPickerSectionManager : NSObject {
    BOOL _isTeenMode;
    id /* block */ _stickerFilterBlock;
    NSArray *_lastFetchUsedStickers;
    NSArray *_lookedStickers;
    NSArray *_likedStickers;
    NSArray *_usedStickers;
}

@property (copy, nonatomic) NSArray *lookedStickers;
@property (copy, nonatomic) NSArray *likedStickers;
@property (copy, nonatomic) NSArray *usedStickers;
@property (copy, nonatomic) NSArray *lastFetchUsedStickers;
@property (copy, nonatomic) id /* block */ stickerFilterBlock;
@property (nonatomic) BOOL isTeenMode;

+ (BOOL)isSameSectionWithSticker:(id)arg0 otherSticher:(id)arg1;
+ (id)sectionNameMap;

- (BOOL)isTeenMode;
- (void)setIsTeenMode:(BOOL)arg0;
- (void)setStickerFilterBlock:(id /* block */)arg0;
- (id)lastFetchUsedStickers;
- (void)fetchUsedEffectsWithCategory:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)stickerFilterBlock;
- (void)generateUsedSectionToFavorite:(id)arg0 stickers:(id)arg1;
- (void)generateUsedSectionToFavorite:(id)arg0;
- (BOOL)isSectionEnabledWithCategory:(id)arg0;
- (id)usedStickers;
- (void)p_fetchUsedEffectsWithCategory:(id)arg0 completion:(id /* block */)arg1;
- (id)p_getStickerIdsFromCacheWithKey:(id)arg0;
- (void)setUsedStickers:(id)arg0;
- (void)setLastFetchUsedStickers:(id)arg0;
- (void)p_getEffectsWithCacheKey:(id)arg0 completion:(id /* block */)arg1;
- (id)lookedStickers;
- (void)setLookedStickers:(id)arg0;
- (id)likedStickers;
- (void)setLikedStickers:(id)arg0;
- (void).cxx_destruct;

@end