//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol QueryMemberPayTypeItem;

@interface CJPaySignInformation : JSONModel {
    NSString *_logoURL;
    NSString *_serviceName;
    NSString *_merchantNameTitle;
    NSString *_merchantName;
    NSString *_serviceDescribeTitle;
    NSString *_serviceDescribe;
    NSArray<QueryMemberPayTypeItem> *_payTypeList;
    NSString *_deductMethodTitle;
    NSString *_deductMethodSubDesc;
    NSString *_buttonAction;
    NSString *_templateId;
}

@property (copy, nonatomic) NSString *logoURL;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *merchantNameTitle;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *serviceDescribeTitle;
@property (copy, nonatomic) NSString *serviceDescribe;
@property (copy, nonatomic) NSArray<QueryMemberPayTypeItem> *payTypeList;
@property (copy, nonatomic) NSString *deductMethodTitle;
@property (copy, nonatomic) NSString *deductMethodSubDesc;
@property (copy, nonatomic) NSString *buttonAction;
@property (copy, nonatomic) NSString *templateId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)deductMethodSubDesc;
- (id)payTypeList;
- (id)merchantNameTitle;
- (void)setMerchantNameTitle:(id)arg0;
- (id)serviceDescribeTitle;
- (void)setServiceDescribeTitle:(id)arg0;
- (id)serviceDescribe;
- (void)setServiceDescribe:(id)arg0;
- (void)setPayTypeList:(id)arg0;
- (id)deductMethodTitle;
- (void)setDeductMethodTitle:(id)arg0;
- (void)setDeductMethodSubDesc:(id)arg0;
- (void).cxx_destruct;
- (id)serviceName;
- (void)setServiceName:(id)arg0;
- (id)buttonAction;
- (void)setButtonAction:(id)arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (id)merchantName;
- (void)setMerchantName:(id)arg0;
- (id)logoURL;
- (void)setLogoURL:(id)arg0;

@end
