//
//     Generated by private class-dump
//

@class NSString, AWEUndertakeStrategySwipeTrigAction, AWEUndertakeStrategyLoginTrigAction;

@interface AWEUndertakeStrategyTrigActionsModel : MTLModel <MTLJSONSerializing> {
    AWEUndertakeStrategySwipeTrigAction *_swipeTrigger;
    AWEUndertakeStrategyLoginTrigAction *_loginTrigger;
}

@property (retain, nonatomic) AWEUndertakeStrategySwipeTrigAction *swipeTrigger;
@property (retain, nonatomic) AWEUndertakeStrategyLoginTrigAction *loginTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)swipeTrigger;
- (id)loginTrigger;
- (void)setSwipeTrigger:(id)arg0;
- (void)setLoginTrigger:(id)arg0;
- (void).cxx_destruct;

@end
