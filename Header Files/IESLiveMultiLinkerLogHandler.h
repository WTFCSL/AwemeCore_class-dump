//
//     Generated by private class-dump
//

@protocol IESLiveMultiLinkerProvider;

@interface IESLiveMultiLinkerLogHandler : NSObject {
    id<IESLiveMultiLinkerProvider> _provider;
}

@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> provider;

- (void)didSetAttachingDIContext;
- (void)logInfoWithCategory:(unsigned long long)arg0 event:(id)arg1 extra:(id)arg2;
- (void)logErrorWithCategory:(unsigned long long)arg0 event:(id)arg1 extra:(id)arg2;
- (void)logWithLevel:(unsigned long long)arg0 category:(unsigned long long)arg1 event:(id)arg2 extra:(id)arg3;
- (id)linkerStatusStr;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;

@end