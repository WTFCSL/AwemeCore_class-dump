//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEFeedViewHistoryManager : NSObject <AWEFeedViewHistoryManagerProtocol> {
    NSMutableArray *_cachedItemIDs;
    NSMutableArray *_cachedInfo;
}

@property (retain, nonatomic) NSMutableArray *cachedItemIDs;
@property (retain, nonatomic) NSMutableArray *cachedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)arrayToJsonString:(id)arg0;
- (id)getHistoryItemIDInfos;
- (id)getHistoryAuthorIDInfos;
- (void)addHistory:(id)arg0 index:(long long)arg1;
- (id)cachedItemIDs;
- (id)cachedInfo;
- (void)setCachedItemIDs:(id)arg0;
- (void)setCachedInfo:(id)arg0;
- (long long)capacity;
- (void).cxx_destruct;

@end
