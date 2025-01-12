//
//     Generated by private class-dump
//

@class UIFont;

@interface IESLivePKTagBuilderConfig : NSObject {
    BOOL _useLegacyPadding;
    UIFont *_tagFont;
    double _tagIconInsidePadding;
    struct CGSize { double width; double height; } _tagIconSize;
}

@property (nonatomic) struct CGSize { double width; double height; } tagIconSize;
@property (retain, nonatomic) UIFont *tagFont;
@property (nonatomic) double tagIconInsidePadding;
@property (nonatomic) BOOL useLegacyPadding;

- (id)tagFont;
- (void)setTagFont:(id)arg0;
- (void)setTagIconSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setUseLegacyPadding:(BOOL)arg0;
- (void)setTagIconInsidePadding:(double)arg0;
- (struct CGSize { double x0; double x1; })tagIconSize;
- (double)tagIconInsidePadding;
- (BOOL)useLegacyPadding;
- (id)init;
- (void).cxx_destruct;

@end
