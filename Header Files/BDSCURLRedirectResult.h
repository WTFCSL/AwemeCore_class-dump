//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface BDSCURLRedirectResult : NSObject {
    long long _httpCode;
    NSDictionary *_header;
    NSString *_originUrl;
}

@property (nonatomic) long long httpCode;
@property (copy, nonatomic) NSDictionary *header;
@property (readonly, copy, nonatomic) NSString *redirectURL;
@property (copy, nonatomic) NSString *originUrl;

- (id)originUrl;
- (void)setOriginUrl:(id)arg0;
- (void).cxx_destruct;
- (id)header;
- (void)setHttpCode:(long long)arg0;
- (long long)httpCode;
- (void)setHeader:(id)arg0;
- (id)redirectURL;

@end
