//
//     Generated by private class-dump
//

@interface HmpStream : NSObject {
    void *_impl;
    BOOL _own;
}

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

+ (void)set_current:(id)arg0;
+ (id)current:(int)arg0;
+ (id)create:(int)arg0 Flags:(unsigned long long)arg1;

- (void)setOwn:(BOOL)arg0;
- (BOOL)own;
- (id)initFromPtr:(void *)arg0 :(BOOL)arg1;
- (void)setImpl:(void *)arg0;
- (void)synchronize;
- (void *)impl;
- (BOOL)isEqual:(id)arg0;
- (BOOL)query;
- (void)dealloc;
- (void *)ptr;
- (id)device;

@end