//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOTranscodingModel : MTLModel <MTLJSONSerializing> {
    double _bitrate;
    long long _outputWidth;
    long long _outputHeight;
}

@property (nonatomic) double bitrate;
@property (nonatomic) long long outputWidth;
@property (nonatomic) long long outputHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setOutputWidth:(long long)arg0;
- (double)bitrate;
- (void)setOutputHeight:(long long)arg0;
- (long long)outputHeight;
- (long long)outputWidth;
- (void)setBitrate:(double)arg0;

@end
