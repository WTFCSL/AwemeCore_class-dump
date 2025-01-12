//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPassportSendCodeTicketManager : NSObject {
    NSString *_smsContent;
    NSString *_channelMobile;
    NSString *_verifyTicket;
    NSString *_nextURL;
}

@property (copy, nonatomic) NSString *nextURL;
@property (copy, nonatomic) NSString *smsContent;
@property (copy, nonatomic) NSString *channelMobile;
@property (copy, nonatomic) NSString *verifyTicket;
@property (readonly, copy, nonatomic) NSString *nextURLWithTicket;

+ (id)sharedInstance;

- (id)verifyTicket;
- (void)setVerifyTicket:(id)arg0;
- (void)setLatestTicket:(id)arg0;
- (id)nextURL;
- (void)setNextURL:(id)arg0;
- (id)smsContent;
- (void)setSmsContent:(id)arg0;
- (id)channelMobile;
- (void)setChannelMobile:(id)arg0;
- (id)nextURLWithTicket;
- (void).cxx_destruct;

@end
