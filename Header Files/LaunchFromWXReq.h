//
//     Generated by private class-dump
//

@class NSString, WXMediaMessage;

@interface LaunchFromWXReq : BaseReq {
    WXMediaMessage *_message;
    NSString *_lang;
    NSString *_country;
}

@property (retain, nonatomic) WXMediaMessage *message;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;

- (void)setMessage:(id)arg0;
- (id)country;
- (void).cxx_destruct;
- (id)message;
- (void)setCountry:(id)arg0;
- (id)lang;
- (void)setLang:(id)arg0;

@end