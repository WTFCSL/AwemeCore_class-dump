//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface BXLazyRegister : NSObject {
    NSObject<OS_dispatch_queue> *_infoDispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *infoDispatchQueue;

+ (id)sharedInstance;

- (void)evaluateLazyRegister;
- (id)infoDispatchQueue;
- (void)setInfoDispatchQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end