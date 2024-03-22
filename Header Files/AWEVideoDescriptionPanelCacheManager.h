//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString;

@interface AWEVideoDescriptionPanelCacheManager : NSObject <AWEUserMessage, AWEGuestModeMessage> {
    long long _cacheNum;
    NSMutableDictionary *_caches;
    NSArray *_allModels;
}

@property (nonatomic) long long cacheNum;
@property (retain, nonatomic) NSMutableDictionary *caches;
@property (copy, nonatomic) NSArray *allModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)addNotification;
- (void)setCaches:(id)arg0;
- (void)onAwemeDiggNotification:(id)arg0;
- (void)onAwemeFavoriteNotification:(id)arg0;
- (void)guestDidFinishFollowUser:(id)arg0 isUnfollow:(BOOL)arg1;
- (void)guestDidDiggAweme:(id)arg0 isUndigg:(BOOL)arg1;
- (id)getRelatedRecommendModelsWithItemID:(id)arg0 referString:(id)arg1;
- (void)cacheRelatedRecommendModels:(id)arg0 itemID:(id)arg1 referString:(id)arg2;
- (void)setCacheNum:(long long)arg0;
- (id)getCacheModelWithItemID:(id)arg0 cacheModelList:(id)arg1;
- (long long)cacheNum;
- (id)getCurrentAllModels;
- (void)setAllModels:(id)arg0;
- (id)allModels;
- (void).cxx_destruct;
- (id)caches;
- (void)dealloc;

@end