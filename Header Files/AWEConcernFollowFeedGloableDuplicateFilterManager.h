//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEConcernFollowFeedGloableDuplicateFilterManager : NSObject <AWEUserMessage, AWEConcernFollowFeedGloableDuplicateFilterManagerProtocol> {
    NSMutableArray *_viewedNotFollowFeedCache;
    NSMutableDictionary *_viewedNotFollowFeedReferStringCache;
    NSMutableArray *_duplicateDeleteArray;
}

@property (retain, nonatomic) NSMutableArray *viewedNotFollowFeedCache;
@property (retain, nonatomic) NSMutableDictionary *viewedNotFollowFeedReferStringCache;
@property (retain, nonatomic) NSMutableArray *duplicateDeleteArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)videoPlay:(id)arg0;
+ (id)sharedManager;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (BOOL)duplicateFilterOptimizeEnable;
- (id)arrayWithResponse:(id)arg0 awemeList:(id)arg1;
- (BOOL)isDuplicateOnFollowFeed:(id)arg0;
- (void)addDuplicateDeleteItems:(id)arg0;
- (id)shownReferStringWithDuplicateItemID:(id)arg0;
- (id)viewedNotFollowFeedCache;
- (void)setViewedNotFollowFeedCache:(id)arg0;
- (void)setViewedNotFollowFeedReferStringCache:(id)arg0;
- (BOOL)isViewed:(id)arg0;
- (id)viewedNotFollowFeedReferStringCache;
- (BOOL)forceKeepInPlace;
- (id)duplicateDeleteArray;
- (BOOL)duplicateFilterOptimizeStrategyDelete;
- (BOOL)duplicateFilterOptimizeStrategySink;
- (id)allDuplicateDeleteItems;
- (void)clearDuplicateDeleteItems;
- (void)setDuplicateDeleteArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)dealloc;

@end