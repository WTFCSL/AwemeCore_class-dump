//
//     Generated by private class-dump
//

@class NSMutableSet, IESECOrderListBaseViewController;

@interface IESECOrderBaseEventImpl : NSObject {
    IESECOrderListBaseViewController *_viewController;
    NSMutableSet *_onceKeys;
}

@property (retain, nonatomic) NSMutableSet *onceKeys;
@property (weak, nonatomic) IESECOrderListBaseViewController *viewController;

- (void)selfDelayWithEventData:(id)arg0;
- (void)selfQuitPageWithEventData:(id)arg0;
- (void)selfScrollToTopWithEventData:(id)arg0;
- (void)reportErrorWithFuncionName:(id)arg0 eventData:(id)arg1;
- (void)showContextMenuWithButtonList:(id)arg0 fromView:(id)arg1 node:(id)arg2 arrowDirection:(unsigned long long)arg3;
- (id)onceKeys;
- (void)selfQueryWhenAppearWithEventData:(id)arg0;
- (void)selfSaveNodeWithEventData:(id)arg0;
- (void)selfUseBridgeWithEventData:(id)arg0;
- (void)selfOrderShowMoreMenuWithEventData:(id)arg0;
- (void)selfDoOnceWithEventData:(id)arg0;
- (void)selfRegisterScrollStrategyWithEventData:(id)arg0;
- (void)selfUpdateRawParamsWithEventData:(id)arg0;
- (void)selfResetGuessYouLikeWithEventData:(id)arg0;
- (void)selfUpdateCustomFieldsWithEventData:(id)arg0;
- (void)setOnceKeys:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg0;

@end
