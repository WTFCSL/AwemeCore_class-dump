//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface CECSwitchLengthCell : UICollectionViewCell {
    NSString *_text;
    long long _modeId;
    unsigned long long _cellStyle;
    UILabel *_textLabel;
    double _progress;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long modeId;
@property (nonatomic) unsigned long long cellStyle;

- (void)releaseFocus;
- (void)focusByProgress:(double)arg0;
- (id)textLabel;
- (id)accessibilityLabel;
- (BOOL)isUserInteractionEnabled;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setText:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelected:(BOOL)arg0;
- (unsigned long long)cellStyle;
- (double)progress;
- (id)text;
- (void)prepareForReuse;
- (void)focus;
- (void)setProgress:(double)arg0;
- (BOOL)isAccessibilityElement;
- (void)setTextLabel:(id)arg0;
- (void)setCellStyle:(unsigned long long)arg0;
- (long long)modeId;
- (void)setModeId:(long long)arg0;

@end
