//
//     Generated by private class-dump
//

@interface ACCAIGCASyncQueuefrequencyManger : NSObject

+ (id)getFrequency;
+ (void)removeFrequency;
+ (void)saveFrequency:(id)arg0;
+ (BOOL)isSupportASyncQueue:(id)arg0;
+ (BOOL)turnonAsyncQueue:(id)arg0;
+ (BOOL)isReachedASyncQueueMaximum;
+ (void)addASyncQueuefrequency;
+ (void)downloadRenderWithloadpath:(id)arg0 publishModel:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestSupportASyncQueue:(id)arg0;
+ (BOOL)enbaleAsyncQueueMuteWithpublishModel:(id)arg0;

@end
