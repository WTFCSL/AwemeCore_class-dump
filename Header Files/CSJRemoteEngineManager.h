//
//     Generated by private class-dump
//

@class NSLock, NSString, NSMutableDictionary, CSJTemplateModel, NSObject;
@protocol OS_dispatch_queue;

@interface CSJRemoteEngineManager : NSObject {
    CSJTemplateModel *_onlineTemplateModel;
    CSJTemplateModel *_templateModel;
    NSString *_templateDirectory;
    NSObject<OS_dispatch_queue> *_ioSerialQueue;
    NSObject<OS_dispatch_queue> *_downloadConcurrentQueue;
    NSObject<OS_dispatch_queue> *_logSerialQueue;
    NSLock *_templateResourceFileLock;
    NSMutableDictionary *_loadingTemplateSuccessBlockDict;
    NSLock *_successBlockLock;
}

@property (retain, nonatomic) CSJTemplateModel *onlineTemplateModel;
@property (retain) CSJTemplateModel *templateModel;
@property (copy, nonatomic) NSString *templateDirectory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadConcurrentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logSerialQueue;
@property (retain, nonatomic) NSLock *templateResourceFileLock;
@property (retain, nonatomic) NSMutableDictionary *loadingTemplateSuccessBlockDict;
@property (retain, nonatomic) NSLock *successBlockLock;

- (id)logSerialQueue;
- (void)setLogSerialQueue:(id)arg0;
- (id)onlineTemplateModel;
- (id)downloadConcurrentQueue;
- (id)templateDirectory;
- (void)setOnlineTemplateModel:(id)arg0;
- (id)templateResourceFileLock;
- (id)ioSerialQueue;
- (id)successBlockLock;
- (id)loadingTemplateSuccessBlockDict;
- (void)setTemplateDirectory:(id)arg0;
- (void)setLoadingTemplateSuccessBlockDict:(id)arg0;
- (void)setSuccessBlockLock:(id)arg0;
- (void)setTemplateResourceFileLock:(id)arg0;
- (void)setIoSerialQueue:(id)arg0;
- (void)setDownloadConcurrentQueue:(id)arg0;
- (void).cxx_destruct;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;

@end
