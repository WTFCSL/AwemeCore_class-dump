//
//     Generated by private class-dump
//

@protocol LVTemplateDataManagerDelegate <NSObject>

- (void)templateDataManager:(id)arg0 didFailureWithErrorCode:(unsigned long long)arg1 withSubErrorCode:(id)arg2;
- (void)templateDataManager:(id)arg0 didChangeProcessProgress:(double)arg1;
- (void)templateDataManagerDraftDecodeDidFinish:(id)arg0;
- (void)templateDataManagerDraftProcessDidComplete:(id)arg0;
- (void)templateDataManager:(id)arg0 downloadFile:(id)arg1 completion:(id /* block */)arg2;

@end