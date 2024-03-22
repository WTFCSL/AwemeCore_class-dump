//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEMixMiniDetailDataController : AWEMixVideoListDataController {
    AWEAwemeModel *_model;
    NSString *_itemId;
    long long _requestNums;
}

@property (nonatomic) long long requestNums;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *itemId;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (long long)requestNums;
- (void)setRequestNums:(long long)arg0;
- (void)fetchWithCount:(long long)arg0 dataType:(unsigned long long)arg1 pullDown:(BOOL)arg2 cursor:(id)arg3 currentAwemeModel:(id)arg4 completion:(id /* block */)arg5 block:(id /* block */)arg6;
- (void)fetchWithCount:(long long)arg0 pullType:(long long)arg1 currentAwemeModel:(id)arg2 completion:(id /* block */)arg3;
- (void)trackListRefreshWithRequestDuration:(double)arg0 list:(id)arg1 error:(id)arg2;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)itemId;
- (void)setItemId:(id)arg0;

@end
