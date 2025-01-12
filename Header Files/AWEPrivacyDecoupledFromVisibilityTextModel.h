//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPrivacyDecoupledFromVisibilityTextModel : MTLModel <MTLJSONSerializing> {
    NSString *_privacyDecouplingForPrivateAccountPopupTitle;
    NSString *_privacyDecouplingForPrivateAccountPopupContent;
    NSString *_duetDecouplingPopupTitle;
    NSString *_duetDecouplingPopupContent;
    NSString *_downloadDecouplingPopupTitle;
    NSString *_downloadDecouplingPopupContent;
    NSString *_storyShareDecouplingPopupTitle;
    NSString *_storyShareDecouplingPopupContent;
    NSString *_advanceSettingsTipsForPrivacyDecoupling;
}

@property (copy, nonatomic) NSString *privacyDecouplingForPrivateAccountPopupTitle;
@property (copy, nonatomic) NSString *privacyDecouplingForPrivateAccountPopupContent;
@property (copy, nonatomic) NSString *duetDecouplingPopupTitle;
@property (copy, nonatomic) NSString *duetDecouplingPopupContent;
@property (copy, nonatomic) NSString *downloadDecouplingPopupTitle;
@property (copy, nonatomic) NSString *downloadDecouplingPopupContent;
@property (copy, nonatomic) NSString *storyShareDecouplingPopupTitle;
@property (copy, nonatomic) NSString *storyShareDecouplingPopupContent;
@property (copy, nonatomic) NSString *advanceSettingsTipsForPrivacyDecoupling;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)advanceSettingsTipsForPrivacyDecoupling;
- (id)privacyDecouplingForPrivateAccountPopupTitle;
- (id)privacyDecouplingForPrivateAccountPopupContent;
- (id)duetDecouplingPopupTitle;
- (id)duetDecouplingPopupContent;
- (id)storyShareDecouplingPopupTitle;
- (id)storyShareDecouplingPopupContent;
- (id)downloadDecouplingPopupTitle;
- (id)downloadDecouplingPopupContent;
- (void)setPrivacyDecouplingForPrivateAccountPopupTitle:(id)arg0;
- (void)setPrivacyDecouplingForPrivateAccountPopupContent:(id)arg0;
- (void)setDuetDecouplingPopupTitle:(id)arg0;
- (void)setDuetDecouplingPopupContent:(id)arg0;
- (void)setDownloadDecouplingPopupTitle:(id)arg0;
- (void)setDownloadDecouplingPopupContent:(id)arg0;
- (void)setStoryShareDecouplingPopupTitle:(id)arg0;
- (void)setStoryShareDecouplingPopupContent:(id)arg0;
- (void)setAdvanceSettingsTipsForPrivacyDecoupling:(id)arg0;
- (void).cxx_destruct;

@end
