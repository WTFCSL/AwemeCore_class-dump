//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDouPlusIAPProductModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSelected;
    NSString *_iapID;
    long long _payAmount;
    long long _payAmountInt;
    long long _budget;
    long long _budgetInt;
}

@property (copy, nonatomic) NSString *iapID;
@property (nonatomic) long long payAmount;
@property (nonatomic) long long payAmountInt;
@property (nonatomic) long long budget;
@property (nonatomic) long long budgetInt;
@property (nonatomic) BOOL isSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)payAmountInt;
- (id)payAmountString;
- (id)iapID;
- (void)setIapID:(id)arg0;
- (long long)payAmount;
- (void)setPayAmount:(long long)arg0;
- (void)setPayAmountInt:(long long)arg0;
- (long long)budgetInt;
- (void)setBudgetInt:(long long)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)budget;
- (void)setBudget:(long long)arg0;
- (BOOL)isSelected;

@end
