//
//     Generated by private class-dump
//

@class NSString;

@interface EcNetworkDomain : NSObject {
    BOOL _isHttps;
    NSString *_host;
}

@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL isHttps;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isHttps;
- (void)setIsHttps:(BOOL)arg0;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)host;

@end