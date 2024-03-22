//
//     Generated by private class-dump
//

@class NSURL, NSString, NSDictionary;

@protocol ECOMTIMSendFileModelProtocol

@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSString *remotePath;
@property (copy, nonatomic) NSString *displayType;
@property (nonatomic) long long length;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *mime;
@property (copy, nonatomic) NSString *fileExtension;
@property (copy, nonatomic) NSDictionary *ext;

- (void)setExt:(id)arg0;
- (void)setLength:(long long)arg0;
- (id)displayType;
- (void)setDisplayType:(id)arg0;
- (long long)length;
- (id)md5;
- (void)setMd5:(id)arg0;
- (id)fileExtension;
- (void)setFileExtension:(id)arg0;
- (id)localURL;
- (void)setLocalURL:(id)arg0;
- (id)mime;
- (void)setMime:(id)arg0;
- (id)remotePath;
- (void)setRemotePath:(id)arg0;
- (id)ext;

@end
