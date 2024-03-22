//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface WXWebpageObject : NSObject {
    BOOL _isSecretMessage;
    NSString *_webpageUrl;
    NSDictionary *_extraInfoDic;
}

@property (copy, nonatomic) NSString *webpageUrl;
@property (nonatomic) BOOL isSecretMessage;
@property (retain, nonatomic) NSDictionary *extraInfoDic;

+ (id)object;

- (id)extraInfoDic;
- (void)setExtraInfoDic:(id)arg0;
- (id)webpageUrl;
- (void)setWebpageUrl:(id)arg0;
- (BOOL)isSecretMessage;
- (void)setIsSecretMessage:(BOOL)arg0;
- (void).cxx_destruct;

@end