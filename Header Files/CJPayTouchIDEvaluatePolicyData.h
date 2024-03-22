//
//     Generated by private class-dump
//

@class NSData;

@interface CJPayTouchIDEvaluatePolicyData : NSObject {
    BOOL _isLockOut;
    BOOL _isBiometryNotAvailable;
    BOOL _isTouchIDNotEnrolled;
    unsigned long long _currentSupportBiopaymentType;
    NSData *_evaluatedPolicyDomainState;
}

@property (nonatomic) BOOL isLockOut;
@property (nonatomic) BOOL isBiometryNotAvailable;
@property (nonatomic) BOOL isTouchIDNotEnrolled;
@property (nonatomic) unsigned long long currentSupportBiopaymentType;
@property (retain, nonatomic) NSData *evaluatedPolicyDomainState;

- (BOOL)isBiometryNotAvailable;
- (unsigned long long)currentSupportBiopaymentType;
- (BOOL)isTouchIDNotEnrolled;
- (BOOL)isLockOut;
- (void)setIsLockOut:(BOOL)arg0;
- (void)setIsBiometryNotAvailable:(BOOL)arg0;
- (void)setIsTouchIDNotEnrolled:(BOOL)arg0;
- (void)setCurrentSupportBiopaymentType:(unsigned long long)arg0;
- (void)setEvaluatedPolicyDomainState:(id)arg0;
- (void).cxx_destruct;
- (id)evaluatedPolicyDomainState;

@end