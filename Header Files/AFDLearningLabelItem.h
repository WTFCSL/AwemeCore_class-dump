//
//     Generated by private class-dump
//

@class UIColor, AFDLearningInterestLabelModel;

@interface AFDLearningLabelItem : NSObject {
    BOOL _isSelected;
    BOOL _hasShowed;
    AFDLearningInterestLabelModel *_label;
    UIColor *_selectedColor;
}

@property (retain, nonatomic) AFDLearningInterestLabelModel *label;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL hasShowed;

+ (id)selectedColorList;

- (BOOL)hasShowed;
- (void)setHasShowed:(BOOL)arg0;
- (id)initWithLabelModel:(id)arg0 index:(unsigned long long)arg1;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg0;
- (id)label;
- (BOOL)isSelected;

@end
