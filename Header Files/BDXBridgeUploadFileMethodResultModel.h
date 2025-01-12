//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeUploadFileMethodResultModel : BDXBridgeModel {
    NSString *_url;
    id _response;
    NSNumber *_clientCode;
    NSNumber *_httpCode;
    NSDictionary *_header;
}

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) NSNumber *clientCode;
@property (retain, nonatomic) NSNumber *httpCode;
@property (copy, nonatomic) NSDictionary *header;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setClientCode:(id)arg0;
- (id)clientCode;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)header;
- (id)response;
- (void)setHttpCode:(id)arg0;
- (id)httpCode;
- (void)setHeader:(id)arg0;
- (id)url;

@end
