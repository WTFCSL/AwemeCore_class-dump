//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveEcSharePanelToShareImageParamModel : IESLiveBridgeModel {
    NSString *_imagePath;
    NSString *_ecParams;
}

@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *ecParams;

+ (id)modelCustomPropertyMapper;

- (id)ecParams;
- (void)setEcParams:(id)arg0;
- (id)imagePath;
- (void).cxx_destruct;
- (void)setImagePath:(id)arg0;

@end