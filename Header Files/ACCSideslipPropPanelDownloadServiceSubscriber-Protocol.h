//
//     Generated by private class-dump
//

@protocol ACCSideslipPropPanelDownloadServiceSubscriber <NSObject>

@optional

- (void)downloadService:(id)arg0 didBeginDownloadDataModel:(id)arg1;
- (void)downloadService:(id)arg0 dataModel:(id)arg1 downloadProgressChange:(double)arg2;
- (void)downloadService:(id)arg0 didFinishDownloadDataModel:(id)arg1;
- (void)downloadService:(id)arg0 didFailDownloadDataModel:(id)arg1 withError:(id)arg2;

@end