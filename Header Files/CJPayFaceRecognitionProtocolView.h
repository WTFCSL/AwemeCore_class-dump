//
//     Generated by private class-dump
//

@class UILabel, CJPayStyleCheckBox, NSString;
@protocol CJPayTrackerProtocol;

@interface CJPayFaceRecognitionProtocolView : UIView {
    BOOL _checkBoxIsSelect;
    CJPayStyleCheckBox *_checkBoxButton;
    NSString *_agreementName;
    NSString *_agreementURL;
    id<CJPayTrackerProtocol> _trackDelegate;
    UILabel *_protocolLabel;
}

@property (retain, nonatomic) CJPayStyleCheckBox *checkBoxButton;
@property (retain, nonatomic) UILabel *protocolLabel;
@property (nonatomic) BOOL checkBoxIsSelect;
@property (copy, nonatomic) NSString *agreementName;
@property (copy, nonatomic) NSString *agreementURL;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

- (id)agreementURL;
- (void)setAgreementURL:(id)arg0;
- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (void)p_setupUI;
- (id)protocolLabel;
- (void)setProtocolLabel:(id)arg0;
- (id)checkBoxButton;
- (void)setCheckBoxButton:(id)arg0;
- (void)protocolLabelTapped:(id)arg0;
- (id)agreementName;
- (void)setAgreementName:(id)arg0;
- (void)updateWithProtocolURL:(id)arg0;
- (id)getProtocolHeadStr;
- (void)checkBoxButtonClick;
- (id)initWithAgreementName:(id)arg0 agreementURL:(id)arg1;
- (BOOL)checkBoxIsSelect;
- (void)setCheckBoxIsSelect:(BOOL)arg0;
- (void).cxx_destruct;

@end
