//
//     Generated by private class-dump
//

@class NSString;

@interface ProcessorTypeSharpen : NSObject <ProcessorType> {
    double _sharpness;
    double _brightness;
    double _contrast;
}

@property (nonatomic) double sharpness;
@property (nonatomic) double brightness;
@property (nonatomic) double contrast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSharpness:(double)arg0 brightness:(double)arg1 contrast:(double)arg2;
- (void)setContrast:(double)arg0;
- (double)sharpness;
- (double)brightness;
- (void)setBrightness:(double)arg0;
- (double)contrast;
- (void)setSharpness:(double)arg0;

@end
