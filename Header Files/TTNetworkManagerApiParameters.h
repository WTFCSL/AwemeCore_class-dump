//
//     Generated by private class-dump
//

@class NSData, NSString, NSURL, TTRequestModel, NSDictionary, NSObject, NSProgress, NSURLRequest;
@protocol OS_dispatch_queue;

@interface TTNetworkManagerApiParameters : NSObject {
    BOOL _needCommonParams;
    BOOL _enableHttpCache;
    BOOL _verifyRequest;
    BOOL _isCustomizedCookie;
    BOOL _useJsonResponseSerializer;
    BOOL _isAppend;
    NSString *_URLString;
    TTRequestModel *_model;
    id _params;
    NSString *_method;
    NSDictionary *_headerField;
    id /* block */ _bodyBlock;
    NSData *_bodyField;
    NSString *_filePath;
    unsigned long long _uploadFileOffset;
    unsigned long long _uploadFileLength;
    NSProgress *_progress;
    Class _requestSerializer;
    Class _modelResponseSerializer;
    Class _jsonResponseSerializer;
    Class _binaryResponseSerializer;
    id /* block */ _modelCallback;
    id /* block */ _modelCallbackWithResponse;
    id /* block */ _headerCallback;
    id /* block */ _dataCallback;
    id /* block */ _callback;
    id /* block */ _callbackWithResponse;
    id /* block */ _redirectCallback;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    NSURL *_destination;
    id /* block */ _progressCallback;
    id /* block */ _completionHandler;
    double _timeout;
    NSObject<OS_dispatch_queue> *_chunk_dispatch_queue;
    NSURLRequest *_nsrequest;
    NSString *_mainDocURL;
}

@property (copy, nonatomic) NSString *URLString;
@property (retain, nonatomic) TTRequestModel *model;
@property (retain, nonatomic) id params;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) BOOL verifyRequest;
@property (nonatomic) BOOL isCustomizedCookie;
@property (copy, nonatomic) id /* block */ bodyBlock;
@property (retain, nonatomic) NSData *bodyField;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long uploadFileOffset;
@property (nonatomic) unsigned long long uploadFileLength;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) Class requestSerializer;
@property (retain, nonatomic) Class modelResponseSerializer;
@property (nonatomic) BOOL useJsonResponseSerializer;
@property (retain, nonatomic) Class jsonResponseSerializer;
@property (retain, nonatomic) Class binaryResponseSerializer;
@property (copy, nonatomic) id /* block */ modelCallback;
@property (copy, nonatomic) id /* block */ modelCallbackWithResponse;
@property (copy, nonatomic) id /* block */ headerCallback;
@property (copy, nonatomic) id /* block */ dataCallback;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ callbackWithResponse;
@property (copy, nonatomic) id /* block */ redirectCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatch_queue;
@property (retain, nonatomic) NSURL *destination;
@property (nonatomic) BOOL isAppend;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chunk_dispatch_queue;
@property (retain, nonatomic) NSURLRequest *nsrequest;
@property (copy, nonatomic) NSString *mainDocURL;

- (void)setNeedCommonParams:(BOOL)arg0;
- (BOOL)needCommonParams;
- (void)setHeaderField:(id)arg0;
- (void)setRequestSerializer:(Class)arg0;
- (Class)requestSerializer;
- (Class)jsonResponseSerializer;
- (void)setJsonResponseSerializer:(Class)arg0;
- (void)setHeaderCallback:(id /* block */)arg0;
- (void)setProgressCallback:(id /* block */)arg0;
- (id /* block */)progressCallback;
- (id)headerField;
- (BOOL)enableHttpCache;
- (id /* block */)headerCallback;
- (void)setEnableHttpCache:(BOOL)arg0;
- (void)setVerifyRequest:(BOOL)arg0;
- (void)setIsCustomizedCookie:(BOOL)arg0;
- (void)setBodyBlock:(id /* block */)arg0;
- (void)setBodyField:(id)arg0;
- (void)setUploadFileOffset:(unsigned long long)arg0;
- (void)setUploadFileLength:(unsigned long long)arg0;
- (void)setModelResponseSerializer:(Class)arg0;
- (void)setUseJsonResponseSerializer:(BOOL)arg0;
- (void)setBinaryResponseSerializer:(Class)arg0;
- (void)setModelCallback:(id /* block */)arg0;
- (void)setModelCallbackWithResponse:(id /* block */)arg0;
- (void)setDataCallback:(id /* block */)arg0;
- (void)setCallbackWithResponse:(id /* block */)arg0;
- (void)setRedirectCallback:(id /* block */)arg0;
- (void)setDispatch_queue:(id)arg0;
- (void)setIsAppend:(BOOL)arg0;
- (void)setChunk_dispatch_queue:(id)arg0;
- (void)setNsrequest:(id)arg0;
- (void)setMainDocURL:(id)arg0;
- (id)initWithURLString:(id)arg0 requestModel:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 headerField:(id)arg5 enableHttpCache:(BOOL)arg6 verifyRequest:(BOOL)arg7 isCustomizedCookie:(BOOL)arg8 constructingBodyWithBlock:(id /* block */)arg9 bodyField:(id)arg10 filePath:(id)arg11 offset:(unsigned long long)arg12 length:(unsigned long long)arg13 progress:(id *)arg14 requestSerializer:(Class)arg15 modelResponseSerializer:(Class)arg16 useJsonResponseSerializer:(BOOL)arg17 jsonResponseSerializer:(Class)arg18 binaryResponseSerializer:(Class)arg19 modelCallback:(id /* block */)arg20 modelCallbackWithResponse:(id /* block */)arg21 headerCallback:(id /* block */)arg22 dataCallback:(id /* block */)arg23 callback:(id /* block */)arg24 callbackWithResponse:(id /* block */)arg25 redirectCallback:(id /* block */)arg26 dispatch_queue:(id)arg27 destination:(id)arg28 isAppend:(BOOL)arg29 progressCallback:(id /* block */)arg30 completionHandler:(id /* block */)arg31 timeout:(double)arg32 redirectHeaderDataCallbackQueue:(id)arg33 nsrequest:(id)arg34 mainDocURL:(id)arg35;
- (BOOL)verifyRequest;
- (BOOL)isCustomizedCookie;
- (id /* block */)bodyBlock;
- (id)bodyField;
- (unsigned long long)uploadFileOffset;
- (unsigned long long)uploadFileLength;
- (Class)modelResponseSerializer;
- (BOOL)useJsonResponseSerializer;
- (Class)binaryResponseSerializer;
- (id /* block */)modelCallback;
- (id /* block */)modelCallbackWithResponse;
- (id /* block */)dataCallback;
- (id /* block */)callbackWithResponse;
- (id /* block */)redirectCallback;
- (BOOL)isAppend;
- (id)chunk_dispatch_queue;
- (id)nsrequest;
- (id)mainDocURL;
- (id)URLString;
- (void)setModel:(id)arg0;
- (id)destination;
- (id)filePath;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id)method;
- (void)setFilePath:(id)arg0;
- (id)model;
- (void)setDestination:(id)arg0;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)setMethod:(id)arg0;
- (id /* block */)callback;
- (double)timeout;
- (id)progress;
- (id /* block */)completionHandler;
- (id)params;
- (void)setProgress:(id)arg0;
- (void)setTimeout:(double)arg0;
- (void)setURLString:(id)arg0;
- (id)dispatch_queue;
- (void)setParams:(id)arg0;

@end
