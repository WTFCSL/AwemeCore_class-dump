//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, TTTAttributedLabel, UIImage, NSArray, UITapGestureRecognizer;
@protocol AWEFeedBackEntranceDelegate;

@interface AWEFeedBackEntranceView : UIView <TTTAttributedLabelDelegate> {
    NSArray *_modelArray;
    id<AWEFeedBackEntranceDelegate> _delegate;
    TTTAttributedLabel *_contentLabel;
    UIImageView *_rightImageView;
    NSString *_text;
    UIColor *_highlightColor;
    UIColor *_normalColor;
    UIImage *_image;
    NSString *_imageURL;
    UITapGestureRecognizer *_tapGes;
}

@property (retain, nonatomic) TTTAttributedLabel *contentLabel;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) NSArray *modelArray;
@property (weak, nonatomic) id<AWEFeedBackEntranceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)arg0 didSelectLinkWithURL:(id)arg1;
- (id)modelArray;
- (void)setModelArray:(id)arg0;
- (void)configContentLabel;
- (id)tapGes;
- (void)imageTapped;
- (void)setImage:(id)arg0 imageURL:(id)arg1;
- (void)setNormalTextColor:(id)arg0 highlightTextColor:(id)arg1;
- (void)setTapGes:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)image;
- (void)commonInit;
- (void)setImageURL:(id)arg0;
- (id)imageURL;
- (id)delegate;
- (void)setImage:(id)arg0;
- (id)text;
- (void)setHighlightColor:(id)arg0;
- (id)normalColor;
- (void)setDelegate:(id)arg0;
- (void)setNormalColor:(id)arg0;
- (id)highlightColor;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setRightImageView:(id)arg0;
- (id)rightImageView;

@end
