//
//     Generated by private class-dump
//

@interface BmfModuleFunctor : NSObject {
    BOOL _own;
    void *_p;
}

@property (nonatomic) void *p;
@property (nonatomic) BOOL own;

- (id)init:(char *)arg0 type:(char *)arg1 path:(char *)arg2 entry:(char *)arg3 option:(id)arg4 ninputs:(int)arg5 noutputs:(int)arg6;
- (void)setOwn:(BOOL)arg0;
- (id)initFromPtr:(void *)arg0 own:(BOOL)arg1;
- (BOOL)own;
- (void)dealloc;
- (void *)ptr;
- (void *)p;
- (void)setP:(void *)arg0;

@end
