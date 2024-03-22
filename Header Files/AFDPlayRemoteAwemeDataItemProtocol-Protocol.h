//
//     Generated by private class-dump
//

@class NSMutableArray, AWEAwemeModel;

@protocol AFDPlayRemoteAwemeDataItemProtocol <NSObject>

@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long currentAwemeProgress;
@property (nonatomic) BOOL isPause;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSMutableArray *awemeList;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isHost;
@property (copy, nonatomic) id /* block */ didScrollToModel;
@property (nonatomic) BOOL opStatus;

- (id)currentAweme;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (long long)currentPlayIndex;
- (void)setCurrentPlayIndex:(long long)arg0;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg0;
- (void)setCurrentAweme:(id)arg0;
- (void)setIsHost:(BOOL)arg0;
- (void)setDidScrollToModel:(id /* block */)arg0;
- (BOOL)opStatus;
- (long long)currentAwemeProgress;
- (void)clearAwemeList;
- (void)setOpStatus:(BOOL)arg0;
- (void)scrollToAwemeModel:(id)arg0;
- (void)setCurrentAwemeProgress:(long long)arg0;
- (void)removeAwemeModelAndScrollToNext:(id)arg0;
- (void)scrollToNextAwemeModel:(id)arg0;
- (void)insertAwemeList:(id)arg0 currentID:(id)arg1;
- (id /* block */)didScrollToModel;
- (void)setIsActive:(BOOL)arg0;
- (BOOL)isActive;
- (long long)totalCount;
- (BOOL)isHost;
- (void)setTotalCount:(long long)arg0;

@end