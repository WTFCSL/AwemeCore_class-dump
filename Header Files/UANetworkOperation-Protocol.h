//
//     Generated by private class-dump
//

@class NSData;

@protocol UANetworkOperation <NSObject>

@property (copy, nonatomic) NSData *certData;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithRequest:(id)arg0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (id)certData;
- (void)setCertData:(id)arg0;

@end
