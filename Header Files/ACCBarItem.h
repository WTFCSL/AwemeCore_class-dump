//
//     Generated by private class-dump
//

@class UIButton, NSString, UIView;

@interface ACCBarItem : NSObject {
    BOOL _useAnimatedButton;
    BOOL _placeLastUnfold;
    BOOL _needDisableButNotHideButton;
    BOOL _labelShowing;
    BOOL _enableSectionPremanent;
    BOOL _isDivisionItem;
    UIButton *_actionButton;
    UIView *_titleView;
    NSString *_imageName;
    NSString *_title;
    NSString *_selectedImageName;
    void *_itemId;
    unsigned long long _location;
    id /* block */ _barItemActionBlock;
    id /* block */ _barItemViewConfigBlock;
    id /* block */ _needShowBlock;
    id _extraData;
    id /* block */ _showBubbleBlock;
    id /* block */ _willShowBlock;
    UIView *_guideView;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) BOOL useAnimatedButton;
@property (nonatomic) BOOL placeLastUnfold;
@property (nonatomic) BOOL needDisableButNotHideButton;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *selectedImageName;
@property (nonatomic) void *itemId;
@property (nonatomic) unsigned long long location;
@property (copy, nonatomic) id /* block */ barItemActionBlock;
@property (copy, nonatomic) id /* block */ barItemViewConfigBlock;
@property (copy, nonatomic) id /* block */ needShowBlock;
@property (retain, nonatomic) id extraData;
@property (nonatomic) BOOL labelShowing;
@property (nonatomic) BOOL enableSectionPremanent;
@property (nonatomic) BOOL isDivisionItem;
@property (copy, nonatomic) id /* block */ showBubbleBlock;
@property (copy, nonatomic) id /* block */ willShowBlock;
@property (retain, nonatomic) UIView *guideView;

- (void)setBarItemActionBlock:(id /* block */)arg0;
- (id /* block */)barItemActionBlock;
- (id)selectedImageName;
- (void)setSelectedImageName:(id)arg0;
- (void)setBarItemViewConfigBlock:(id /* block */)arg0;
- (void)setNeedShowBlock:(id /* block */)arg0;
- (id /* block */)needShowBlock;
- (id /* block */)barItemViewConfigBlock;
- (id)initWithButton:(id)arg0 title:(id)arg1 itemId:(void *)arg2;
- (void)setUseAnimatedButton:(BOOL)arg0;
- (void)setWillShowBlock:(id /* block */)arg0;
- (id)initWithButton:(id)arg0 titleView:(id)arg1 itemId:(void *)arg2;
- (void)setLabelShowing:(BOOL)arg0;
- (void)setShowBubbleBlock:(id /* block */)arg0;
- (BOOL)placeLastUnfold;
- (id)initWithImageName:(id)arg0 title:(id)arg1 itemId:(void *)arg2;
- (id)initWithImageName:(id)arg0 itemId:(void *)arg1;
- (void)setIsDivisionItem:(BOOL)arg0;
- (BOOL)enableSectionPremanent;
- (BOOL)useAnimatedButton;
- (BOOL)needDisableButNotHideButton;
- (BOOL)isDivisionItem;
- (void)setEnableSectionPremanent:(BOOL)arg0;
- (id /* block */)showBubbleBlock;
- (id /* block */)willShowBlock;
- (void)setPlaceLastUnfold:(BOOL)arg0;
- (void)setNeedDisableButNotHideButton:(BOOL)arg0;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (unsigned long long)type;
- (unsigned long long)location;
- (id)initWithConfig:(id)arg0;
- (void)setTitleView:(id)arg0;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setLocation:(unsigned long long)arg0;
- (id)titleView;
- (void)setTitle:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setExtraData:(id)arg0;
- (id)extraData;
- (void *)itemId;
- (void)setItemId:(void *)arg0;
- (void)setGuideView:(id)arg0;
- (id)guideView;
- (BOOL)labelShowing;

@end