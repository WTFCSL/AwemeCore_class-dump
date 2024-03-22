//
//     Generated by private class-dump
//

@class AWEHPChannelActionPopoverTask, AWEHPChannelTabBarItemModel, AWEHPChannelBubbleTask;

@interface AWEHPChannelBottomBarStage : NSObject {
    BOOL _isTabBarSelected;
    BOOL _bottomBarFillBackground;
    BOOL _bottomBarShowBackgroungImage;
    AWEHPChannelTabBarItemModel *_tabItem;
    AWEHPChannelBubbleTask *_bubbleTask;
    AWEHPChannelActionPopoverTask *_popoverTask;
    unsigned long long _bottomBarThemeStyle;
}

@property (nonatomic) BOOL isTabBarSelected;
@property (copy, nonatomic) AWEHPChannelTabBarItemModel *tabItem;
@property (retain, nonatomic) AWEHPChannelBubbleTask *bubbleTask;
@property (copy, nonatomic) AWEHPChannelActionPopoverTask *popoverTask;
@property (nonatomic) BOOL bottomBarFillBackground;
@property (nonatomic) unsigned long long bottomBarThemeStyle;
@property (nonatomic) BOOL bottomBarShowBackgroungImage;

- (id)bubbleTask;
- (void)setBubbleTask:(id)arg0;
- (id)tabItem;
- (id)popoverTask;
- (BOOL)bottomBarFillBackground;
- (void)setTabItem:(id)arg0;
- (unsigned long long)bottomBarThemeStyle;
- (BOOL)bottomBarShowBackgroungImage;
- (void)setBottomBarFillBackground:(BOOL)arg0;
- (void)setBottomBarThemeStyle:(unsigned long long)arg0;
- (void)setBottomBarShowBackgroungImage:(BOOL)arg0;
- (BOOL)isTabBarSelected;
- (void)setIsTabBarSelected:(BOOL)arg0;
- (void)setPopoverTask:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;

@end