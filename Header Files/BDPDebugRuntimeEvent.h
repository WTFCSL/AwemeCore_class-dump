//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDPDebugRuntimeEvent : NSObject {
    NSString *_target;
    NSString *_source;
    NSString *_ID;
    NSString *_type;
    NSString *_handlerName;
    NSNumber *_syncCallbackId;
    NSString *_result;
    NSString *_script;
    NSArray *_args;
    NSString *_sdkVersion;
    NSString *_projectType;
    NSString *_CDPCommand;
    NSString *_renderType;
    NSString *_system;
    NSString *_platform;
    NSString *_brand;
    NSString *_model;
    NSString *_version;
    NSString *_appName;
    NSString *_nativeSDKVersion;
    NSString *_did;
    NSString *_deviceName;
    NSDictionary *_env;
    NSString *_htmlContent;
    NSNumber *_pageID;
}

@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *handlerName;
@property (retain, nonatomic) NSNumber *syncCallbackId;
@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *script;
@property (copy, nonatomic) NSArray *args;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *projectType;
@property (copy, nonatomic) NSString *CDPCommand;
@property (copy, nonatomic) NSString *renderType;
@property (copy, nonatomic) NSString *system;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *nativeSDKVersion;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSDictionary *env;
@property (readonly, copy, nonatomic) NSString *JSONString;
@property (copy, nonatomic) NSString *htmlContent;
@property (retain, nonatomic) NSNumber *pageID;

+ (id)convertJSValueToObject:(id)arg0 error:(BOOL *)arg1;
+ (id)JSONValueWithObject:(id)arg0;
+ (id)convertObjectToString:(id)arg0;
+ (BOOL)isValidJSONObject:(id)arg0;

- (id)env;
- (id)renderType;
- (id)did;
- (void)setDid:(id)arg0;
- (void)setEnv:(id)arg0;
- (id)parseWithJSONString:(id)arg0;
- (void)setSyncCallbackId:(id)arg0;
- (void)setArgs:(id)arg0;
- (void)setProjectType:(id)arg0;
- (void)setCDPCommand:(id)arg0;
- (void)setNativeSDKVersion:(id)arg0;
- (id)syncCallbackId;
- (id)projectType;
- (id)CDPCommand;
- (id)nativeSDKVersion;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void)setModel:(id)arg0;
- (void)setDeviceName:(id)arg0;
- (id)ID;
- (void)setResult:(id)arg0;
- (id)initWithJSONString:(id)arg0;
- (void)setVersion:(id)arg0;
- (void)setID:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)deviceName;
- (void)setPageID:(id)arg0;
- (id)model;
- (id)result;
- (id)system;
- (void)setTarget:(id)arg0;
- (id)type;
- (id)pageID;
- (id)target;
- (void)setPlatform:(id)arg0;
- (id)platform;
- (void)setType:(id)arg0;
- (id)version;
- (id)JSONString;
- (void)setSource:(id)arg0;
- (void)setRenderType:(id)arg0;
- (id)sdkVersion;
- (id)script;
- (void)setScript:(id)arg0;
- (void)setSystem:(id)arg0;
- (id)brand;
- (id)htmlContent;
- (void)setHtmlContent:(id)arg0;
- (void)setBrand:(id)arg0;
- (id)args;
- (void)setSdkVersion:(id)arg0;
- (void)setHandlerName:(id)arg0;
- (id)handlerName;

@end
