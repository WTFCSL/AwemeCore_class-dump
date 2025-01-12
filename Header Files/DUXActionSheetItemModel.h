//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface DUXActionSheetItemModel : NSObject {
    BOOL _dismissShouldBeforeSelect;
    BOOL _isAdaptBigFont;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_iconImage;
    unsigned long long _use;
    id /* block */ _select;
    long long _type;
    double _cellHeight;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) UIImage *iconImage;
@property (nonatomic) unsigned long long use;
@property (copy, nonatomic) id /* block */ select;
@property (nonatomic) BOOL dismissShouldBeforeSelect;
@property (nonatomic) BOOL isAdaptBigFont;
@property (nonatomic) long long type;
@property (nonatomic) double cellHeight;

- (id)initWithTitle:(id)arg0 andSubtitle:(id)arg1 andUseIsNormal:(BOOL)arg2;
- (void)setDismissShouldBeforeSelect:(BOOL)arg0;
- (id)initWithTitle:(id)arg0 andSubtitle:(id)arg1 andIconImage:(id)arg2 andUseIsNormal:(BOOL)arg3;
- (void)setIsAdaptBigFont:(BOOL)arg0;
- (BOOL)isAdaptBigFont;
- (double)originHorizontalHeight;
- (BOOL)dismissShouldBeforeSelect;
- (id /* block */)select;
- (id)iconImage;
- (void).cxx_destruct;
- (void)setSelect:(id /* block */)arg0;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (id)subtitle;
- (void)setIconImage:(id)arg0;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (unsigned long long)use;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (void)setUse:(unsigned long long)arg0;

@end
