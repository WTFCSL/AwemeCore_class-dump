//
//     Generated by private class-dump
//

@class NSString;
@protocol NLEResourceDownloadStatusDelegate;

@interface NLEResourceDownloadStatusListener_OC : NSObject <NLEResourceDownloadStatusDelegate> {
    struct shared_ptr<NLEResourceDownloadStatusListener> { struct NLEResourceDownloadStatusListener *__ptr_; struct __shared_weak_count *__cntrl_; } _observer;
    id<NLEResourceDownloadStatusDelegate> _delegate;
}

@property (weak, nonatomic) id<NLEResourceDownloadStatusDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onStart:(id)arg0;
- (struct shared_ptr<NLEResourceDownloadStatusListener> { struct NLEResourceDownloadStatusListener *x0; struct __shared_weak_count *x1; })cppListener;
- (void)onSuccess:(id)arg0 isFromCache:(BOOL)arg1;
- (void)onFail:(id)arg0 errorCode:(long long)arg1 errorMsg:(id)arg2;
- (void)onAllResourceDownloadFinished;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id).cxx_construct;

@end
