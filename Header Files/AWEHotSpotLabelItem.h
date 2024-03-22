//
//     Generated by private class-dump
//

@class NSString, AWEHotSpotInterestLabelModel;

@interface AWEHotSpotLabelItem : NSObject {
    BOOL _isSelected;
    BOOL _hasShowed;
    AWEHotSpotInterestLabelModel *_label;
    NSString *_titleForBigFontMode;
}

@property (retain, nonatomic) AWEHotSpotInterestLabelModel *label;
@property (copy, nonatomic) NSString *titleForBigFontMode;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL hasShowed;

- (BOOL)hasShowed;
- (void)setHasShowed:(BOOL)arg0;
- (id)initWithLabelModel:(id)arg0 index:(unsigned long long)arg1;
- (id)titleForBigFontMode;
- (void)setTitleForBigFontMode:(id)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)label;
- (BOOL)isSelected;

@end
