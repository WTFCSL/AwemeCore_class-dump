//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDVideoUploadInfo : NSObject {
    NSString *_vid;
    NSString *_oid;
    NSString *_md5;
    NSDictionary *_videoMetaInfo;
    NSDictionary *_encryptionInfo;
    NSString *_coverURI;
    NSString *_callbackArgs;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSDictionary *videoMetaInfo;
@property (copy, nonatomic) NSDictionary *encryptionInfo;
@property (copy, nonatomic) NSString *coverURI;
@property (copy, nonatomic) NSString *callbackArgs;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)vid;
- (void)setVid:(id)arg0;
- (id)videoMetaInfo;
- (void)setVideoMetaInfo:(id)arg0;
- (id)coverURI;
- (void)setCoverURI:(id)arg0;
- (id)callbackArgs;
- (void)setCallbackArgs:(id)arg0;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;
- (id)md5;
- (void)setMd5:(id)arg0;
- (id)oid;
- (void)setOid:(id)arg0;
- (id)encryptionInfo;
- (void)setEncryptionInfo:(id)arg0;

@end
