//
//     Generated by private class-dump
//

@class WBAuthorizeResponse;

@interface WBSendMessageToWeiboResponse : WBBaseResponse {
    WBAuthorizeResponse *_authResponse;
}

@property (retain, nonatomic) WBAuthorizeResponse *authResponse;

- (void)storeToDictionary:(id)arg0;
- (BOOL)canBeReceived;
- (void)setAuthResponse:(id)arg0;
- (void).cxx_destruct;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)arg0;
- (id)authResponse;

@end
