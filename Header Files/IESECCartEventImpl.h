//
//     Generated by private class-dump
//

@class IESECCartViewController;

@interface IESECCartEventImpl : NSObject {
    IESECCartViewController *_cartVC;
}

@property (weak, nonatomic) IESECCartViewController *cartVC;

- (void)selfTrackerWithEventData:(id)arg0;
- (id)cartVC;
- (void)trackWithEventOperation:(id)arg0;
- (id)initWithCartVC:(id)arg0;
- (void)selfQuitCartWithEventData:(id)arg0;
- (void)cartHeaderTabChangeWithEventData:(id)arg0;
- (void)selfOpenSkuPanelWithEventData:(id)arg0;
- (void)selfOpenCrossShopDiscountWithEventData:(id)arg0;
- (void)counterInputKeyboardOffsetWithEventData:(id)arg0;
- (void)counterInputKeyboardHideWithEventData:(id)arg0;
- (void)selfOpenDiscountPanelWithEventData:(id)arg0;
- (void)selfScrollToTopWithEventData:(id)arg0;
- (void)selfTabbarTappedWithEventData:(id)arg0;
- (void)selfRecommendResetWithEventData:(id)arg0;
- (void)selfCartRefreshWithEventData:(id)arg0;
- (void)selfCountDownRefreshWithEventData:(id)arg0;
- (void)selfChangeCounterActiveWithEventData:(id)arg0;
- (void)selfRecommendProductCardClickWithEventData:(id)arg0;
- (void)selfRecommendFindMoreWithEventData:(id)arg0;
- (void)selfRecommendAddToCartWithEventData:(id)arg0;
- (void)selfRecommendShowProductWithEventData:(id)arg0;
- (void)selfShopSelectedWhenSelectCartWithRenderNode:(id)arg0 accumulateDict:(id *)arg1;
- (void)setCartVC:(id)arg0;
- (void).cxx_destruct;

@end