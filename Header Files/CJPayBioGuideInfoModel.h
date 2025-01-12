//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBioGuideInfoModel : JSONModel {
    BOOL _choose;
    BOOL _isShowButton;
    NSString *_title;
    NSString *_bioType;
    NSString *_guideStyle;
    NSString *_btnDesc;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL choose;
@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *guideStyle;
@property (copy, nonatomic) NSString *btnDesc;
@property (nonatomic) BOOL isShowButton;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)guideStyle;
- (id)btnDesc;
- (void)setBtnDesc:(id)arg0;
- (void)setGuideStyle:(id)arg0;
- (id)bioType;
- (void)setChoose:(BOOL)arg0;
- (void)setBioType:(id)arg0;
- (BOOL)isShowButton;
- (void)setIsShowButton:(BOOL)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (BOOL)choose;

@end
