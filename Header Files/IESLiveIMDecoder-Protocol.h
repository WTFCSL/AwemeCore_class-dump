//
//     Generated by private class-dump
//

@protocol IESLiveIMDecoder <NSObject>

@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;

- (void)decode:(id)arg0 completion:(id /* block */)arg1;

@optional

- (void)setNextDecoder:(id)arg0;
- (id)nextDecoder;

@end