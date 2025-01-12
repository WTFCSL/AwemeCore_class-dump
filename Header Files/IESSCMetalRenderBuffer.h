//
//     Generated by private class-dump
//

@class NSString;

@interface IESSCMetalRenderBuffer : NSObject {
    const void *_bytes;
    unsigned long long _length;
    NSString *_label;
    unsigned long long _bufferIndex;
}

@property (readonly, nonatomic) const void *bytes;
@property (readonly, nonatomic) unsigned long long length;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long bufferIndex;

+ (id)standardTextureCoordinate;
+ (id)standardImageVertices;

- (id)initWithBytes:(const void *)arg0 length:(unsigned long long)arg1 bufferIndex:(unsigned long long)arg2;
- (void)updateBytes:(const void *)arg0 length:(unsigned long long)arg1;
- (void).cxx_destruct;
- (unsigned long long)bufferIndex;
- (void)setBufferIndex:(unsigned long long)arg0;
- (void)setLabel:(id)arg0;
- (unsigned long long)length;
- (id)label;
- (void)dealloc;
- (const void *)bytes;

@end
