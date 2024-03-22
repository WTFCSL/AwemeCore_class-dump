//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEUserModel;

@interface AWEFavoriteNovelDataController : AWEListDataController {
    NSString *_novelSDKSchema;
    AWEUserModel *_user;
    NSNumber *_cursor;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *novelSDKSchema;
@property (retain, nonatomic) AWEUserModel *user;

+ (BOOL)isEnableEnterNovelChannel;
+ (void)removeBookFromShelfWithBookId:(id)arg0 bookType:(id)arg1 completion:(id /* block */)arg2;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)novelNetworkRequestWithCompletion:(id /* block */)arg0 firstRequest:(BOOL)arg1;
- (id)novelSDKSchema;
- (void)setNovelSDKSchema:(id)arg0;
- (void)setUser:(id)arg0;
- (id)cursor;
- (id)init;
- (id)user;
- (void).cxx_destruct;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
