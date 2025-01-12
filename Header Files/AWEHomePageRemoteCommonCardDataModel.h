//
//     Generated by private class-dump
//

@class NSString, AWEHomePageRemoteCommonImageModel;

@interface AWEHomePageRemoteCommonCardDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_subTitle;
    AWEHomePageRemoteCommonImageModel *_imageModel;
    AWEHomePageRemoteCommonImageModel *_iconModel;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *imageModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *iconModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageModelJSONTransformer;
+ (id)iconModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)imageModel;
- (void)setImageModel:(id)arg0;
- (id)iconModel;
- (void).cxx_destruct;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (void)setIconModel:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end
