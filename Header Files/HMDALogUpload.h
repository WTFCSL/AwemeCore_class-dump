//
//     Generated by private class-dump
//

@class NSString;

@interface HMDALogUpload : NSObject <AWECloudCommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (void)load;

- (void)excuteCommand:(id)arg0 completion:(id /* block */)arg1;
- (void)_uploadLogFiles:(id)arg0 commandModel:(id)arg1 originFilesCount:(long long)arg2 completion:(id /* block */)arg3 userBlock:(id /* block */)arg4;

@end
