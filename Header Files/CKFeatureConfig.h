//
//     Generated by private class-dump
//

@class NSString, CKAppConfig;

@interface CKFeatureConfig : NSObject {
    struct shared_ptr<CKFeature::Config> { struct Config *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
    CKAppConfig *_appConfig;
}

@property (retain, nonatomic) CKAppConfig *appConfig;
@property (copy, nonatomic) NSString *dbPath;
@property (nonatomic) int versionCode;
@property (copy, nonatomic) NSString *modelsName;

- (void)setAppConfig:(id)arg0;
- (struct shared_ptr<CKFeature::Config> { struct Config *x0; struct __shared_weak_count *x1; })cppModel;
- (id)modelsName;
- (void)setModelsName:(id)arg0;
- (void)setDbPath:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)dbPath;
- (id).cxx_construct;
- (id)appConfig;
- (int)versionCode;
- (void)setVersionCode:(int)arg0;

@end
