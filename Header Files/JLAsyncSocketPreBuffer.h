//
//     Generated by private class-dump
//

@interface JLAsyncSocketPreBuffer : NSObject {
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (unsigned long long)availableSpace;
- (id)initWithCapacity:(unsigned long long)arg0;
- (unsigned long long)availableBytes;
- (void)dealloc;
- (void)reset;
- (char *)readBuffer;
- (void)ensureCapacityForWrite:(unsigned long long)arg0;
- (void)getReadBuffer:(char **)arg0 availableBytes:(unsigned long long *)arg1;
- (void)didRead:(unsigned long long)arg0;
- (char *)writeBuffer;
- (void)getWriteBuffer:(char **)arg0 availableSpace:(unsigned long long *)arg1;
- (void)didWrite:(unsigned long long)arg0;

@end
