//
//     Generated by private class-dump
//

@class NSData;

@interface EAGCDAsyncWritePacket : NSObject {
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg0 timeout:(double)arg1 tag:(long long)arg2;

@end
