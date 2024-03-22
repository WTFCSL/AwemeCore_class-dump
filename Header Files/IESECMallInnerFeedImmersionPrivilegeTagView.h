//
//     Generated by private class-dump
//

@class UIColor, CAShapeLayer, UIImageView, UILabel, UIView;

@interface IESECMallInnerFeedImmersionPrivilegeTagView : UIView {
    UILabel *_tagHeader;
    UILabel *_tagContent;
    UIView *_dashlineView;
    CAShapeLayer *_dashline;
    UIImageView *_tagImageView;
    UIColor *_lightRedColor;
    UIColor *_redColor;
    UIColor *_lightGoldenColor;
    UIColor *_goldenColor;
    struct CGSize { double width; double height; } _tagSize;
}

@property (retain, nonatomic) UILabel *tagHeader;
@property (retain, nonatomic) UILabel *tagContent;
@property (retain, nonatomic) UIView *dashlineView;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIColor *lightRedColor;
@property (retain, nonatomic) UIColor *redColor;
@property (retain, nonatomic) UIColor *lightGoldenColor;
@property (retain, nonatomic) UIColor *goldenColor;
@property (nonatomic) struct CGSize { double width; double height; } tagSize;

- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (void)setTagContent:(id)arg0;
- (void)setTagHeader:(id)arg0;
- (struct CGSize { double x0; double x1; })tagSize;
- (void)setTagSize:(struct CGSize { double x0; double x1; })arg0;
- (id)dashline;
- (id)tagHeader;
- (void)setDashline:(id)arg0;
- (id)dashlineView;
- (id)lightRedColor;
- (id)lightGoldenColor;
- (id)goldenColor;
- (void)setDashlineView:(id)arg0;
- (void)setLightRedColor:(id)arg0;
- (void)setRedColor:(id)arg0;
- (void)setLightGoldenColor:(id)arg0;
- (void)setGoldenColor:(id)arg0;
- (void).cxx_destruct;
- (id)redColor;
- (id)tagContent;
- (void)updateWithModel:(id)arg0;

@end
