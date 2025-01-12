//
//     Generated by private class-dump
//

@class UIColor;

@interface IESLiveRecordProgressView : UIView {
    unsigned long long _style;
    double _progress;
    UIColor *_progerssColor;
    UIColor *_progerssBackgroundColor;
    double _progerWidth;
    double _backGroundWidth;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progerssColor;
@property (retain, nonatomic) UIColor *progerssBackgroundColor;
@property (nonatomic) double progerWidth;
@property (nonatomic) double backGroundWidth;

- (void)setProgerssColor:(id)arg0;
- (void)setProgerssBackgroundColor:(id)arg0;
- (id)progerssBackgroundColor;
- (id)progerssColor;
- (void)setProgerWidth:(double)arg0;
- (double)progerWidth;
- (void)setBackGroundWidth:(double)arg0;
- (void)drawCircleProgress:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectProgress:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)backGroundWidth;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)progress;
- (void)setProgress:(double)arg0;
- (void)setStyle:(unsigned long long)arg0;

@end
