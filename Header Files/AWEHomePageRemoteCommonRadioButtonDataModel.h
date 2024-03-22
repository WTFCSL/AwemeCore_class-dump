//
//     Generated by private class-dump
//

@class NSString, AWEHomePageRemoteCommonImageModel;

@interface AWEHomePageRemoteCommonRadioButtonDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_schema;
    NSString *_tabID;
    AWEHomePageRemoteCommonImageModel *_imageModel;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *imageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)imageModel;
- (void)setImageModel:(id)arg0;
- (void)setTabID:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;
- (id)tabID;

@end