//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFileKitServiceImpl : NSObject <AWEFileKitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)resourceMetricWithRootPath:(id)arg0 businessLine:(id)arg1 traceLevel:(unsigned long long)arg2;
- (id)filekitManager;

@end