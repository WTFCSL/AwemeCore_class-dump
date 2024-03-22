//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBatManActionsCellModel : NSObject {
    BOOL _isHighlightedStyle;
    long long _itemType;
    NSString *_title;
    NSString *_highlightedTitle;
    NSString *_iconImageName;
    NSString *_iconImageNameHighlighted;
    id /* block */ _cellTappedBlock;
    long long _defaultQualityIndex;
    id /* block */ _selectQualityAction;
    id /* block */ _changeFavoriteAction;
}

@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *highlightedTitle;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *iconImageNameHighlighted;
@property (copy, nonatomic) id /* block */ cellTappedBlock;
@property (nonatomic) long long defaultQualityIndex;
@property (copy, nonatomic) id /* block */ selectQualityAction;
@property (copy, nonatomic) id /* block */ changeFavoriteAction;
@property (nonatomic) BOOL isHighlightedStyle;

- (id /* block */)cellTappedBlock;
- (void)setCellTappedBlock:(id /* block */)arg0;
- (BOOL)isHighlightedStyle;
- (id)iconImageNameHighlighted;
- (id)highlightedTitle;
- (id /* block */)changeFavoriteAction;
- (void)setIsHighlightedStyle:(BOOL)arg0;
- (id)initWithType:(long long)arg0 title:(id)arg1 normalIcon:(id)arg2 highlightedIcon:(id)arg3;
- (id)initWithType:(long long)arg0 title:(id)arg1 icon:(id)arg2;
- (void)setHighlightedTitle:(id)arg0;
- (void)setIconImageNameHighlighted:(id)arg0;
- (long long)defaultQualityIndex;
- (void)setDefaultQualityIndex:(long long)arg0;
- (id /* block */)selectQualityAction;
- (void)setSelectQualityAction:(id /* block */)arg0;
- (void)setChangeFavoriteAction:(id /* block */)arg0;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (id)iconImageName;
- (id)title;
- (void)setIconImageName:(id)arg0;
- (void)setTitle:(id)arg0;

@end