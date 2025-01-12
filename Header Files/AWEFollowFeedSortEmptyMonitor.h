//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFollowFeedSortEmptyMonitor : NSObject <AWEFollowFeedSortEmptyMonitorProtocol> {
    BOOL _preSortHasMore;
}

@property (nonatomic) BOOL preSortHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeStatsParamsWithAweme:(id)arg0;
+ (void)followFeedStatsWithScene:(unsigned long long)arg0 completionBlock:(id /* block */)arg1;
+ (void)followFeedStats:(unsigned long long)arg0 awemeModel:(id)arg1 isShowSortEnd:(BOOL)arg2;
+ (void)trackHasMoreSort:(BOOL)arg0 itemIDs:(id)arg1 scene:(unsigned long long)arg2 intervalTime:(double)arg3 isShowSortEnd:(BOOL)arg4;
+ (void)fetchSortHasMore;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)setPreSortHasMore:(BOOL)arg0;
- (BOOL)preSortHasMore;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
