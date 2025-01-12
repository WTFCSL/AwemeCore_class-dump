//
//     Generated by private class-dump
//

@class NSString, AFDGeneralButtonECommercePostActivityPushInfo, AFDGeneralButtonECommercePostActivityPopupInfo;

@interface AFDGeneralButtonECommercePostActivityDetailModel : MTLModel <MTLJSONSerializing> {
    BOOL _shouldHideButton;
    long long _afterwardActionType;
    AFDGeneralButtonECommercePostActivityPushInfo *_pushInfo;
    AFDGeneralButtonECommercePostActivityPopupInfo *_popupInfo;
}

@property (nonatomic) BOOL shouldHideButton;
@property (nonatomic) long long afterwardActionType;
@property (retain, nonatomic) AFDGeneralButtonECommercePostActivityPushInfo *pushInfo;
@property (retain, nonatomic) AFDGeneralButtonECommercePostActivityPopupInfo *popupInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupInfoJSONTransformer;
+ (id)pushInfoJSONTransformer;
+ (id)afterwardActionTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldHideButton;
- (long long)afterwardActionType;
- (id)popupInfo;
- (id)pushInfo;
- (void)setPopupInfo:(id)arg0;
- (void)setShouldHideButton:(BOOL)arg0;
- (void)setAfterwardActionType:(long long)arg0;
- (void)setPushInfo:(id)arg0;
- (void).cxx_destruct;

@end
