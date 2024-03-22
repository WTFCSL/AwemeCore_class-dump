//
//     Generated by private class-dump
//

@class UILabel, DUXTabBarTextItem, NSString;
@protocol DUXTabBarItemViewDelegate;

@interface DUXTabbarTextItemView : UIView <DUXTabBarItemViewProtocol> {
    BOOL _isSelected;
    BOOL _autoFitWidth;
    DUXTabBarTextItem *_item;
    UILabel *_tabLabel;
    double _itemWidth;
    double _tabBarHeight;
    id<DUXTabBarItemViewDelegate> _delegate;
    long long _type;
}

@property (retain, nonatomic) DUXTabBarTextItem *item;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UILabel *tabLabel;
@property (nonatomic) double itemWidth;
@property (nonatomic) BOOL autoFitWidth;
@property (nonatomic) double tabBarHeight;
@property (weak, nonatomic) id<DUXTabBarItemViewDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTabBarHeight:(double)arg0;
- (id)tabLabel;
- (void)setTabLabel:(id)arg0;
- (void)setAutoFitWidth:(BOOL)arg0;
- (void)setupText;
- (void)tapFuction:(id)arg0;
- (BOOL)autoFitWidth;
- (void)updateItemWidthWithAutoFitWidth:(BOOL)arg0 preferItemWidth:(double)arg1 type:(long long)arg2;
- (id)initWithItem:(id)arg0 autoFitWidth:(BOOL)arg1 preferItemWidth:(double)arg2 tabBarHeight:(double)arg3 type:(long long)arg4;
- (id)item;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)delegate;
- (void)setItemWidth:(double)arg0;
- (void)setDelegate:(id)arg0;
- (double)itemWidth;
- (BOOL)isSelected;
- (void)setItem:(id)arg0;
- (double)tabBarHeight;

@end