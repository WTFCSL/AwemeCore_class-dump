//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEFavoriteFlashMobDataController : AWEListDataController {
    NSArray *_dataArray;
    long long _cursor;
}

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *dataArray;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)dataArray;
- (void)setDataArray:(id)arg0;

@end