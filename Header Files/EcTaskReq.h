//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface EcTaskReq : NSObject {
    BOOL _useMobile;
    NSString *_taskKey;
    NSArray *_assetIds;
    NSString *_downloadFolder;
}

@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) NSArray *assetIds;
@property (copy, nonatomic) NSString *downloadFolder;
@property (nonatomic) BOOL useMobile;

- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (id)downloadFolder;
- (void)setDownloadFolder:(id)arg0;
- (BOOL)useMobile;
- (void)setUseMobile:(BOOL)arg0;
- (void).cxx_destruct;
- (id)assetIds;
- (void)setAssetIds:(id)arg0;

@end