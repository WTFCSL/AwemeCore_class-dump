//
//     Generated by private class-dump
//

@class NSString, AWESinglePayEpisodeDiversionXiguaSchemaParam, AWEURLModel;

@interface AWESinglePayEpisodeDiversionXiguaModel : MTLModel <MTLJSONSerializing> {
    BOOL _enable;
    BOOL _xiguaOldUser;
    NSString *_title;
    NSString *_subTitle;
    NSString *_installedText;
    NSString *_uninstalledText;
    AWEURLModel *_coverUrl;
    AWEURLModel *_backgroundUrl;
    AWESinglePayEpisodeDiversionXiguaSchemaParam *_schemaParam;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL xiguaOldUser;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *installedText;
@property (copy, nonatomic) NSString *uninstalledText;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *backgroundUrl;
@property (retain, nonatomic) AWESinglePayEpisodeDiversionXiguaSchemaParam *schemaParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (id)backgroundUrl;
- (void)setBackgroundUrl:(id)arg0;
- (BOOL)xiguaOldUser;
- (void)setXiguaOldUser:(BOOL)arg0;
- (id)installedText;
- (void)setInstalledText:(id)arg0;
- (id)uninstalledText;
- (void)setUninstalledText:(id)arg0;
- (id)schemaParam;
- (void)setSchemaParam:(id)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)title;
- (void)setEnable:(BOOL)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end
