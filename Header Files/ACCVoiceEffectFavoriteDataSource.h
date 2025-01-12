//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ACCVoiceEffectFavoriteDataSource : ACCVoiceEffectCategoryDataSource {
    BOOL _syncFavorite;
    BOOL _syncUnFavorite;
    id /* block */ _findLinkageItem;
    NSMutableArray *_effectIDList;
    NSMutableArray *_waitFavoriteList;
    NSMutableArray *_waitUnfavoriteList;
}

@property (retain, nonatomic) NSMutableArray *effectIDList;
@property (retain, nonatomic) NSMutableArray *waitFavoriteList;
@property (retain, nonatomic) NSMutableArray *waitUnfavoriteList;
@property (nonatomic) BOOL syncFavorite;
@property (nonatomic) BOOL syncUnFavorite;
@property (copy, nonatomic) id /* block */ findLinkageItem;

- (void)setEffectIDList:(id)arg0;
- (void)setWaitFavoriteList:(id)arg0;
- (void)setWaitUnfavoriteList:(id)arg0;
- (void)deleteFavorite:(id)arg0;
- (void)addToFavorite:(id)arg0;
- (id /* block */)findLinkageItem;
- (id)effectIDList;
- (id)waitFavoriteList;
- (id)waitUnfavoriteList;
- (void)syncFavoriteListIfNeeded;
- (BOOL)syncFavorite;
- (void)setSyncFavorite:(BOOL)arg0;
- (void)reAddFavoriteOprList:(id)arg0;
- (void)syncUnfavoriteListIfNeeded;
- (BOOL)syncUnFavorite;
- (void)setSyncUnFavorite:(BOOL)arg0;
- (void)reAddUnfavoriteOprList:(id)arg0;
- (void)changeItemFavoriteStatus:(id)arg0;
- (void)setupWithEffects:(id)arg0;
- (BOOL)itemInFavoriteList:(id)arg0;
- (void)setFindLinkageItem:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)updateItems:(id)arg0;

@end
