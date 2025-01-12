//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, AWEEnterpriseCustomerServiceModule;

@interface AWEEnterpriseInfoInputViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel {
    BOOL _isRegistered;
    NSDictionary *_collectedInfos;
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_buttonText;
    NSArray *_originModules;
    AWEEnterpriseCustomerServiceModule *_feData;
    NSArray *_results;
    NSString *_cardID;
    struct CGSize { double width; double height; } _contentSize;
}

@property (retain, nonatomic) NSDictionary *collectedInfos;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL isRegistered;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSArray *originModules;
@property (retain, nonatomic) AWEEnterpriseCustomerServiceModule *feData;
@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *cardID;

- (id)feData;
- (void)setFeData:(id)arg0;
- (void)configDataWithContent:(id)arg0 ext:(id)arg1 localExt:(id)arg2;
- (void)updateWithExt:(id)arg0;
- (void)updateWithModel:(id)arg0 ext:(id)arg1;
- (void)transferToFEPage;
- (void)setOriginModules:(id)arg0;
- (id)originModules;
- (void)setCollectedInfos:(id)arg0;
- (void)p_refreshCardHeightWithExt:(id)arg0;
- (void)p_updateWithExt:(id)arg0;
- (id)collectedInfos;
- (BOOL)isRegistered;
- (struct CGSize { double x0; double x1; })contentSize;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setResults:(id)arg0;
- (id)results;
- (id)buttonText;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setIsRegistered:(BOOL)arg0;
- (void)setButtonText:(id)arg0;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
