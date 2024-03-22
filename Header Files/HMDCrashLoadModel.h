//
//     Generated by private class-dump
//

@class NSData, NSArray, HMDCrashThreadInfo, NSString, HMDCrashHeaderInfo, HMDImageOpaqueLoader, NSDictionary;

@interface HMDCrashLoadModel : NSObject {
    BOOL _successFlag;
    HMDImageOpaqueLoader *_imageLoader;
    HMDCrashHeaderInfo *_headerInfo;
    NSArray *_threads;
    HMDCrashThreadInfo *_asyncRecord;
    NSArray *_queueNames;
    NSArray *_threadNames;
    NSString *_crashLog;
    NSDictionary *_dataDict;
    NSData *_multipartData;
    NSData *_gzipData;
}

+ (id)model;

- (void).cxx_destruct;

@end
