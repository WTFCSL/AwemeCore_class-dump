//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGuideSubscenePickerItem : IESLiveDynamicModel {
    unsigned long long _liveSubType;
    struct CGSize { double width; double height; } _contentSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cellFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cellFrame;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *iconImageName;
@property (retain, nonatomic) NSString *selectedIconImageName;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned long long liveSubType;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrame;
- (void)setCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)liveSubType;
- (void)setLiveSubType:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)init;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;

@end
