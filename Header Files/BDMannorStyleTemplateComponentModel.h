//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol BDMannorStyleTemplateComponentDataProtocol;

@interface BDMannorStyleTemplateComponentModel : MTLModel <MTLJSONSerializing> {
    BOOL _mannorEnable;
    BOOL _isMainTemplate;
    long long _type;
    long long _renderType;
    NSString *_nameSpace;
    NSString *_uri;
    NSString *_styleTemplateCode;
    NSString *_scene;
    NSDictionary *_data;
    NSDictionary *_layout;
    NSDictionary *_meta;
    NSString *_atpConfig;
    long long _ID;
}

@property (retain, nonatomic) id<BDMannorStyleTemplateComponentDataProtocol> dataModel;
@property (nonatomic) long long type;
@property (nonatomic) long long renderType;
@property (copy, nonatomic) NSString *nameSpace;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *styleTemplateCode;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL mannorEnable;
@property (nonatomic) BOOL isMainTemplate;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *layout;
@property (copy, nonatomic) NSDictionary *meta;
@property (copy, nonatomic) NSString *atpConfig;
@property (nonatomic) long long ID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)renderType;
- (id)styleTemplateCode;
- (void)setStyleTemplateCode:(id)arg0;
- (BOOL)mannorEnable;
- (void)setMannorEnable:(BOOL)arg0;
- (BOOL)isMainTemplate;
- (void)setIsMainTemplate:(BOOL)arg0;
- (id)atpConfig;
- (void)setAtpConfig:(id)arg0;
- (long long)ID;
- (void)setMeta:(id)arg0;
- (void)setLayout:(id)arg0;
- (id)data;
- (id)meta;
- (void)setScene:(id)arg0;
- (void)setID:(long long)arg0;
- (void).cxx_destruct;
- (void)setNameSpace:(id)arg0;
- (void)setData:(id)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)nameSpace;
- (id)layout;
- (void)setUri:(id)arg0;
- (void)setRenderType:(long long)arg0;
- (id)uri;
- (id)scene;
- (id)dataModel;
- (void)setDataModel:(id)arg0;

@end