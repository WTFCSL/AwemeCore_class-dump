//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOShareModel : MTLModel <MTLJSONSerializing> {
    NSString *_openPlatformKey;
    NSString *_openPlatformShareId;
    NSString *_openPlatformExtra;
    NSString *_openPlatformContent;
}

@property (copy, nonatomic) NSString *openPlatformKey;
@property (copy, nonatomic) NSString *openPlatformShareId;
@property (copy, nonatomic) NSString *openPlatformExtra;
@property (copy, nonatomic) NSString *openPlatformContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)openPlatformKey;
- (void)setOpenPlatformKey:(id)arg0;
- (id)openPlatformShareId;
- (void)setOpenPlatformShareId:(id)arg0;
- (id)openPlatformExtra;
- (void)setOpenPlatformExtra:(id)arg0;
- (id)openPlatformContent;
- (void)setOpenPlatformContent:(id)arg0;
- (void).cxx_destruct;

@end
