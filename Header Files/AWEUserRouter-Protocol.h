//
//     Generated by private class-dump
//

@protocol AWEUserRouter <HTSService>

+ (id)resetPassword:(id)arg0;
+ (id)resetPasswordFillCode:(id)arg0 context:(id)arg1;
+ (id)bindFillInPhoneNumber;
+ (id)bindFillInPhoneNumber:(BOOL)arg0;
+ (id)bindFillInCode:(id)arg0;
+ (id)rebindFillInOldPhoneNumber:(id)arg0;
+ (id)rebindFillInOldCode:(id)arg0;
+ (id)rebindFillInNewPhoneNumber:(id)arg0;
+ (id)rebindFillInNewCode:(id)arg0;
+ (id)safeRebind:(id)arg0;
+ (id)rebindHighRiskFillInOldPhoneNumber:(id)arg0;
+ (id)rebindHighRiskFillInNewPhoneNumber:(id)arg0;
+ (id)rebindHighRiskFillInNewCode:(id)arg0;
+ (id)rebindNotChineseMainLandFillInOldPhoneNumber:(id)arg0;
+ (id)reBindNotChineseMainLandFillInOldCode:(id)arg0;

@end