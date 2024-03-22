//
//     Generated by private class-dump
//

@interface AWEInnerPushExitController : NSObject {
    BOOL _hasHitExitRule;
}

@property (nonatomic) BOOL hasHitExitRule;

- (BOOL)canShowInnerPushWithRequest:(id)arg0;
- (void)didDismissInnerPushWithRequest:(id)arg0 reason:(long long)arg1;
- (id)exitRuleConfigFromSettings;
- (BOOL)hitExitRuleWithGradeKey:(id)arg0 ruleItemName:(id)arg1 ruleArray:(id)arg2;
- (void)setHasHitExitRule:(BOOL)arg0;
- (id)exitActionItemKeyWithGradeKey:(id)arg0 ruleItemName:(id)arg1;
- (void)updateExitActionInfoWithReason:(long long)arg0 gradeKey:(id)arg1 ruleItemName:(id)arg2 ruleArray:(id)arg3;
- (void)updateExitActionItemInfo:(id)arg0 rule:(id)arg1 hitRule:(BOOL *)arg2;
- (BOOL)hasHitExitRule;
- (void)reportHitExitRule:(id)arg0 gradeKey:(id)arg1;

@end
