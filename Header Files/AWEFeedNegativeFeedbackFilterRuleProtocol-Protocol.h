//
//     Generated by private class-dump
//

@protocol AWEFeedNegativeFeedbackFilterDataProtocol;

@protocol AWEFeedNegativeFeedbackFilterRuleProtocol <NSObject>

@property (weak, nonatomic) id<AWEFeedNegativeFeedbackFilterDataProtocol> dataDelegate;

- (BOOL)shouldBeFilteredWithModel:(id)arg0;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg0;

@end