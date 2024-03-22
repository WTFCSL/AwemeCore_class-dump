//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoHallLynxInfo : MTLModel <MTLJSONSerializing> {
    NSString *_rawData;
    NSString *_lynxSchema;
    double _height;
}

@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lynxSchema;
- (void)setLynxSchema:(id)arg0;
- (void).cxx_destruct;
- (double)height;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (void)setHeight:(double)arg0;

@end