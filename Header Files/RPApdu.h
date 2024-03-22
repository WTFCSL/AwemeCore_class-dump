//
//     Generated by private class-dump
//

@class NSData;

@interface RPApdu : NSObject {
    NSData *_KS_ENC;
    NSData *_KS_MAC;
    NSData *_SSC;
}

@property (copy, nonatomic) NSData *KS_ENC;
@property (copy, nonatomic) NSData *KS_MAC;
@property (copy, nonatomic) NSData *SSC;

- (id)RP_update_SSC:(id)arg0;
- (id)RP_protectApdu:(id)arg0;
- (void)setSSC:(id)arg0;
- (void)setKS_ENC:(id)arg0;
- (void)setKS_MAC:(id)arg0;
- (id)SSC;
- (id)KS_ENC;
- (id)KS_MAC;
- (id)RP_get_MAC:(id)arg0 key:(id)arg1;
- (id)RP_protect7816APDU:(id)arg0;
- (id)RP_unprotectApdu:(id)arg0 sw1:(unsigned char)arg1 sw2:(unsigned char)arg2;
- (void).cxx_destruct;

@end
