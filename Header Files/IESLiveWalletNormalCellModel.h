//
//     Generated by private class-dump
//

@class NSString, IESLiveWalletImageModel;

@interface IESLiveWalletNormalCellModel : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    IESLiveWalletImageModel *_icon;
    IESLiveWalletImageModel *_light_icon;
    NSString *_link;
    NSString *_hint;
    NSString *_tag;
    NSString *_desc;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) IESLiveWalletImageModel *icon;
@property (retain, nonatomic) IESLiveWalletImageModel *light_icon;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *hint;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)light_iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)light_icon;
- (void)setLight_icon:(id)arg0;
- (id)desc;
- (id)icon;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)tag;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)link;
- (void)setDesc:(id)arg0;
- (id)name;
- (void)setHint:(id)arg0;
- (id)hint;

@end