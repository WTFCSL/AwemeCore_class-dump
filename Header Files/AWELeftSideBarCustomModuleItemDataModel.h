//
//     Generated by private class-dump
//

@class NSString;

@interface AWELeftSideBarCustomModuleItemDataModel : MTLModel <MTLJSONSerializing> {
    BOOL _needLogin;
    NSString *_title;
    NSString *_schema;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL needLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)needLogin;
- (void)setNeedLogin:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;

@end