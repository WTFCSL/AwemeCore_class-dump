//
//     Generated by private class-dump
//

@class NSString, NSURLSessionDownloadTask;

@interface IESGurdDefaultNetworkDelegate : NSObject <IESGurdNetworkDelegate> {
    NSURLSessionDownloadTask *_currentDownloadTask;
    NSString *_currentDownloadIdentity;
}

@property (retain, nonatomic) NSURLSessionDownloadTask *currentDownloadTask;
@property (copy, nonatomic) NSString *currentDownloadIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentDownloadIdentity:(id)arg0;
- (void)setCurrentDownloadTask:(id)arg0;
- (id)currentDownloadTask;
- (id)currentDownloadIdentity;
- (void)downloadPackageWithDownloadInfoModel:(id)arg0 completion:(id /* block */)arg1;
- (void)requestWithMethod:(id)arg0 URLString:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelDownloadWithIdentity:(id)arg0;
- (void).cxx_destruct;

@end