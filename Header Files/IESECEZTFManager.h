//
//     Generated by private class-dump
//

@class IESECEZTFQuality, NSMutableDictionary, IESECEZTFJSWorker;

@interface IESECEZTFManager : NSObject {
    NSMutableDictionary *_settingMap;
    NSMutableDictionary *_jsUrlMap;
    IESECEZTFJSWorker *_worker;
    IESECEZTFQuality *_quality;
}

+ (void)testNativeFunction:(id)arg0;
+ (id)shareInstance;

- (BOOL)p_getRegisterInfoWithSection;
- (void)loadJSResource;
- (BOOL)jsModuleEnable:(id)arg0;
- (void)execEZTFNativeModuleWithModule:(id)arg0 data:(id)arg1 completion:(id /* block */)arg2 invokeQuality:(id)arg3;
- (void)execEZTFWithModule:(id)arg0 data:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;

@end
