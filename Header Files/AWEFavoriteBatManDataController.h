//
//     Generated by private class-dump
//

@class NSNumber, AWEUserModel, AWEBatManTempModel;

@interface AWEFavoriteBatManDataController : AWEListDataController {
    AWEUserModel *_user;
    NSNumber *_cursor;
    AWEBatManTempModel *_justRemovedModel;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEBatManTempModel *justRemovedModel;
@property (retain, nonatomic) AWEUserModel *user;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)setJustRemovedModel:(id)arg0;
- (id)justRemovedModel;
- (BOOL)removeWithItemID:(id)arg0;
- (BOOL)addAwemeWithItemID:(id)arg0;
- (void)decodeExtras:(id)arg0;
- (void)setUser:(id)arg0;
- (id)cursor;
- (id)init;
- (id)user;
- (void).cxx_destruct;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
