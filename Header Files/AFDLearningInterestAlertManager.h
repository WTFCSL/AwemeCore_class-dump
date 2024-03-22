//
//     Generated by private class-dump
//

@interface AFDLearningInterestAlertManager : NSObject

+ (long long)minSelectInterestNumber;
+ (BOOL)enableSelectInterestAlert;
+ (BOOL)isAlertBlockedByIntervalDays;
+ (void)checkToShowAlertWithCompletion:(id /* block */)arg0;
+ (BOOL)canShowSelectInterestAlert;
+ (void)markHasShowLearningAlert:(unsigned long long)arg0;
+ (void)clearInterestSet;
+ (void)addInterestLabelVideoWithItemID:(id)arg0;
+ (long long)interestAlerType;
+ (void)saveInterestLabels:(id)arg0 completion:(id /* block */)arg1;
+ (id)interestAlertTextModel;
+ (void)trackInterestAlertEvent:(id)arg0 param:(id)arg1;
+ (BOOL)isFromInterestLabel:(id)arg0;

@end