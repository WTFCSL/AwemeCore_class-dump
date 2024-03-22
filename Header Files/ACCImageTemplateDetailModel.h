//
//     Generated by private class-dump
//

@class ACCVideoTemplateExtModel, NSString, ACCTemplateCoverModel, ACCImageTemplateExtModel;

@interface ACCImageTemplateDetailModel : MTLModel <MTLJSONSerializing> {
    NSString *_templateID;
    long long _appID;
    NSString *_regionKey;
    long long _templateType;
    NSString *_mediaID;
    NSString *_templateName;
    NSString *_templateDesc;
    long long _width;
    long long _height;
    NSString *_templateMD5;
    NSString *_templateURI;
    ACCTemplateCoverModel *_cover;
    NSString *_tags;
    NSString *_extra;
    long long _userCount;
    long long _status;
    ACCImageTemplateExtModel *_imageTemplateExt;
    ACCVideoTemplateExtModel *_videoTemplateExt;
    long long _provider;
}

@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *mediaID;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *templateDesc;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *templateMD5;
@property (copy, nonatomic) NSString *templateURI;
@property (retain, nonatomic) ACCTemplateCoverModel *cover;
@property (copy, nonatomic) NSString *tags;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long userCount;
@property (nonatomic) long long status;
@property (retain, nonatomic) ACCImageTemplateExtModel *imageTemplateExt;
@property (retain, nonatomic) ACCVideoTemplateExtModel *videoTemplateExt;
@property (nonatomic) long long provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)imageTemplateExtJSONTransformer;
+ (id)videoTemplateExtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)cover;
- (void)setCover:(id)arg0;
- (void)setRegionKey:(id)arg0;
- (id)regionKey;
- (id)imageTemplateExt;
- (id)videoTemplateExt;
- (id)templateDesc;
- (void)setTemplateDesc:(id)arg0;
- (id)templateMD5;
- (void)setTemplateMD5:(id)arg0;
- (id)templateURI;
- (void)setTemplateURI:(id)arg0;
- (void)setImageTemplateExt:(id)arg0;
- (void)setVideoTemplateExt:(id)arg0;
- (void)setProvider:(long long)arg0;
- (void)setAppID:(long long)arg0;
- (long long)provider;
- (void).cxx_destruct;
- (long long)height;
- (long long)status;
- (id)tags;
- (id)templateID;
- (id)extra;
- (long long)appID;
- (void)setStatus:(long long)arg0;
- (void)setTemplateType:(long long)arg0;
- (void)setWidth:(long long)arg0;
- (void)setTags:(id)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (void)setTemplateID:(id)arg0;
- (long long)templateType;
- (long long)userCount;
- (void)setUserCount:(long long)arg0;
- (void)setMediaID:(id)arg0;
- (id)mediaID;
- (id)templateName;
- (void)setTemplateName:(id)arg0;

@end
