//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface IESLiveCompoundSubscription : NSObject <IESLiveCompoundSubscription> {
    BOOL disposed;
    NSMutableArray *_allRootSubscription;
    NSMutableArray *_allSubscription;
}

@property (retain, nonatomic) NSMutableArray *allSubscription;
@property (retain, nonatomic) NSMutableArray *allRootSubscription;
@property (getter=isDisposed) BOOL disposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compoundDisposable;

- (void)addSubscription:(id)arg0;
- (void)setDisposed:(BOOL)arg0;
- (BOOL)isDisposed;
- (id)allSubscription;
- (id)allRootSubscription;
- (void)setAllSubscription:(id)arg0;
- (void)removeSubscription:(id)arg0;
- (void)addRootSubscription:(id)arg0;
- (void)setAllRootSubscription:(id)arg0;
- (void)dispose;
- (id)init;
- (void).cxx_destruct;

@end
