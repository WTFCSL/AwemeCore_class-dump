//
//     Generated by private class-dump
//

@class NSString, NSNumber, UIView;

@protocol AWEPOIDetailInfoViewModelProtocol <NSObject>

+ (double)preferredHeightForDataModel:(id)arg0 width:(double)arg1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg3 cellIdentifier:(id)arg4;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *dynamicId;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } itemMargin;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } itemPadding;
@property (nonatomic) double cardCornerRadius;
@property (nonatomic) double updateStartTime;
@property (copy, nonatomic) id /* block */ updateCompletedBlock;

- (void)setupViewModel;
- (id)geckoID;
- (double)updateStartTime;
- (void)setItemMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })itemMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })itemPadding;
- (void)setItemPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setUpdateStartTime:(double)arg0;
- (id)dynamicId;
- (void)setDynamicId:(id)arg0;
- (id /* block */)updateCompletedBlock;
- (void)setUpdateCompletedBlock:(id /* block */)arg0;
- (id)identifier;
- (void)setView:(id)arg0;
- (id)view;
- (void)setIdentifier:(id)arg0;
- (id)cardName;
- (double)cardCornerRadius;
- (void)setCardCornerRadius:(double)arg0;

@optional

- (void)poi_onPageAppear;
- (void)poi_onPageDisappear;
- (void)poi_onAppear;
- (void)poi_onCompleteAppear;
- (void)poi_onPartlyDisappear;
- (void)poi_onDisappear;
- (void)updateWithModel:(id)arg0;

@end