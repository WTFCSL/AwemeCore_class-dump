//
//     Generated by private class-dump
//

@class NSString;

@interface IESGurdFilePaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *cacheRootDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *settingsResponsePath;
@property (class, readonly, copy, nonatomic) NSString *settingsResponseCrc32Path;
@property (class, readonly, copy, nonatomic) NSString *blocklistChannelPath;
@property (class, readonly, copy, nonatomic) NSString *blocklistChannelCrc32Path;
@property (class, readonly, copy, nonatomic) NSString *inactiveDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *activeMetaDataPath;
@property (class, readonly, copy, nonatomic) NSString *activeMetadataPath;
@property (class, readonly, copy, nonatomic) NSString *channelDatasPathNew;

+ (id)cacheRootDirectoryPath;
+ (id)directoryPathForAccessKey:(id)arg0;
+ (id)directoryPathForAccessKey:(id)arg0 channel:(id)arg1;
+ (id)downloadedFilePath:(id)arg0;
+ (id)inactivePathForAccessKey:(id)arg0 channel:(id)arg1;
+ (id)briefFilePathWithFullPath:(id)arg0;
+ (id)blocklistChannelPath;
+ (id)blocklistChannelCrc32Path;
+ (id)channelDatasPathNew;
+ (unsigned long long)fileSizeAtDirectory:(id)arg0;
+ (id)directoryPathForAccessKey:(id)arg0 channel:(id)arg1 path:(id)arg2;
+ (id)activeMetaDataPath;
+ (id)inactiveDirectoryPath;
+ (id)settingsResponsePath;
+ (id)settingsResponseCrc32Path;
+ (id)activeMetadataPath;
+ (id)fileSizeStringAtPath:(id)arg0;
+ (void)initialize;
+ (unsigned long long)fileSizeAtPath:(id)arg0;

@end
