//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface CJPayChooseDyPayMethodGroupModel : NSObject {
    BOOL _isPayAgainScene;
    BOOL _isFromCombinePay;
    BOOL _isCombinePayDetailStatus;
    BOOL _isResignedBankCardCanSelect;
    long long _methodGroupType;
    NSString *_methodGroupTitle;
    NSString *_creditPayDesc;
    long long _displayNewBankCardCount;
    NSArray *_methodList;
    NSString *_addBankCardFoldDesc;
    NSArray *_subPayTypeIndexList;
}

@property (nonatomic) long long methodGroupType;
@property (copy, nonatomic) NSString *methodGroupTitle;
@property (copy, nonatomic) NSString *creditPayDesc;
@property (nonatomic) long long displayNewBankCardCount;
@property (copy, nonatomic) NSArray *methodList;
@property (copy, nonatomic) NSString *addBankCardFoldDesc;
@property (copy, nonatomic) NSArray *subPayTypeIndexList;
@property (nonatomic) BOOL isPayAgainScene;
@property (nonatomic) BOOL isFromCombinePay;
@property (nonatomic) BOOL isCombinePayDetailStatus;
@property (nonatomic) BOOL isResignedBankCardCanSelect;

- (id)methodList;
- (void)setMethodList:(id)arg0;
- (void)setIsFromCombinePay:(BOOL)arg0;
- (BOOL)isFromCombinePay;
- (long long)methodGroupType;
- (void)setMethodGroupType:(long long)arg0;
- (id)methodGroupTitle;
- (void)setMethodGroupTitle:(id)arg0;
- (id)creditPayDesc;
- (void)setCreditPayDesc:(id)arg0;
- (long long)displayNewBankCardCount;
- (void)setDisplayNewBankCardCount:(long long)arg0;
- (id)addBankCardFoldDesc;
- (void)setAddBankCardFoldDesc:(id)arg0;
- (id)subPayTypeIndexList;
- (void)setSubPayTypeIndexList:(id)arg0;
- (BOOL)isPayAgainScene;
- (void)setIsPayAgainScene:(BOOL)arg0;
- (BOOL)isCombinePayDetailStatus;
- (void)setIsCombinePayDetailStatus:(BOOL)arg0;
- (BOOL)isResignedBankCardCanSelect;
- (void)setIsResignedBankCardCanSelect:(BOOL)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end