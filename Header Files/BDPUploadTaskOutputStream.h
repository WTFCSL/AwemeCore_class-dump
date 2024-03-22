//
//     Generated by private class-dump
//

@class NSOutputStream, NSString, BDPURLSessionTask;

@interface BDPUploadTaskOutputStream : NSObject <NSStreamDelegate> {
    NSOutputStream *_outputStream;
    BDPURLSessionTask *_delegateTask;
}

@property (weak, nonatomic) BDPURLSessionTask *delegateTask;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegateTask:(id)arg0;
- (id)delegateTask;
- (id)initWithOutputStream:(id)arg0 Delegate:(id)arg1;
- (void).cxx_destruct;
- (void)open;
- (void)close;
- (void)setOutputStream:(id)arg0;
- (id)outputStream;
- (void)stream:(id)arg0 handleEvent:(unsigned long long)arg1;

@end