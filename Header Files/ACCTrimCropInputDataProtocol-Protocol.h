//
//     Generated by private class-dump
//

@protocol ACCTrimCropBusinessTemplate, IESServiceProvider;

@protocol ACCTrimCropInputDataProtocol <NSObject>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (retain, nonatomic) id<ACCTrimCropBusinessTemplate> businessTemplate;

- (id)businessTemplate;
- (void)setBusinessTemplate:(id)arg0;
- (void)setContext:(id)arg0;
- (id)context;

@end
