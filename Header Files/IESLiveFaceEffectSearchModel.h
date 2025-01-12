//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESLiveFaceEffectSearchModel : NSObject {
    BOOL _isUseHot;
    BOOL _shouldShowTagView;
    BOOL _shouldShowHot;
    BOOL _isSearchPopMode;
    BOOL _hasTouchSearchBtn;
    BOOL _shouldReload;
    BOOL _isTagSearch;
    NSString *_searchWord;
    NSArray *_hashList;
    NSString *_searchId;
    NSString *_liveRecommendTips;
    NSString *_liveSearchTips;
}

@property (copy, nonatomic) NSString *searchWord;
@property (nonatomic) BOOL isUseHot;
@property (nonatomic) BOOL shouldShowTagView;
@property (nonatomic) BOOL shouldShowHot;
@property (retain, nonatomic) NSArray *hashList;
@property (nonatomic) BOOL isSearchPopMode;
@property (nonatomic) BOOL hasTouchSearchBtn;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) BOOL shouldReload;
@property (nonatomic) BOOL isTagSearch;
@property (retain, nonatomic) NSString *liveRecommendTips;
@property (retain, nonatomic) NSString *liveSearchTips;

- (id)searchId;
- (void)setSearchId:(id)arg0;
- (BOOL)isUseHot;
- (void)setIsUseHot:(BOOL)arg0;
- (id)searchWord;
- (void)setSearchWord:(id)arg0;
- (BOOL)shouldShowTagView;
- (id)hashList;
- (void)setHashList:(id)arg0;
- (void)setShouldShowTagView:(BOOL)arg0;
- (BOOL)shouldShowHot;
- (void)setShouldShowHot:(BOOL)arg0;
- (BOOL)isSearchPopMode;
- (void)setIsSearchPopMode:(BOOL)arg0;
- (BOOL)hasTouchSearchBtn;
- (void)setHasTouchSearchBtn:(BOOL)arg0;
- (BOOL)isTagSearch;
- (void)setIsTagSearch:(BOOL)arg0;
- (id)liveRecommendTips;
- (id)liveSearchTips;
- (void)setLiveRecommendTips:(id)arg0;
- (void)setLiveSearchTips:(id)arg0;
- (void).cxx_destruct;
- (BOOL)shouldReload;
- (void)setShouldReload:(BOOL)arg0;

@end
