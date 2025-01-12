//
//     Generated by private class-dump
//

@class TTHttpTask, NSString;

@interface AWEGurdNetworkDelegateImpl : NSObject <IESGurdNetworkDelegate> {
    TTHttpTask *_currentDownloadTask;
    NSString *_currentDownloadIdentity;
}

@property (retain, nonatomic) TTHttpTask *currentDownloadTask;
@property (copy, nonatomic) NSString *currentDownloadIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_downloadPackageWithDownloadInfoModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setCurrentDownloadIdentity:(id)arg0;
- (void)setCurrentDownloadTask:(id)arg0;
- (id)currentDownloadTask;
- (void)_requestWithMethod:(id)arg0 URLString:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (id)currentDownloadIdentity;
- (void)downloadPackageWithDownloadInfoModel:(id)arg0 completion:(id /* block */)arg1;
- (void)requestWithMethod:(id)arg0 URLString:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelDownloadWithIdentity:(id)arg0;
- (id)currentNetworkConnectionString;
- (id)checkIPAddressVersion:(id)arg0;
- (void).cxx_destruct;

@end
