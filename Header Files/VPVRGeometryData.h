//
//     Generated by private class-dump
//

@protocol MTLBuffer;

@interface VPVRGeometryData : NSObject {
    id<MTLBuffer> _vertexBuffer;
    void *_geometryData;
    struct { void /* unknown type, empty encoding */ columns[4]; } _initialModelMatrix;
}

@property (nonatomic) void *geometryData;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } initialModelMatrix;
@property (readonly, nonatomic) id<MTLBuffer> vertexBuffer;
@property (readonly, nonatomic) unsigned long long vertexCount;

- (struct { void /* unknown type, empty encoding */ x0[4]; })initialModelMatrix;
- (void)setInitialModelMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)vertexCount;
- (void)dealloc;
- (id)vertexBuffer;
- (void *)geometryData;
- (void)setGeometryData:(void *)arg0;

@end
