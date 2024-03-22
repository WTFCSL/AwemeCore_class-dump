//
//     Generated by private class-dump
//

@class NSString, BDPAboutPrivacyRegulationContentView, UILabel, NSMutableArray;
@protocol BDPAboutSubjectViewDelegate;

@interface BDPAboutSubjectView : UIView {
    BOOL _showAllDomains;
    BOOL _showDocketNumber;
    BOOL _showMerchant;
    id<BDPAboutSubjectViewDelegate> _delegate;
    BDPAboutPrivacyRegulationContentView *_privacyView;
    UILabel *_corpTitleLabel;
    UILabel *_corpDescLabel;
    UILabel *_verTitleLabel;
    UILabel *_verDescLabel;
    UILabel *_uptTitleLabel;
    UILabel *_uptDesclabel;
    UILabel *_domainTitleLabel;
    UILabel *_privacyTitleLabel;
    NSMutableArray *_domainList;
    UILabel *_foldDomainsLabel;
    UILabel *_unfoldDomainsLabel;
    UILabel *_docketNumberTitleLabel;
    UILabel *_docketNumberDescLabel;
    NSString *_docketUrl;
    UILabel *_merchantTitleLabel;
    UILabel *_merchantDescLabel;
    NSString *_merchantUrl;
}

@property (retain, nonatomic) UILabel *privacyTitleLabel;
@property (retain, nonatomic) NSMutableArray *domainList;
@property (nonatomic) BOOL showAllDomains;
@property (retain, nonatomic) UILabel *foldDomainsLabel;
@property (retain, nonatomic) UILabel *unfoldDomainsLabel;
@property (retain, nonatomic) UILabel *docketNumberTitleLabel;
@property (retain, nonatomic) UILabel *docketNumberDescLabel;
@property (nonatomic) BOOL showDocketNumber;
@property (copy, nonatomic) NSString *docketUrl;
@property (retain, nonatomic) UILabel *merchantTitleLabel;
@property (retain, nonatomic) UILabel *merchantDescLabel;
@property (nonatomic) BOOL showMerchant;
@property (copy, nonatomic) NSString *merchantUrl;
@property (weak, nonatomic) id<BDPAboutSubjectViewDelegate> delegate;
@property (retain, nonatomic) BDPAboutPrivacyRegulationContentView *privacyView;

- (void)setPrivacyTitleLabel:(id)arg0;
- (id)privacyTitleLabel;
- (void)clearDomainLabels;
- (void)setCorpName:(id)arg0;
- (void)setPrivacyDesc:(id)arg0;
- (id)domainList;
- (void)setDomainList:(id)arg0;
- (id)merchantTitleLabel;
- (void)setMerchantTitleLabel:(id)arg0;
- (id)merchantDescLabel;
- (void)setMerchantDescLabel:(id)arg0;
- (void)setMerchantName:(id)arg0 showMerchant:(BOOL)arg1 merchantUrl:(id)arg2;
- (void)setDocketNumber:(id)arg0 showDocketNumber:(BOOL)arg1 docketUrl:(id)arg2;
- (void)setUnfoldDomainsLabel:(id)arg0;
- (void)clickDomainsUnfold;
- (id)unfoldDomainsLabel;
- (void)setFoldDomainsLabel:(id)arg0;
- (void)clickDomainsFold;
- (id)foldDomainsLabel;
- (void)setDocketNumberTitleLabel:(id)arg0;
- (id)docketNumberTitleLabel;
- (void)setDocketNumberDescLabel:(id)arg0;
- (id)docketNumberDescLabel;
- (BOOL)showMerchant;
- (BOOL)showAllDomains;
- (BOOL)showDocketNumber;
- (void)setShowDocketNumber:(BOOL)arg0;
- (void)setDocketUrl:(id)arg0;
- (id)docketUrl;
- (void)onTapDocketDescLabel;
- (void)setShowMerchant:(BOOL)arg0;
- (void)onTapMerchantDescLabel;
- (void)setShowAllDomains:(BOOL)arg0;
- (id)init;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setDomains:(id)arg0;
- (void)setUpdateTime:(id)arg0;
- (id)merchantUrl;
- (void)setMerchantUrl:(id)arg0;
- (void)setupViews;
- (id)privacyView;
- (void)setPrivacyView:(id)arg0;

@end