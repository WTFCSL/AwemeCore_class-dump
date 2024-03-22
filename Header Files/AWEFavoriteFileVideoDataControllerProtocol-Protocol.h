//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEAwemeModel, NSNumber, NSMutableArray;

@protocol AWEFavoriteFileVideoDataControllerProtocol <NSObject>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSNumber *collectsId;
@property (copy, nonatomic) NSString *collectsName;
@property (nonatomic) long long pageSize;
@property (copy, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long initFecthCount;
@property (nonatomic) long long initialId;
@property (copy, nonatomic) AWEAwemeModel *initialModel;
@property (copy, nonatomic) NSArray *initialModels;
@property (nonatomic) BOOL isLoadingData;
@property (retain, nonatomic) NSMutableArray *dataLoadingCompletionBlockArray;
@property (copy, nonatomic) id /* block */ syncAwemeVCBlock;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setCollectsId:(id)arg0;
- (void)setSyncAwemeVCBlock:(id /* block */)arg0;
- (id)collectsName;
- (id)collectsId;
- (long long)initialId;
- (id)dataLoadingCompletionBlockArray;
- (void)setCollectsName:(id)arg0;
- (id /* block */)syncAwemeVCBlock;
- (long long)initFecthCount;
- (void)setInitFecthCount:(long long)arg0;
- (void)setInitialId:(long long)arg0;
- (id)initialModels;
- (void)setInitialModels:(id)arg0;
- (void)setDataLoadingCompletionBlockArray:(id)arg0;
- (id)cursor;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (long long)pageSize;
- (void)setPageSize:(long long)arg0;
- (BOOL)isLoadingData;
- (void)setIsLoadingData:(BOOL)arg0;
- (id)initialModel;
- (void)setInitialModel:(id)arg0;

@optional

- (BOOL)removeWithItemID:(id)arg0;
- (id)initWithCollectsId:(id)arg0 withCollectsName:(id)arg1;
- (void)refreshWithCollectsId:(id)arg0 block:(id /* block */)arg1;
- (void)postCollectsStats:(long long)arg0 collectsId:(id)arg1 completion:(id /* block */)arg2;

@end