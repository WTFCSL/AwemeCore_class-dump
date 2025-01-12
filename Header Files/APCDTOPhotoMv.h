//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface APCDTOPhotoMv : MTLModel <MTLJSONSerializing> {
    BOOL _canUseHighQuality;
    NSString *_mvResId;
    NSArray *_imageList;
}

@property (copy, nonatomic) NSString *mvResId;
@property (copy, nonatomic) NSArray *imageList;
@property (nonatomic) BOOL canUseHighQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setImageList:(id)arg0;
- (id)mvResId;
- (void)setMvResId:(id)arg0;
- (BOOL)canUseHighQuality;
- (void)setCanUseHighQuality:(BOOL)arg0;
- (void).cxx_destruct;
- (id)imageList;

@end
