//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface APRiskRpcConfiguration : NSObject {
    int _timeout;
    NSString *_gatewayURL;
    NSDictionary *_headers;
}

@property (nonatomic) int timeout;
@property (retain, nonatomic) NSString *gatewayURL;
@property (retain, nonatomic) NSDictionary *headers;

- (void)setGatewayURL:(id)arg0;
- (id)gatewayURL;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)headers;
- (int)timeout;
- (void)setTimeout:(int)arg0;

@end