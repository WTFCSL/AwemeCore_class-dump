//
//     Generated by private class-dump
//

@class NSString, AWELeftSideBarModel;

@interface AWEHPSideBarMoreButtonDataModel : AWEHPSideBarStencilViewDataModel {
    NSString *_backTitle;
    AWELeftSideBarModel *_sideBarModel;
}

@property (copy, nonatomic) NSString *backTitle;
@property (copy, nonatomic) AWELeftSideBarModel *sideBarModel;

+ (id)sideBarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)backTitle;
- (id)sideBarModel;
- (void)setBackTitle:(id)arg0;
- (void)setSideBarModel:(id)arg0;
- (void).cxx_destruct;

@end