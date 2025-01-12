//
//     Generated by private class-dump
//

@class CJPayTouchIDEvaluatePolicyData;

@interface CJPayTouchIdManager : NSObject {
    BOOL _isEvaluateDataValid;
    CJPayTouchIDEvaluatePolicyData *_evaluatePolicyData;
    unsigned long long _currentSupportBiopaymentType;
}

@property (retain, nonatomic) CJPayTouchIDEvaluatePolicyData *evaluatePolicyData;
@property (nonatomic) BOOL isEvaluateDataValid;
@property (nonatomic) unsigned long long currentSupportBiopaymentType;

+ (id)currentBioType;
+ (id)currentOriTouchIdData;
+ (BOOL)isBiometryNotAvailable;
+ (unsigned long long)currentSupportBiopaymentType;
+ (BOOL)isErrorBiometryLockout;
+ (void)showTouchIdWithLocalizedReason:(id)arg0 falldBackTitle:(id)arg1 fallBackBlock:(id /* block */)arg2 resultBlock:(id /* block */)arg3;
+ (BOOL)isTouchIDNotEnrolled;
+ (BOOL)touchIdInfoDidChange;
+ (void)showTouchIdWithLocalizedReason:(id)arg0 cancelTitle:(id)arg1 falldBackTitle:(id)arg2 fallBackBlock:(id /* block */)arg3 resultBlock:(id /* block */)arg4;
+ (id)p_evaluatePolicyData;
+ (unsigned long long)p_getPaymentTypeAfterIOS11WithError:(id)arg0 ctx:(id)arg1;
+ (unsigned long long)p_getPaymentTypeBeforeIOS11WithError:(id)arg0 ctx:(id)arg1;
+ (BOOL)p_isIphoneXR;
+ (id)p_sharedInstance;
+ (id)p_currentIdentityTouchIdData;
+ (id)currentTouchIdDataIdentity;
+ (id)p_accountForKeychainWithIdentify;
+ (unsigned long long)p_getSupportPaymentTypeWithError:(id)arg0 ctx:(id)arg1;
+ (void)setCurrentTouchIdDataIdentity:(id)arg0;
+ (id)currentTouchIdDataForCompare;

- (unsigned long long)currentSupportBiopaymentType;
- (void)setCurrentSupportBiopaymentType:(unsigned long long)arg0;
- (id)p_theEvaluatePolicyData;
- (void)p_setEvaluatePolicyDataStateWithEerror:(id)arg0;
- (void)setIsEvaluateDataValid:(BOOL)arg0;
- (BOOL)isEvaluateDataValid;
- (id)evaluatePolicyData;
- (unsigned long long)p_bioPaymentTypeWithContext:(id)arg0 canEvaluatePolicy:(BOOL)arg1 error:(id)arg2;
- (void)setEvaluatePolicyData:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
