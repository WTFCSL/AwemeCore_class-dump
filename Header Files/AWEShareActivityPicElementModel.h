//
//     Generated by private class-dump
//

@class AWEShareActivityPicConfigModel;

@interface AWEShareActivityPicElementModel : AWEBaseApiModel {
    AWEShareActivityPicConfigModel *_logo;
    AWEShareActivityPicConfigModel *_avatar;
    AWEShareActivityPicConfigModel *_name;
    AWEShareActivityPicConfigModel *_desc;
    AWEShareActivityPicConfigModel *_line;
    AWEShareActivityPicConfigModel *_qrCode;
}

@property (retain, nonatomic) AWEShareActivityPicConfigModel *logo;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *avatar;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *name;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *desc;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *line;
@property (retain, nonatomic) AWEShareActivityPicConfigModel *qrCode;

+ (id)avatarJSONTransformer;
+ (id)logoJSONTransformer;
+ (id)nameJSONTransformer;
+ (id)descJSONTransformer;
+ (id)lineJSONTransformer;
+ (id)qrCodeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)desc;
- (void).cxx_destruct;
- (void)setLogo:(id)arg0;
- (void)setName:(id)arg0;
- (id)line;
- (id)logo;
- (void)setDesc:(id)arg0;
- (id)name;
- (void)setLine:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)qrCode;
- (void)setQrCode:(id)arg0;

@end