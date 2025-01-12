//
//     Generated by private class-dump
//

@class AdInnovationComponentDataModel, NSString, NSDictionary, AdInnovationResourceDataModel;

@interface AdInnovationModel : NSObject <BDModelCustom> {
    AdInnovationResourceDataModel *_resource;
    AdInnovationComponentDataModel *_component;
    NSDictionary *_trackParams;
}

@property (retain, nonatomic) AdInnovationResourceDataModel *resource;
@property (retain, nonatomic) AdInnovationComponentDataModel *component;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)setResource:(id)arg0;
- (id)resource;
- (void)setComponent:(id)arg0;

@end
