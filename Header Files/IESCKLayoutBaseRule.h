//
//     Generated by private class-dump
//

@class NSString, IESLiveLayoutRoomContainer;
@protocol IESCKLayoutRuleDelegateProtocol;

@interface IESCKLayoutBaseRule : NSObject <IESCKLayoutRuleProtocol> {
    id<IESCKLayoutRuleDelegateProtocol> ruleDelegate;
    IESLiveLayoutRoomContainer *_provider;
}

@property (weak, nonatomic) IESLiveLayoutRoomContainer *provider;
@property (weak, nonatomic) id<IESCKLayoutRuleDelegateProtocol> ruleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleOrientationChanged:(id)arg0;
- (void)bindProvider:(id)arg0;
- (id)layoutView:(id)arg0;
- (id)ruleDelegate;
- (void)setRuleDelegate:(id)arg0;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (id)globalContext;

@end
