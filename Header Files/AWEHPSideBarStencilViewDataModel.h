//
//     Generated by private class-dump
//

@class NSString, AWELeftSideBarListCellLeftIconModel;

@interface AWEHPSideBarStencilViewDataModel : MTLModel <MTLJSONSerializing, AWEHPSideBarStencilViewDataModelProtocol> {
    NSString *_title;
    NSString *_schema;
    AWELeftSideBarListCellLeftIconModel *_leftIcon;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWELeftSideBarListCellLeftIconModel *leftIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setLeftIcon:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;
- (id)leftIcon;

@end