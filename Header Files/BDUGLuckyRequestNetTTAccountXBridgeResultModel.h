//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary;

@interface BDUGLuckyRequestNetTTAccountXBridgeResultModel : BDXBridgeModel {
    NSNumber *_httpCode;
    NSDictionary *_header;
    NSDictionary *_response;
}

@property (retain, nonatomic) NSNumber *httpCode;
@property (retain, nonatomic) NSDictionary *header;
@property (retain, nonatomic) NSDictionary *response;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (id)header;
- (id)response;
- (void)setHttpCode:(id)arg0;
- (id)httpCode;
- (void)setHeader:(id)arg0;

@end