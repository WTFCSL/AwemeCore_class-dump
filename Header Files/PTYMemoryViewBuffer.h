//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface PTYMemoryViewBuffer : PTYCls {
    BOOL _autoFreeRawData;
    BOOL _readOnly;
    void *_rawData;
    unsigned long long _size;
    NSArray *_shape;
    NSDictionary *_customInfo;
}

@property (nonatomic) void *rawData;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL autoFreeRawData;
@property (nonatomic) BOOL readOnly;
@property (copy, nonatomic) NSArray *shape;
@property (copy, nonatomic) NSDictionary *customInfo;

- (void)setAutoFreeRawData:(BOOL)arg0;
- (id)initWithCoreObject:(const void *)arg0;
- (struct shared_ptr<pitaya::PTYClass> { struct PTYClass *x0; struct __shared_weak_count *x1; })coreObject;
- (BOOL)autoFreeRawData;
- (void)setReadOnly:(BOOL)arg0;
- (void)setShape:(id)arg0;
- (id)customInfo;
- (id)init;
- (BOOL)readOnly;
- (void).cxx_destruct;
- (void *)rawData;
- (void)setRawData:(void *)arg0;
- (unsigned long long)size;
- (id)shape;
- (void)setSize:(unsigned long long)arg0;
- (id)description;
- (void)dealloc;
- (void)setCustomInfo:(id)arg0;

@end
