//
//     Generated by private class-dump
//

@class NSString, DYPhoneNumberModel, AWELoginButtonTagModel;

@interface AWECarrierLoginViewModel : NSObject {
    NSString *_loginTitle;
    NSString *_loginButtonTitle;
    DYPhoneNumberModel *_phoneNumber;
    long long _carrierType;
    long long _protocolOffset;
    AWELoginButtonTagModel *_tagModel;
}

@property (copy, nonatomic) NSString *loginTitle;
@property (copy, nonatomic) NSString *loginButtonTitle;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (nonatomic) long long carrierType;
@property (nonatomic) long long protocolOffset;
@property (retain, nonatomic) AWELoginButtonTagModel *tagModel;

- (void)setCarrierType:(long long)arg0;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:(id)arg0;
- (void)setTagModel:(id)arg0;
- (id)tagModel;
- (long long)carrierType;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:(id)arg0;
- (void)setProtocolOffset:(long long)arg0;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;

@end
