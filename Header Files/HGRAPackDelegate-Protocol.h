//
//     Generated by private class-dump
//

@protocol HGRAPackDelegate <NSObject>

- (long long)httpRangeOffset;
- (void)ttpkgDownloadTaskWillBegin:(id)arg0;
- (void)pkgDownloadTask:(id)arg0 receivedData:(id)arg1 totalBytes:(long long)arg2 httpStatus:(unsigned long long)arg3 error:(id)arg4;
- (void)pkgDownloadTask:(id)arg0 didFinishWithResult:(id)arg1;
- (void)pkgDownloadTask:(id)arg0 didCancelWithResult:(id)arg1;

@optional

- (id)handleRecvDataQueue;

@end