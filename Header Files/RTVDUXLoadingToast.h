//
//     Generated by private class-dump
//

@class NSString;

@interface RTVDUXLoadingToast : DUXLoadingToast <RTVDUXLoadingToastProtocol> {
    id /* block */ _closeBlock;
}

@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)arg0 injector:(id)arg1;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)close;

@end
