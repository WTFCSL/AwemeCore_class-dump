//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWETeenPrivateWorkListDataController : AWEListDataController {
    long long _cursor;
    NSMutableArray *_justRemovedModelList;
}

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSMutableArray *justRemovedModelList;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)removeWithItemID:(id)arg0;
- (BOOL)addAwemeWithItemID:(id)arg0;
- (id)justRemovedModelList;
- (void)setJustRemovedModelList:(id)arg0;
- (void)p_loadPrivateWorkListCompletion:(id /* block */)arg0;
- (void)updateNewestPrivateWork;
- (void)removeAll;
- (long long)cursor;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end