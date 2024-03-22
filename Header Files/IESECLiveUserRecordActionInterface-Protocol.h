//
//     Generated by private class-dump
//

@class NSMutableArray;

@protocol IESECLiveUserRecordActionInterface <NSObject>

@property (retain, nonatomic) NSMutableArray *clickProductIDArray;
@property (retain, nonatomic) NSMutableArray *showProductIDArray;

- (void)recordClickByProductID:(id)arg0 promotionID:(id)arg1;
- (void)recordShowByProductID:(id)arg0;
- (void)recordCurExplainGoodByProductID:(id)arg0;
- (void)recordClickTabProductIDs:(id)arg0;
- (id)getRecommendInfoForEcomBoard;
- (id)getProductClickInfo;
- (id)getProductShowInfo;
- (id)getLastExplainProductID;
- (id)getNewestClickProductID;
- (id)getClickTabProductIDs;
- (id)clickProductIDArray;
- (void)setClickProductIDArray:(id)arg0;
- (id)showProductIDArray;
- (void)setShowProductIDArray:(id)arg0;

@end