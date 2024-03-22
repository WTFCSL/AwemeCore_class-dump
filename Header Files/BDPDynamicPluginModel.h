//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDPDynamicPluginModel : NSObject {
    long long _type;
    long long _sourceType;
    NSString *_name;
    NSString *_min_jssdk;
    NSString *_version;
    NSString *_md5;
    NSArray *_path;
    NSString *_localFilePath;
}

@property (copy, nonatomic) NSString *localFilePath;
@property (nonatomic) long long type;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *min_jssdk;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSArray *path;

- (id)min_jssdk;
- (void)setMin_jssdk:(id)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (void)setPath:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)version;
- (void)setName:(id)arg0;
- (id)description;
- (id)name;
- (id)md5;
- (void)setMd5:(id)arg0;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg0;

@end
