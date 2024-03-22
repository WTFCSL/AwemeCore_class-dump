//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESPrefetchJSNetworkRequestModel : NSObject {
    BOOL _needCommonParams;
    BOOL _doRequestEvenInCache;
    BOOL _ignoreCache;
    BOOL _callbackOnBackgroundThread;
    NSString *_url;
    NSString *_method;
    NSDictionary *_headers;
    id _params;
    NSDictionary *_data;
    NSString *_traceId;
    NSDictionary *_extras;
    NSString *_hashValue;
}

@property (copy, nonatomic) NSString *hashValue;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) id params;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL doRequestEvenInCache;
@property (nonatomic) BOOL ignoreCache;
@property (copy, nonatomic) NSDictionary *extras;
@property (nonatomic) BOOL callbackOnBackgroundThread;

- (void)setNeedCommonParams:(BOOL)arg0;
- (BOOL)needCommonParams;
- (void)setTraceId:(id)arg0;
- (void)setCallbackOnBackgroundThread:(BOOL)arg0;
- (BOOL)callbackOnBackgroundThread;
- (BOOL)doRequestEvenInCache;
- (void)setDoRequestEvenInCache:(BOOL)arg0;
- (id)dataDescFromDict:(id)arg0;
- (void)addHeadersDict:(id)arg0;
- (void)addParamsDict:(id)arg0;
- (void)addDataDict:(id)arg0;
- (id)data;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)traceId;
- (id)method;
- (BOOL)ignoreCache;
- (id)headers;
- (id)initWithDictionary:(id)arg0;
- (void)setMethod:(id)arg0;
- (void)setData:(id)arg0;
- (id)extras;
- (void)setUrl:(id)arg0;
- (id)debugDescription;
- (id)description;
- (id)params;
- (id)dictionary;
- (id)hashValue;
- (void)setIgnoreCache:(BOOL)arg0;
- (id)url;
- (void)setExtras:(id)arg0;
- (void)setParams:(id)arg0;
- (void)setHashValue:(id)arg0;
- (id)calculateHash;

@end
