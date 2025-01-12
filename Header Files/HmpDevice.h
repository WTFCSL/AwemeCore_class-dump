//
//     Generated by private class-dump
//

@interface HmpDevice : NSObject {
    void *_impl;
    BOOL _own;
}

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

+ (void)set_current:(id)arg0;
+ (int)current:(int)arg0;
+ (long long)count:(int)arg0;

- (void)setOwn:(BOOL)arg0;
- (BOOL)own;
- (id)initFromString:(id)arg0;
- (id)initFromPtr:(void *)arg0 :(BOOL)arg1;
- (void)setImpl:(struct Device { short x0; short x1; } *)arg0;
- (id)init;
- (struct Device { short x0; short x1; } *)impl;
- (int)type;
- (int)index;
- (id)description;
- (void)dealloc;
- (void *)ptr;

@end
