//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBizAccountInfo : MTLModel <MTLJSONSerializing> {
    NSString *_iosDownloadAppLink;
    NSString *_androidDownloadAppLink;
}

@property (copy, nonatomic) NSString *iosDownloadAppLink;
@property (copy, nonatomic) NSString *androidDownloadAppLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iosDownloadAppLink;
- (void)setIosDownloadAppLink:(id)arg0;
- (id)androidDownloadAppLink;
- (void)setAndroidDownloadAppLink:(id)arg0;
- (void).cxx_destruct;

@end
