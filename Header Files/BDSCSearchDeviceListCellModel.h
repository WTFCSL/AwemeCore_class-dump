//
//     Generated by private class-dump
//

@class NSString, BDSCBackgroundUIModel, NSArray;

@interface BDSCSearchDeviceListCellModel : BDSCDeviceListModel {
    BOOL _isSelectedBold;
    BOOL _separatorLine;
    NSString *_deviceName;
    unsigned long long _rectCorner;
    double _cornerRadius;
    BDSCBackgroundUIModel *_background;
    NSString *_backgroundPlaceholder;
    BDSCBackgroundUIModel *_selectedBackground;
    NSString *_selectedColor;
    NSString *_tvIcon;
    NSString *_defaultTvIcon;
    double _margin;
    double _selectMarkMargin;
    NSArray *_tags;
}

@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) BDSCBackgroundUIModel *background;
@property (copy, nonatomic) NSString *backgroundPlaceholder;
@property (retain, nonatomic) BDSCBackgroundUIModel *selectedBackground;
@property (copy, nonatomic) NSString *selectedColor;
@property (nonatomic) BOOL isSelectedBold;
@property (copy, nonatomic) NSString *tvIcon;
@property (copy, nonatomic) NSString *defaultTvIcon;
@property (nonatomic) double margin;
@property (nonatomic) double selectMarkMargin;
@property (nonatomic) BOOL separatorLine;
@property (copy, nonatomic) NSArray *tags;

- (void)setRectCorner:(unsigned long long)arg0;
- (unsigned long long)rectCorner;
- (id)tvIcon;
- (id)defaultTvIcon;
- (double)selectMarkMargin;
- (id)selectedBackground;
- (BOOL)isSelectedBold;
- (id)backgroundPlaceholder;
- (void)setTvIcon:(id)arg0;
- (void)setBackgroundPlaceholder:(id)arg0;
- (void)setSelectedBackground:(id)arg0;
- (void)setIsSelectedBold:(BOOL)arg0;
- (void)setDefaultTvIcon:(id)arg0;
- (void)setSelectMarkMargin:(double)arg0;
- (double)margin;
- (id)init;
- (void)setDeviceName:(id)arg0;
- (id)background;
- (void).cxx_destruct;
- (id)deviceName;
- (double)cornerRadius;
- (id)tags;
- (void)setBackground:(id)arg0;
- (void)setMargin:(double)arg0;
- (void)setTags:(id)arg0;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg0;
- (void)setCornerRadius:(double)arg0;
- (id)cellIdentifier;
- (double)cellHeight;
- (BOOL)separatorLine;
- (void)setSeparatorLine:(BOOL)arg0;

@end