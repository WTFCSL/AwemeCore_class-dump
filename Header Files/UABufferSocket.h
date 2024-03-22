//
//     Generated by private class-dump
//

@interface UABufferSocket : UASocket {
    unsigned long long _readBufferTotalLength;
    unsigned long long _readBufferAvailableLength;
    void *_readBuffer;
    void *_readBufferPointer;
}

- (id)initWithHost:(id)arg0 port:(id)arg1;
- (void)fillBufferWithBytesLength:(unsigned long long)arg0;
- (void)resetBufferIfNeeded;
- (void)disconnect;
- (void)dealloc;
- (void)resetBuffer;

@end
