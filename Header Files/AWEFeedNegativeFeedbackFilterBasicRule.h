//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEFeedNegativeFeedbackFilterDataProtocol;

@interface AWEFeedNegativeFeedbackFilterBasicRule : NSObject <AWEFeedNegativeFeedbackFilterRuleProtocol> {
    id<AWEFeedNegativeFeedbackFilterDataProtocol> dataDelegate;
}

@property (weak, nonatomic) id<AWEFeedNegativeFeedbackFilterDataProtocol> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBeFilteredWithModel:(id)arg0;
- (void).cxx_destruct;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg0;

@end
