//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveKTVSearchApi : IESLiveKTVBaseApi {
    NSString *_searchId;
    NSString *_logId;
}

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *logId;

- (id)searchId;
- (void)setSearchId:(id)arg0;
- (id)logId;
- (void)setLogId:(id)arg0;
- (void)requestHotSearchWithCompletion:(id /* block */)arg0;
- (void)searchMusicWithKeyWord:(id)arg0 anchorID:(id)arg1 page:(long long)arg2 mode:(long long)arg3 querySource:(int)arg4 completionBlock:(id /* block */)arg5;
- (void)searchMusicWithKeyWord:(id)arg0 anchorID:(id)arg1 page:(long long)arg2 mode:(long long)arg3 completionBlock:(id /* block */)arg4;
- (void)requestSearchAssociatedWord:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;

@end
