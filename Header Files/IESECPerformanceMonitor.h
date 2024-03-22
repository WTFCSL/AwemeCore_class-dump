//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESECPerformanceMonitor : NSObject {
    NSMutableDictionary *_renderTimeMultiDic;
    NSMutableDictionary *_orderSubmitTimeDic;
    NSString *_fromSkuPanel;
}

@property (retain, nonatomic) NSMutableDictionary *renderTimeMultiDic;
@property (retain, nonatomic) NSMutableDictionary *orderSubmitTimeDic;
@property (retain, nonatomic) NSString *fromSkuPanel;

+ (id)sharedManager;

- (void)addRenderPerformancePointWithPoint:(id)arg0;
- (void)reportEnterSubmitOrdersWithSchema:(id)arg0;
- (id)getRenderTimeDic;
- (id)getCurFromSkuPanel;
- (void)buyNowClick;
- (void)setCurFromSkuPanel:(id)arg0;
- (id)renderTimeMultiDic;
- (void)setFromSkuPanel:(id)arg0;
- (id)fromSkuPanel;
- (id)orderSubmitTimeDic;
- (void)addCJPayPerformanceTrackerWithPoint:(id)arg0;
- (void)addRenderPerformancePointDic:(id)arg0 isClear:(BOOL)arg1;
- (id)getRenderSchemaWithSchema:(id)arg0;
- (void)orderSubmitClick;
- (void)addOrderSubmitPoint:(id)arg0;
- (void)addOrderSubmitPointDic:(id)arg0;
- (void)setRenderTimeMultiDic:(id)arg0;
- (void)setOrderSubmitTimeDic:(id)arg0;
- (void).cxx_destruct;

@end
