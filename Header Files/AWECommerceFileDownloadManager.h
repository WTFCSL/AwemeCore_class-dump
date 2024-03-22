//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWECommerceFileDownloadManager : NSObject <AWECommerceFileDownloadManager> {
    NSMutableDictionary *_fileMap;
}

@property (retain, nonatomic) NSMutableDictionary *fileMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)filePathWith:(id)arg0;
- (void)downloadFileWith:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)fileMap;
- (void)setFileMap:(id)arg0;

@end
