//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGLuckyDogNetworkUtils : NSObject <BDUGLuckyDogNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonGetParams;
+ (id)commonPostParams;
+ (id)addCommonPostParamsWithParams:(id)arg0;
+ (id)addCommonGetParamsWithParams:(id)arg0;
+ (void)registerRequestSerializerBlock;
+ (id)commonRequestHeaderFields;
+ (BOOL)shouldAllowJSONArrayBodyWithURL:(id)arg0;
+ (id)__settingsVersionDicWithPrefix;
+ (id)__settingsVersionDicWithoutPrefix;
+ (void)initializeNetworkModule;
+ (id)addCommonRequestHeaderFieldsWithFields:(id)arg0;
+ (id)sharedInstance;
+ (id)serviceProtocol;

@end