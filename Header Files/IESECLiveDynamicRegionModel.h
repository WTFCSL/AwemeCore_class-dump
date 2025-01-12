//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveDynamicRegionModel : MTLModel <MTLJSONSerializing> {
    long long _dynamicType;
    NSString *_templateURL;
    long long _regionBusinessType;
    NSString *_regionParams;
    NSString *_regionName;
}

@property (nonatomic) long long dynamicType;
@property (retain, nonatomic) NSString *templateURL;
@property (nonatomic) long long regionBusinessType;
@property (retain, nonatomic) NSString *regionParams;
@property (retain, nonatomic) NSString *regionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)dynamicType;
- (void)setDynamicType:(long long)arg0;
- (long long)regionBusinessType;
- (void)setRegionBusinessType:(long long)arg0;
- (id)regionParams;
- (void)setRegionParams:(id)arg0;
- (id)templateURL;
- (void).cxx_destruct;
- (void)setTemplateURL:(id)arg0;
- (id)regionName;
- (void)setRegionName:(id)arg0;

@end
