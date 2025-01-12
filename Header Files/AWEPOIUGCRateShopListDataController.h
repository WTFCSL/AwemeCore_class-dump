//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEPOIUGCRateSelectivePOIBarParamsModel;

@interface AWEPOIUGCRateShopListDataController : AWEListDataController {
    NSString *_productId;
    AWEPOIUGCRateSelectivePOIBarParamsModel *_barParamsModel;
    NSNumber *_cursor;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEPOIUGCRateSelectivePOIBarParamsModel *barParamsModel;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)barParamsModel;
- (void)setBarParamsModel:(id)arg0;
- (void)loadFeedWithCompletion:(id /* block */)arg0 isLoadMore:(BOOL)arg1;
- (id)cursor;
- (void).cxx_destruct;
- (id)productId;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)setProductId:(id)arg0;

@end
