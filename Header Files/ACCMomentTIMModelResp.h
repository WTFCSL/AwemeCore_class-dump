//
//     Generated by private class-dump
//

@class NSString;

@interface ACCMomentTIMModelResp : ACCBaseApiModel {
    NSString *_versionCode;
    NSString *_modelUrl;
    NSString *_name;
    NSString *_md5;
}

@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *modelUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *md5;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (id)md5;
- (void)setMd5:(id)arg0;
- (id)modelUrl;
- (void)setModelUrl:(id)arg0;
- (id)versionCode;
- (void)setVersionCode:(id)arg0;

@end
