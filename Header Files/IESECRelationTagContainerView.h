//
//     Generated by private class-dump
//

@class IESECRelationTagContainerModel, UIView;

@interface IESECRelationTagContainerView : UIView {
    IESECRelationTagContainerModel *_model;
    UIView *_contentView;
}

@property (readonly, nonatomic) IESECRelationTagContainerModel *model;

+ (id)p_constructSubTagView:(id)arg0;
+ (id)p_constructText:(id)arg0;
+ (id)p_constructImage:(id)arg0;
+ (id)p_constructDividerLine:(id)arg0;

- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithModel:(id)arg0;

@end
