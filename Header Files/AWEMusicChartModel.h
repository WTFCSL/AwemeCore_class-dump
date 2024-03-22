//
//     Generated by private class-dump
//

@class NSString, AWEMusicChartMusicModel, NSMutableSet, NSMutableArray;

@interface AWEMusicChartModel : NSObject {
    BOOL _hasMore;
    NSString *_cursor;
    AWEMusicChartMusicModel *_music;
    NSMutableArray *_awemeList;
    NSMutableSet *_awemeIdSet;
    NSString *_startCursor;
    long long _lastAwemeIndex;
}

@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEMusicChartMusicModel *music;
@property (retain, nonatomic) NSMutableArray *awemeList;
@property (retain, nonatomic) NSMutableSet *awemeIdSet;
@property (copy, nonatomic) NSString *startCursor;
@property (nonatomic) long long lastAwemeIndex;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)awemeIdSet;
- (void)setAwemeIdSet:(id)arg0;
- (void)setStartCursor:(id)arg0;
- (long long)lastAwemeIndex;
- (void)setLastAwemeIndex:(long long)arg0;
- (id)music;
- (id)cursor;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (id)startCursor;

@end