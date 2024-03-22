//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, AWECoverTextPackage;

@interface AWECoverTextPackageInnerView : UIView {
    AWECoverTextPackage *_textPackageConfig;
    id /* block */ _textDidChangeBlock;
    NSMutableArray *_innerConfigViews;
}

@property (retain, nonatomic) NSMutableArray *innerConfigViews;
@property (readonly, nonatomic) NSArray *configViews;
@property (retain, nonatomic) AWECoverTextPackage *textPackageConfig;
@property (copy, nonatomic) id /* block */ textDidChangeBlock;

- (id)configViews;
- (id /* block */)textDidChangeBlock;
- (void)setTextDidChangeBlock:(id /* block */)arg0;
- (id)textPackageConfig;
- (id)innerConfigViews;
- (void)setTextPackageConfig:(id)arg0;
- (void)setInnerConfigViews:(id)arg0;
- (void)updateBounds;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end
