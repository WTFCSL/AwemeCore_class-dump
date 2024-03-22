//
//     Generated by private class-dump
//

@interface AWEPOIModalPageModel : NSObject {
    BOOL _tapBlankToClose;
    BOOL _contentScrollEnabled;
    long long _pageSize;
    AWEPOIModalPageModel *_prePage;
    AWEPOIModalPageModel *_nextPage;
}

@property (nonatomic) double topOffset;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL tapBlankToClose;
@property (weak, nonatomic) AWEPOIModalPageModel *prePage;
@property (weak, nonatomic) AWEPOIModalPageModel *nextPage;
@property (nonatomic) BOOL contentScrollEnabled;

+ (double)pageHeightForPageSize:(long long)arg0;
+ (long long)pageSizeForPageHeight:(double)arg0;

- (void)setPrePage:(id)arg0;
- (id)prePage;
- (BOOL)hasPrePageSizeAndNotSelf;
- (BOOL)hasNextPageSizeAndNotSelf;
- (BOOL)contentScrollEnabled;
- (BOOL)tapBlankToClose;
- (void)setTapBlankToClose:(BOOL)arg0;
- (id)initWithPageSize:(long long)arg0 contentScrollEnabled:(BOOL)arg1;
- (void)setContentScrollEnabled:(BOOL)arg0;
- (double)topOffset;
- (void)setTopOffset:(double)arg0;
- (void).cxx_destruct;
- (id)initWithPageSize:(long long)arg0;
- (long long)pageSize;
- (void)setPageSize:(long long)arg0;
- (id)nextPage;
- (void)setNextPage:(id)arg0;

@end