//
//     Generated by private class-dump
//

@class NSString, NSMutableAttributedString, UIColor;

@interface CJPayStateShowModel : NSObject {
    NSString *_titleStr;
    NSMutableAttributedString *_titleAttributedStr;
    NSString *_iconName;
    double _imgDurationTime;
    UIColor *_iconBackgroundColor;
}

@property (copy, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSMutableAttributedString *titleAttributedStr;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) double imgDurationTime;
@property (retain, nonatomic) UIColor *iconBackgroundColor;

- (id)titleStr;
- (void)setTitleStr:(id)arg0;
- (id)titleAttributedStr;
- (void)setTitleAttributedStr:(id)arg0;
- (void)setIconBackgroundColor:(id)arg0;
- (double)imgDurationTime;
- (void)setImgDurationTime:(double)arg0;
- (id)iconBackgroundColor;
- (void).cxx_destruct;
- (id)iconName;
- (void)setIconName:(id)arg0;

@end