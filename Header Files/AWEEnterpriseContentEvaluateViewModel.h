//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber, NSAttributedString;

@interface AWEEnterpriseContentEvaluateViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel {
    NSNumber *_selectedButtonIndex;
    NSString *_unsolveText;
    NSString *_solveText;
    long long _buttonStatus;
    NSAttributedString *_attrText;
    NSDictionary *_contentAttributes;
    NSString *_unsolveApi;
    NSString *_solveApi;
    NSString *_cardID;
    struct CGSize { double width; double height; } _contentSize;
}

@property (retain, nonatomic) NSNumber *selectedButtonIndex;
@property (copy, nonatomic) NSString *unsolveText;
@property (copy, nonatomic) NSString *solveText;
@property (nonatomic) long long buttonStatus;
@property (retain, nonatomic) NSDictionary *contentAttributes;
@property (copy, nonatomic) NSString *unsolveApi;
@property (copy, nonatomic) NSString *solveApi;
@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) NSAttributedString *attrText;

+ (id)contentAttributes;

- (long long)buttonStatus;
- (void)setButtonStatus:(long long)arg0;
- (void)configDataWithContent:(id)arg0 ext:(id)arg1 localExt:(id)arg2;
- (void)handleUnsolved;
- (void)handleSolved;
- (double)heightWithoutText;
- (void)setAttrText:(id)arg0;
- (id)attrText;
- (void)refreshHeightWithText:(id)arg0;
- (void)setSolveApi:(id)arg0;
- (void)setSolveText:(id)arg0;
- (void)setUnsolveApi:(id)arg0;
- (void)setUnsolveText:(id)arg0;
- (id)solveApi;
- (id)unsolveApi;
- (id)unsolveText;
- (id)solveText;
- (struct CGSize { double x0; double x1; })contentSize;
- (void).cxx_destruct;
- (void)setContentAttributes:(id)arg0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (id)contentAttributes;
- (id)selectedButtonIndex;
- (void)setSelectedButtonIndex:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
