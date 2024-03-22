//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESGurdDownloadInfoModel : NSObject {
    NSString *_identity;
    NSString *_currentDownloadURLString;
    NSArray *_allDownloadURLStrings;
    NSString *_accessKey;
    NSString *_channel;
    NSString *_packageSort;
    long long _packageType;
    unsigned long long _packageVersion;
    unsigned long long _packageSize;
}

@property (copy, nonatomic) NSString *identity;
@property (copy, nonatomic) NSString *currentDownloadURLString;
@property (copy, nonatomic) NSArray *allDownloadURLStrings;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *packageSort;
@property (nonatomic) long long packageType;
@property (nonatomic) unsigned long long packageVersion;
@property (nonatomic) unsigned long long packageSize;

- (unsigned long long)packageVersion;
- (id)currentDownloadURLString;
- (unsigned long long)packageSize;
- (void)setPackageType:(long long)arg0;
- (void)setPackageSize:(unsigned long long)arg0;
- (void)setPackageVersion:(unsigned long long)arg0;
- (void)setPackageSort:(id)arg0;
- (void)setAllDownloadURLStrings:(id)arg0;
- (void)setCurrentDownloadURLString:(id)arg0;
- (id)allDownloadURLStrings;
- (id)packageSort;
- (id)channel;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setIdentity:(id)arg0;
- (id)identity;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (long long)packageType;

@end
