//
//     Generated by private class-dump
//

@class NSString, AWESettingBaseViewModel;

@interface AWESettingBaseViewModelConfigImpl : NSObject <AWEComplianceMessage, AWESettingBaseViewModelBizAbilityProtocol> {
    AWESettingBaseViewModel *_weakObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESettingBaseViewModel *weakObject;

+ (void)_aweLazyRegisterLoad;
+ (void)configInit;

- (void)listControlDidChange;
- (id)settingItemModelWithType:(long long)arg0 registerAtViewModel:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setWeakObject:(id)arg0;
- (void)dealloc;
- (id)weakObject;

@end