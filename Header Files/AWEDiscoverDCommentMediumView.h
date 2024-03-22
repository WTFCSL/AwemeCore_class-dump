//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWEDiscoverDCommentMediumView : UIView <AWEDiscoverDMediumCommentViewProtocol> {
    AWEAwemeModel *_model;
    NSDictionary *_params;
    UIImageView *_imageView;
    UILabel *_tagLabel;
    UILabel *_textLabel;
    UILabel *_extraLabel;
    UIView *_lineView;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *extraLabel;
@property (retain, nonatomic) UIView *lineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraLabel;
- (void)setExtraLabel:(id)arg0;
- (void)mediumViewDidShow;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)addTapGesture;
- (void)mediumViewTapped;
- (id)initWithModel:(id)arg0 params:(id)arg1;
- (void)setModel:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)model;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (id)params;
- (void)setTextLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (void)setParams:(id)arg0;

@end
