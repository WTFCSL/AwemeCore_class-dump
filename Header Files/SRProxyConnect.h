//
//     Generated by private class-dump
//

@class NSOutputStream, NSString, NSObject, NSURL, NSInputStream, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SRProxyConnect : NSObject <NSStreamDelegate> {
    id /* block */ _completion;
    NSString *_httpProxyHost;
    unsigned int _httpProxyPort;
    struct __CFHTTPMessage { } *_receivedHTTPHeaders;
    NSString *_socksProxyHost;
    unsigned int _socksProxyPort;
    NSString *_socksProxyUsername;
    NSString *_socksProxyPassword;
    BOOL _connectionRequiresSSL;
    NSMutableArray *_inputQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSURL *_url;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configureProxy;
- (void)_fetchPAC:(id)arg0 withProxySettings:(id)arg1;
- (void)_runPACScript:(id)arg0 withProxySettings:(id)arg1;
- (void)_readProxySettingWithType:(id)arg0 settings:(id)arg1;
- (void)_initializeStreams;
- (void)_proxyDidConnect;
- (void)_didConnect;
- (void)_processInputStream;
- (void)_dequeueInput;
- (BOOL)_proxyProcessHTTPResponseWithData:(id)arg0;
- (void)_proxyHTTPHeadersDidFinish;
- (void)openNetworkStreamWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setInputStream:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)initWithURL:(id)arg0;
- (void)_failWithError:(id)arg0;
- (void)setOutputStream:(id)arg0;
- (id)outputStream;
- (void)_writeData:(id)arg0;
- (void)stream:(id)arg0 handleEvent:(unsigned long long)arg1;
- (id)inputStream;
- (void)_openConnection;
- (void)dealloc;
- (id)url;

@end