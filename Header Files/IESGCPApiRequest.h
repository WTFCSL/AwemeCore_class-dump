//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESGCPApiRequest : NSObject {
    BOOL _useJSONSerializer;
    NSString *_baseURL;
    NSString *_path;
    NSDictionary *_headers;
    NSDictionary *_tintTags;
    NSDictionary *_parameters;
    NSDictionary *_queryParameters;
    unsigned long long _responseFormat;
    id /* block */ _responseCallback;
    unsigned long long _retryCount;
    id /* block */ _chunkCompleteCallback;
    Class _modelClass;
    id /* block */ _callback;
}

@property (retain, nonatomic) NSString *baseURL;
@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *tintTags;
@property (retain, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (nonatomic) BOOL useJSONSerializer;
@property (nonatomic) unsigned long long responseFormat;
@property (copy, nonatomic) id /* block */ responseCallback;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) id /* block */ chunkCompleteCallback;
@property (retain, nonatomic) Class modelClass;
@property (copy, nonatomic) id /* block */ callback;

- (id /* block */)chunkCompleteCallback;
- (void)setTintTags:(id)arg0;
- (id)tintTags;
- (BOOL)useJSONSerializer;
- (void)setUseJSONSerializer:(BOOL)arg0;
- (void)setChunkCompleteCallback:(id /* block */)arg0;
- (id)urlString;
- (void)setPath:(id)arg0;
- (id)init;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (void)setRetryCount:(unsigned long long)arg0;
- (void)setCallback:(id /* block */)arg0;
- (id)headers;
- (id /* block */)callback;
- (unsigned long long)retryCount;
- (id)path;
- (Class)modelClass;
- (id)baseURL;
- (void)setBaseURL:(id)arg0;
- (void)setParameters:(id)arg0;
- (void)setModelClass:(Class)arg0;
- (id)parameters;
- (id)queryParameters;
- (void)setQueryParameters:(id)arg0;
- (id /* block */)responseCallback;
- (void)setResponseCallback:(id /* block */)arg0;
- (unsigned long long)responseFormat;
- (void)setResponseFormat:(unsigned long long)arg0;

@end