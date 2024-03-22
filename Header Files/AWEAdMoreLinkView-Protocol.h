//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEAdMoreLinkView <AWECrotocol>

@property (nonatomic) BOOL labelOnly;
@property (nonatomic) BOOL adaptLightTheme;
@property (nonatomic, readonly) NSString *content;

- (id)initWithTagLabel:(id)arg0 padding:(long long)arg1 adaptLightTheme:(BOOL)arg2;
- (id)initWithContent:(id)arg0 alpha:(double)arg1 tagImageName:(id)arg2 serverImages:(id)arg3 height:(double)arg4;
- (void)setTagImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTagTextFont:(id)arg0;
- (void)setIsHollow:(BOOL)arg0;
- (void)setTagBackgroundColor:(id)arg0;
- (BOOL)labelOnly;
- (void)setLabelOnly:(BOOL)arg0;
- (BOOL)adaptLightTheme;
- (void)setAdaptLightTheme:(BOOL)arg0;
- (id)initWithContent:(id)arg0 height:(double)arg1;
- (id)initWithContent:(id)arg0 alpha:(double)arg1;
- (id)initWithContent:(id)arg0 alpha:(double)arg1 tagImageName:(id)arg2;
- (id)initWithContent:(id)arg0 alpha:(double)arg1 tagImageName:(id)arg2 height:(double)arg3;
- (id)initWithTagLabel:(id)arg0;
- (id)initWithTagLabel:(id)arg0 padding:(long long)arg1;
- (void)configWithLabelModel:(id)arg0;
- (void)configWithLabelModel:(id)arg0;
- (void)updateAdMoreLinkViewUIWithSearchDouPlus:(id)arg0;
- (void)updateAdMoreLinkViewUIWithSearchDouPlus:(id)arg0;
- (void)setUIWithPanelGuide;
- (void)setLabelTextFont:(id)arg0;
- (void)setLabelLeft:(double)arg0;
- (void)setLabelShadow:(double)arg0 shadowOffsetOfX:(double)arg1 shadowOffsetOfY:(double)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4;
- (id)init;
- (id)content;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)snapshot;
- (void)setCornerRadius:(double)arg0;
- (id)initWithContent:(id)arg0;
- (void)setLabelTextColor:(id)arg0;
- (void)layoutUI;

@end