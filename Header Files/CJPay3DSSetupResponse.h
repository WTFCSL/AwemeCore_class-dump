//
//     Generated by private class-dump
//

@class CJPay3DSAuthInfo, NSString;

@interface CJPay3DSSetupResponse : CJPayBaseResponse {
    CJPay3DSAuthInfo *_authInfo;
    NSString *_channelOrderNo;
    NSString *_outChannelOrderNo;
}

@property (retain, nonatomic) CJPay3DSAuthInfo *authInfo;
@property (copy, nonatomic) NSString *channelOrderNo;
@property (copy, nonatomic) NSString *outChannelOrderNo;

+ (id)keyMapper;

- (id)channelOrderNo;
- (void)setChannelOrderNo:(id)arg0;
- (id)outChannelOrderNo;
- (void)setOutChannelOrderNo:(id)arg0;
- (void).cxx_destruct;
- (id)authInfo;
- (void)setAuthInfo:(id)arg0;

@end
