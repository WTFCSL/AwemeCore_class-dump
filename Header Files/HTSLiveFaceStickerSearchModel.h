//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol IESLiveEffectPlatformService;

@interface HTSLiveFaceStickerSearchModel : NSObject {
    BOOL _isUseHot;
    BOOL _shouldShowTagView;
    BOOL _shouldShowHot;
    BOOL _stopAnimation;
    BOOL _isSearchPopMode;
    BOOL _hasTouchSearchBtn;
    BOOL _shouldReload;
    BOOL _isTagSearch;
    NSString *_searchWord;
    NSArray *_effects;
    NSArray *_hashList;
    NSString *_searchID;
    NSString *_LiveRecommendTipsString;
    NSString *_LiveSearchTipsString;
    id<IESLiveEffectPlatformService> _effectPlatformService;
}

@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (copy, nonatomic) NSString *searchWord;
@property (nonatomic) BOOL isUseHot;
@property (retain, nonatomic) NSArray *effects;
@property (nonatomic) BOOL shouldShowTagView;
@property (nonatomic) BOOL shouldShowHot;
@property (retain, nonatomic) NSArray *hashList;
@property (nonatomic) BOOL stopAnimation;
@property (nonatomic) BOOL isSearchPopMode;
@property (nonatomic) BOOL hasTouchSearchBtn;
@property (retain, nonatomic) NSString *searchID;
@property (nonatomic) BOOL shouldReload;
@property (nonatomic) BOOL isTagSearch;
@property (retain, nonatomic) NSString *LiveRecommendTipsString;
@property (retain, nonatomic) NSString *LiveSearchTipsString;

+ (void)storeSearchWord:(id)arg0;
+ (void)releaseSearchWord;
+ (id)getSearchWordInCache;

- (BOOL)isUseHot;
- (void)setIsUseHot:(BOOL)arg0;
- (id)searchWord;
- (void)setSearchWord:(id)arg0;
- (BOOL)shouldShowTagView;
- (id)effectPlatformService;
- (id)hashList;
- (void)setHashList:(id)arg0;
- (void)fetchSearchEffectsWithKeyWord:(id)arg0 withSearchID:(id)arg1 withCusor:(long long)arg2 completion:(id /* block */)arg3;
- (void)fetchRecommandWordsWithCompletetion:(id /* block */)arg0;
- (void)setShouldShowTagView:(BOOL)arg0;
- (BOOL)shouldShowHot;
- (void)setShouldShowHot:(BOOL)arg0;
- (void)setStopAnimation:(BOOL)arg0;
- (BOOL)isSearchPopMode;
- (void)setIsSearchPopMode:(BOOL)arg0;
- (BOOL)hasTouchSearchBtn;
- (void)setHasTouchSearchBtn:(BOOL)arg0;
- (BOOL)isTagSearch;
- (void)setIsTagSearch:(BOOL)arg0;
- (id)LiveRecommendTipsString;
- (void)setLiveRecommendTipsString:(id)arg0;
- (id)LiveSearchTipsString;
- (void)setLiveSearchTipsString:(id)arg0;
- (void)setEffectPlatformService:(id)arg0;
- (void).cxx_destruct;
- (id)effects;
- (BOOL)shouldReload;
- (void)setShouldReload:(BOOL)arg0;
- (BOOL)stopAnimation;
- (void)setEffects:(id)arg0;
- (id)searchID;
- (void)setSearchID:(id)arg0;

@end