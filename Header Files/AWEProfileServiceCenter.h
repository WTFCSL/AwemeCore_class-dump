//
//     Generated by private class-dump
//

@class NSMapTable;

@interface AWEProfileServiceCenter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_serviceToImpTable;
}

@property (retain, nonatomic) NSMapTable *serviceToImpTable;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)serviceImp:(id)arg0;
- (void)bindService:(id)arg0 implementation:(id)arg1;
- (void)setServiceToImpTable:(id)arg0;
- (id)serviceToImpTable;
- (id)init;
- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x0; })lock;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x0; })arg0;

@end