//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHPChannelEditAbilityImpl;

@interface AWEHPChannelEditAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelEditAbility> {
    id<AWEHPChannelEditAbilityImpl> _target;
}

@property (weak, nonatomic) id<AWEHPChannelEditAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPinTopComponentWithModel:(id)arg0 showResult:(id /* block */)arg1 pinTopCompletion:(id /* block */)arg2;
- (id)generatePinTopTaskWithModel:(id)arg0;
- (void)generatePinTopTaskWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)showPinTopComponentWithModel:(id)arg0 configModel:(id)arg1 showResult:(id /* block */)arg2 pinTopCompletion:(id /* block */)arg3;
- (void).cxx_destruct;
- (void)setTarget:(id)arg0;
- (id)target;

@end