//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEUserPostsWeakRefreshResponseModel : AWEBaseApiModel {
    BOOL _needForceRefresh;
    NSArray *_timelist;
    NSArray *_weakPosts;
    NSArray *_collectionWeakPosts;
    NSArray *_unreadNoticeModelList;
}

@property (nonatomic) BOOL needForceRefresh;
@property (retain, nonatomic) NSArray *timelist;
@property (retain, nonatomic) NSArray *weakPosts;
@property (retain, nonatomic) NSArray *collectionWeakPosts;
@property (retain, nonatomic) NSArray *unreadNoticeModelList;

+ (id)weakPostsJSONTransformer;
+ (id)collectionWeakPostsJSONTransformer;
+ (id)unreadNoticeModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)needForceRefresh;
- (void)setNeedForceRefresh:(BOOL)arg0;
- (id)timelist;
- (void)setTimelist:(id)arg0;
- (id)weakPosts;
- (id)collectionWeakPosts;
- (id)unreadNoticeModelList;
- (void)setWeakPosts:(id)arg0;
- (void)setCollectionWeakPosts:(id)arg0;
- (void)setUnreadNoticeModelList:(id)arg0;
- (void).cxx_destruct;

@end
