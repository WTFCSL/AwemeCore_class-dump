//
//     Generated by private class-dump
//

@interface BmfPacket : NSObject {
    BOOL _own;
    void *_p;
}

@property (nonatomic) void *p;
@property (nonatomic) BOOL own;

+ (id)generateEosPacket;
+ (id)generateEofPacket;

- (void)setOwn:(BOOL)arg0;
- (id)initFromPtr:(void *)arg0 own:(BOOL)arg1;
- (BOOL)own;
- (BOOL)is:(Class)arg0;
- (id)get:(Class)arg0;
- (long long)timestamp;
- (id)init:(id)arg0;
- (void)setTimestamp:(long long)arg0;
- (void)dealloc;
- (void *)ptr;
- (void *)p;
- (void)setP:(void *)arg0;
- (BOOL)defined;

@end
