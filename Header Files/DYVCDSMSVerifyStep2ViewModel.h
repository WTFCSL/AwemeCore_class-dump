//
//     Generated by private class-dump
//

@class NSString, DYPhoneNumberModel;

@interface DYVCDSMSVerifyStep2ViewModel : NSObject {
    NSString *_UID;
    DYPhoneNumberModel *_phoneNumber;
}

@property (copy, nonatomic) NSString *UID;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;

+ (id)instanceWithUID:(id)arg0 phoneNumber:(id)arg1;

- (id)verifyWithCode:(id)arg0;
- (id)sendCode;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (id)UID;
- (id)title;
- (id)subTitle;
- (void)setUID:(id)arg0;

@end