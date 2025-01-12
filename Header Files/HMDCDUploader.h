//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDCDUploader : NSObject {
    unsigned long long _maxCDZipFileSizeMB;
    NSString *_coredumpRootPath;
    NSString *_coredumpPath;
    NSString *_coredumpZipPath;
    NSObject<OS_dispatch_queue> *_coredumpQueue;
    NSMutableSet *_uploadingFileNames;
    NSDictionary *_coredumpPathName;
    NSObject<OS_dispatch_semaphore> *_uploadSemaphore;
}

@property (copy, nonatomic) NSString *coredumpRootPath;
@property (copy, nonatomic) NSString *coredumpPath;
@property (copy, nonatomic) NSString *coredumpZipPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coredumpQueue;
@property (retain, nonatomic) NSMutableSet *uploadingFileNames;
@property (copy, nonatomic) NSDictionary *coredumpPathName;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *uploadSemaphore;
@property (nonatomic) unsigned long long maxCDZipFileSizeMB;

+ (id)removableFileDirectoryPath;

- (void)setUploadSemaphore:(id)arg0;
- (id)uploadSemaphore;
- (id)uploadingFileNames;
- (void)setUploadingFileNames:(id)arg0;
- (unsigned long long)maxCDZipFileSizeMB;
- (void)setMaxCDZipFileSizeMB:(unsigned long long)arg0;
- (id)coredumpPath;
- (id)coredumpRootPath;
- (void)setCoredumpQueue:(id)arg0;
- (id)coredumpQueue;
- (id)coredumpPathName;
- (id)coredumpZipPath;
- (void)_uploadZip;
- (void)_uploadCoreDumpForFileName:(id)arg0;
- (void)_uploadCoreDumpForPath:(id)arg0;
- (BOOL)deleteZipFileIfNeedWithFileName:(id)arg0;
- (void)increaseCounterWithFileName:(id)arg0;
- (void)cleanCounterWithFileName:(id)arg0;
- (id)zipFileCounterDic;
- (id)processCoreDump;
- (void)zipAndUploadCoreDump;
- (void)setCoredumpRootPath:(id)arg0;
- (void)setCoredumpPath:(id)arg0;
- (void)setCoredumpZipPath:(id)arg0;
- (void)setCoredumpPathName:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
