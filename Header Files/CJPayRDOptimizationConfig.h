//
//     Generated by private class-dump
//

@interface CJPayRDOptimizationConfig : JSONModel {
    BOOL _isPopupVCUseCoordinatorPop;
    BOOL _isAddLoadingViewInTopHalfPage;
    BOOL _isTransitionUseSnapshot;
    BOOL _isDisableMonitorRequestBizResult;
}

@property (nonatomic) BOOL isPopupVCUseCoordinatorPop;
@property (nonatomic) BOOL isAddLoadingViewInTopHalfPage;
@property (nonatomic) BOOL isTransitionUseSnapshot;
@property (nonatomic) BOOL isDisableMonitorRequestBizResult;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)isDisableMonitorRequestBizResult;
- (BOOL)isAddLoadingViewInTopHalfPage;
- (BOOL)isTransitionUseSnapshot;
- (BOOL)isPopupVCUseCoordinatorPop;
- (void)setIsPopupVCUseCoordinatorPop:(BOOL)arg0;
- (void)setIsAddLoadingViewInTopHalfPage:(BOOL)arg0;
- (void)setIsTransitionUseSnapshot:(BOOL)arg0;
- (void)setIsDisableMonitorRequestBizResult:(BOOL)arg0;

@end
