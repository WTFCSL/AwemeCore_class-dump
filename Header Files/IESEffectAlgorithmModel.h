//
//     Generated by private class-dump
//

@class NSString, CKDownloadInfo_OC, NSArray;

@interface IESEffectAlgorithmModel : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    NSString *_version;
    NSArray *_fileDownloadURLs;
    NSString *_modelMD5;
    long long _sizeType;
    NSString *_nameSec;
    CKDownloadInfo_OC *_downloadInfo;
}

@property (copy, nonatomic) NSString *ep_scene;
@property (copy, nonatomic) NSString *nameSec;
@property (retain, nonatomic) CKDownloadInfo_OC *downloadInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *fileDownloadURLs;
@property (copy, nonatomic) NSString *modelMD5;
@property (nonatomic) long long sizeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)modelMD5;
- (void)setModelMD5:(id)arg0;
- (id)ep_scene;
- (id)nameSec;
- (id)toAlgoURS;
- (id)toDownloadInfo;
- (void)setNameSec:(id)arg0;
- (id)fileDownloadURLs;
- (void)setEp_scene:(id)arg0;
- (void)setFileDownloadURLs:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setName:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)name;
- (long long)sizeType;
- (void)setSizeType:(long long)arg0;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg0;

@end