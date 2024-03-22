//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESFalconGurdInterceptor : NSObject <IESFalconCustomInterceptor> {
    NSMutableDictionary *_accessKeyPatternDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *accessKeyPatternDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInterceptForRequest:(id)arg0;
- (id)falconMetaDataForURLRequest:(id)arg0;
- (void)registerPatterns:(id)arg0 forGurdAccessKey:(id)arg1;
- (void)registerPattern:(id)arg0 forGurdAccessKey:(id)arg1;
- (void)unregisterPatterns:(id)arg0;
- (id)accessKeyPatternDictionary;
- (id)_gurdMetaDataWithURLString:(id)arg0;
- (id)_gurdMetaDataWithURLString:(id)arg0 ignorePrefix:(id)arg1 accessKey:(id)arg2 regex:(id)arg3;
- (void)setAccessKeyPatternDictionary:(id)arg0;
- (void).cxx_destruct;

@end
