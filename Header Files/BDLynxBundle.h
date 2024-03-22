//
//     Generated by private class-dump
//

@class NSURL, BDLyxnChannelConfig, NSString;

@interface BDLynxBundle : NSObject {
    BOOL _isSingleFile;
    NSString *_version;
    NSString *_groupID;
    NSURL *_rootDirURL;
    BDLyxnChannelConfig *_channelConfig;
    NSString *_storagePath;
    NSURL *_singleFilePath;
}

@property (retain, nonatomic) NSURL *singleFilePath;
@property (retain, nonatomic) NSURL *rootDirURL;
@property (retain, nonatomic) BDLyxnChannelConfig *channelConfig;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, nonatomic) BOOL isSingleFile;
@property (copy) NSString *storagePath;

- (id)channelConfig;
- (void)setChannelConfig:(id)arg0;
- (id)initWithRootDir:(id)arg0 groupID:(id)arg1;
- (id)lynxCardDataWithCardID:(id)arg0;
- (id)lynxDataWithCardID:(id)arg0;
- (id)rootDirURL;
- (id)initWithSingleBundleFileURL:(id)arg0 groupID:(id)arg1;
- (BOOL)updateDataWithRootDir:(id)arg0;
- (BOOL)updateDataWithSingleBundleFile:(id)arg0;
- (BOOL)isSingleFile;
- (id)singleFilePath;
- (void)setRootDirURL:(id)arg0;
- (id)initWithBundlePath:(id)arg0 group:(id)arg1 error:(id *)arg2;
- (id)lynxExtraDataWithCardID:(id)arg0;
- (void)setSingleFilePath:(id)arg0;
- (id)storagePath;
- (id)groupID;
- (void).cxx_destruct;
- (id)version;
- (void)setStoragePath:(id)arg0;

@end
