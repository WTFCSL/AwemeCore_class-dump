//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeHunterRequestAwemeMethodResultModel : BDXBridgeModel {
    NSNumber *_httpCode;
    NSNumber *_clientCode;
    id _response;
    NSString *_rawResponse;
    NSNumber *_prefetchStatus;
    NSDictionary *_header;
    long long _responseType;
}

@property (retain, nonatomic) NSNumber *httpCode;
@property (retain, nonatomic) NSNumber *clientCode;
@property (retain, nonatomic) id response;
@property (copy, nonatomic) NSString *rawResponse;
@property (retain, nonatomic) NSNumber *prefetchStatus;
@property (copy, nonatomic) NSDictionary *header;
@property (nonatomic) long long responseType;

+ (id)responseTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)prefetchStatus;
- (void)setPrefetchStatus:(id)arg0;
- (void)setClientCode:(id)arg0;
- (id)clientCode;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (id)header;
- (id)response;
- (void)setHttpCode:(id)arg0;
- (id)httpCode;
- (void)setHeader:(id)arg0;
- (id)rawResponse;
- (long long)responseType;
- (void)setRawResponse:(id)arg0;
- (void)setResponseType:(long long)arg0;

@end
