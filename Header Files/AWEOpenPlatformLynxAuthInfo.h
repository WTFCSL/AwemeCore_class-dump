//
//     Generated by private class-dump
//

@class NSDictionary, AWEOpenPlatformAuthEntranceModel;

@interface AWEOpenPlatformLynxAuthInfo : NSObject {
    AWEOpenPlatformAuthEntranceModel *_entranceModel;
    id /* block */ _completionBlock;
    NSDictionary *_originParams;
    id /* block */ _failCompletionBlock;
}

@property (retain, nonatomic) AWEOpenPlatformAuthEntranceModel *entranceModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *originParams;
@property (copy, nonatomic) id /* block */ failCompletionBlock;

- (id /* block */)failCompletionBlock;
- (void)setFailCompletionBlock:(id /* block */)arg0;
- (void)setEntranceModel:(id)arg0;
- (id)entranceModel;
- (void)setOriginParams:(id)arg0;
- (id)originParams;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;

@end