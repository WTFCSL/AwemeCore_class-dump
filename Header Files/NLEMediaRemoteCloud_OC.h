//
//     Generated by private class-dump
//

@interface NLEMediaRemoteCloud_OC : NSObject {
    struct shared_ptr<nle::mediaremote::NLEMediaCloudEdit> { struct NLEMediaCloudEdit *__ptr_; struct __shared_weak_count *__cntrl_; } _cppRemoteExporter;
}

@property (nonatomic) struct shared_ptr<nle::mediaremote::NLEMediaCloudEdit> { struct NLEMediaCloudEdit *__ptr_; struct __shared_weak_count *__cntrl_; } cppRemoteExporter;

+ (id)orderJson:(id)arg0;

- (void)setCppRemoteExporter:(struct shared_ptr<nle::mediaremote::NLEMediaCloudEdit> { struct NLEMediaCloudEdit *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nle::mediaremote::NLEMediaCloudEdit> { struct NLEMediaCloudEdit *x0; struct __shared_weak_count *x1; })cppRemoteExporter;
- (long long)exportModel:(id)arg0 settings:(id)arg1 ignoreProgress:(BOOL)arg2;
- (long long)setCompileListener:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (id).cxx_construct;
- (long long)cancelExport;

@end
