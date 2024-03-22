//
//     Generated by private class-dump
//

@class AWEThemeChooseTimeModel, NSArray, NSString, UILabel, UIPickerView, UIView;
@protocol AWEThemeChooseTimePickerViewDeleagte;

@interface AWEThemeChooseTimePickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    id<AWEThemeChooseTimePickerViewDeleagte> _delegate;
    UIView *_topView;
    UIView *_bottomView;
    UILabel *_leftTimeLable;
    UILabel *_rightTimeLable;
    UIPickerView *_leftPickerView;
    UIPickerView *_rightPickerView;
    NSArray *_hoursArr;
    NSArray *_minArr;
    AWEThemeChooseTimeModel *_selectTimeModel;
}

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UILabel *leftTimeLable;
@property (retain, nonatomic) UILabel *rightTimeLable;
@property (retain, nonatomic) UIPickerView *leftPickerView;
@property (retain, nonatomic) UIPickerView *rightPickerView;
@property (retain, nonatomic) NSArray *hoursArr;
@property (retain, nonatomic) NSArray *minArr;
@property (retain, nonatomic) AWEThemeChooseTimeModel *selectTimeModel;
@property (weak, nonatomic) id<AWEThemeChooseTimePickerViewDeleagte> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimeWithModel:(id)arg0;
- (void)setUpTop;
- (void)setUpBottom;
- (id)getCommonLable:(double)arg0;
- (void)setLeftTimeLable:(id)arg0;
- (void)setRightTimeLable:(id)arg0;
- (id)leftTimeLable;
- (id)rightTimeLable;
- (id)getCommonPickerView;
- (void)addLine;
- (id)getCommonLineView;
- (void)clearSeparatorWithPickerView:(id)arg0;
- (void)setSelectTimeModel:(id)arg0;
- (id)leftPickerView;
- (id)rightPickerView;
- (id)selectTimeModel;
- (id)hoursArr;
- (id)minArr;
- (void)setLeftPickerView:(id)arg0;
- (void)setRightPickerView:(id)arg0;
- (void)setHoursArr:(id)arg0;
- (void)setMinArr:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setUp;
- (id)topView;
- (id)bottomView;
- (long long)numberOfComponentsInPickerView:(id)arg0;
- (long long)pickerView:(id)arg0 numberOfRowsInComponent:(long long)arg1;
- (double)pickerView:(id)arg0 widthForComponent:(long long)arg1;
- (double)pickerView:(id)arg0 rowHeightForComponent:(long long)arg1;
- (id)pickerView:(id)arg0 viewForRow:(long long)arg1 forComponent:(long long)arg2 reusingView:(id)arg3;
- (void)pickerView:(id)arg0 didSelectRow:(long long)arg1 inComponent:(long long)arg2;
- (void)setTopView:(id)arg0;
- (void)setBottomView:(id)arg0;

@end
