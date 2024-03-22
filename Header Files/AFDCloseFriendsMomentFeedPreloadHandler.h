//
//     Generated by private class-dump
//

@class NSArray, NSMutableSet;

@interface AFDCloseFriendsMomentFeedPreloadHandler : NSObject {
    NSArray *_momentList;
    NSArray *_filteredVideoAwemeList;
    NSMutableSet *_preloadRecord;
}

@property (retain, nonatomic) NSArray *momentList;
@property (retain, nonatomic) NSArray *filteredVideoAwemeList;
@property (retain, nonatomic) NSMutableSet *preloadRecord;

- (id)momentList;
- (void)setMomentList:(id)arg0;
- (void)cancelPreload;
- (void)startPreloadFromIndex:(long long)arg0;
- (void)preloadAwemeModel:(id)arg0;
- (id)preloadRecord;
- (void)startPreload;
- (void)startPreloadImageFromIndex:(long long)arg0;
- (void)updateMomentList:(id)arg0;
- (id)filteredVideoAwemeList;
- (void)setFilteredVideoAwemeList:(id)arg0;
- (void)setPreloadRecord:(id)arg0;
- (void).cxx_destruct;

@end
