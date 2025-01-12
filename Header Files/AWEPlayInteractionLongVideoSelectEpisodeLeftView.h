//
//     Generated by private class-dump
//

@class UILabel, NSString, AWEPlayInteractionContext, AWEAwemeModel, UIImageView, NSAttributedString, UITapGestureRecognizer;

@interface AWEPlayInteractionLongVideoSelectEpisodeLeftView : UIView {
    AWEAwemeModel *_model;
    NSString *_referString;
    AWEPlayInteractionContext *_context;
    NSAttributedString *_attrTips;
    UITapGestureRecognizer *_tapGes;
    UIImageView *_selectImageView;
    UIImageView *_arrowImageView;
    UILabel *_selectTypeLabel;
    UILabel *_updateEpisodeLabel;
    id /* block */ _selectPanelActionBlock;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (copy, nonatomic) NSAttributedString *attrTips;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *selectTypeLabel;
@property (retain, nonatomic) UILabel *updateEpisodeLabel;
@property (copy, nonatomic) id /* block */ selectPanelActionBlock;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setAttrTips:(id)arg0;
- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (id)attrTips;
- (id)tapGes;
- (void)setTapGes:(id)arg0;
- (void)addTapGesture;
- (id)updateEpisodeLabel;
- (void)updateWithModel:(id)arg0 context:(id)arg1;
- (void)onSelectPanelClicked:(id)arg0;
- (id)selectTypeLabel;
- (id /* block */)selectPanelActionBlock;
- (void)setSelectTypeLabel:(id)arg0;
- (void)setUpdateEpisodeLabel:(id)arg0;
- (void)setSelectPanelActionBlock:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;
- (void)setupSubviews;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
