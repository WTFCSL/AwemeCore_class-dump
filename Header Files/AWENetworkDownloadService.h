//
//     Generated by private class-dump
//

@interface AWENetworkDownloadService : NSObject

+ (id)dictFromProcessInfo:(id)arg0 request:(id)arg1;
+ (id)extraInfoFromDownloadResult:(id)arg0 outputError:(id *)arg1;
+ (id)sharedInstance;

- (void)cancelDownloadRequst:(id)arg0 actionCallback:(id /* block */)arg1;
- (void)startDownloadRequst:(id)arg0;
- (void)deleteDownloadRequst:(id)arg0 actionCallback:(id /* block */)arg1;
- (void)queryDownloadInfoWithTaskID:(id)arg0 downloadInfoBlock:(id /* block */)arg1;
- (void)queryDownloadInfoWithTask:(id)arg0 downloadInfoBlock:(id /* block */)arg1;
- (void)moveFileFrom:(id)arg0 destination:(id)arg1 fixConflict:(long long)arg2 outputError:(id *)arg3;

@end
