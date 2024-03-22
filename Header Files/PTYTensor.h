//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface PTYTensor : PTYCls {
    BOOL _autoFreeRawData;
    int _fraction;
    void *_rawData;
    unsigned long long _dataFormat;
    unsigned long long _dataType;
    NSArray *_dims;
    NSString *_name;
}

@property (nonatomic) void *rawData;
@property (nonatomic) BOOL autoFreeRawData;
@property (nonatomic) unsigned long long dataFormat;
@property (nonatomic) unsigned long long dataType;
@property (copy, nonatomic) NSArray *dims;
@property (nonatomic) int fraction;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) int nelems;

- (void)setDims:(id)arg0;
- (void)setAutoFreeRawData:(BOOL)arg0;
- (id)initWithCoreObject:(const void *)arg0;
- (struct shared_ptr<pitaya::PTYClass> { struct PTYClass *x0; struct __shared_weak_count *x1; })coreObject;
- (int)nelems;
- (BOOL)autoFreeRawData;
- (id)dims;
- (void)setDataType:(unsigned long long)arg0;
- (id)init;
- (void)setFraction:(int)arg0;
- (void).cxx_destruct;
- (unsigned long long)dataType;
- (int)fraction;
- (void *)rawData;
- (void)setRawData:(void *)arg0;
- (void)setName:(id)arg0;
- (int)size;
- (id)description;
- (void)dealloc;
- (id)name;
- (void)setDataFormat:(unsigned long long)arg0;
- (unsigned long long)dataFormat;

@end