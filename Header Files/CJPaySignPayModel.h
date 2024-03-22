//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, NSArray;

@interface CJPaySignPayModel : NSObject {
    BOOL _isNewUser;
    NSURL *_logoImageURL;
    NSString *_title;
    NSString *_subTitle;
    NSString *_closePayAmount;
    NSString *_openPayAmount;
    NSString *_voucherMsg;
    NSString *_switchDesc;
    NSString *_buttonAction;
    NSString *_buttonDesc;
    NSString *_serviceDesc;
    NSString *_nextDeductDate;
    NSString *_signPaySwitch;
    NSURL *_deductIconImageURL;
    NSString *_deductMethodDesc;
    NSString *_deductMethodSubDesc;
    NSDictionary *_protocolGroupNames;
    NSArray *_protocolInfo;
}

@property (nonatomic) BOOL isNewUser;
@property (retain, nonatomic) NSURL *logoImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *closePayAmount;
@property (copy, nonatomic) NSString *openPayAmount;
@property (copy, nonatomic) NSString *voucherMsg;
@property (copy, nonatomic) NSString *switchDesc;
@property (copy, nonatomic) NSString *buttonAction;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *serviceDesc;
@property (copy, nonatomic) NSString *nextDeductDate;
@property (copy, nonatomic) NSString *signPaySwitch;
@property (retain, nonatomic) NSURL *deductIconImageURL;
@property (copy, nonatomic) NSString *deductMethodDesc;
@property (copy, nonatomic) NSString *deductMethodSubDesc;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSArray *protocolInfo;

- (id)buttonDesc;
- (void)setButtonDesc:(id)arg0;
- (id)serviceDesc;
- (void)setServiceDesc:(id)arg0;
- (id)protocolInfo;
- (void)setProtocolInfo:(id)arg0;
- (void)setVoucherMsg:(id)arg0;
- (id)protocolGroupNames;
- (void)setProtocolGroupNames:(id)arg0;
- (id)voucherMsg;
- (id)deductMethodSubDesc;
- (void)setDeductMethodSubDesc:(id)arg0;
- (id)nextDeductDate;
- (void)setNextDeductDate:(id)arg0;
- (id)deductMethodDesc;
- (void)setDeductMethodDesc:(id)arg0;
- (id)deductIconImageURL;
- (void)setSignPaySwitch:(id)arg0;
- (void)p_handleMarketInfoStr:(id)arg0;
- (void)setSwitchDesc:(id)arg0;
- (void)p_handleDeductMethodInfo:(id)arg0;
- (void)setClosePayAmount:(id)arg0;
- (void)setOpenPayAmount:(id)arg0;
- (void)setDeductIconImageURL:(id)arg0;
- (id)closePayAmount;
- (id)openPayAmount;
- (id)switchDesc;
- (id)signPaySwitch;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg0;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)buttonAction;
- (void)setButtonAction:(id)arg0;
- (id)logoImageURL;
- (void)setLogoImageURL:(id)arg0;
- (void)setIsNewUser:(BOOL)arg0;
- (BOOL)isNewUser;

@end
