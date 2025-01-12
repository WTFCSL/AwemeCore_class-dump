//
//     Generated by private class-dump
//

@class NSString;

@interface WBAuthorizeRequest : WBBaseRequest {
    BOOL _shouldShowWebViewForAuthIfCannotSSO;
    NSString *redirectURI;
    NSString *scope;
}

@property (retain, nonatomic) NSString *redirectURI;
@property (retain, nonatomic) NSString *scope;
@property (nonatomic) BOOL shouldShowWebViewForAuthIfCannotSSO;

+ (Class)associateResponseClass;

- (void)setShouldShowWebViewForAuthIfCannotSSO:(BOOL)arg0;
- (BOOL)shouldShowWebViewForAuthIfCannotSSO;
- (void)storeToDictionary:(id)arg0;
- (BOOL)canBeReceived;
- (id)validate;
- (id)init;
- (void).cxx_destruct;
- (void)setScope:(id)arg0;
- (id)scope;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)arg0;
- (id)redirectURI;
- (void)setRedirectURI:(id)arg0;

@end
