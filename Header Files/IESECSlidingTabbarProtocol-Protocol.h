//
//     Generated by private class-dump
//

@class IESECSlidingTabButton;
@protocol IESECSlidingTabContainerProtocol;

@protocol IESECSlidingTabbarProtocol <NSObject>

@property (readonly, weak, nonatomic) id<IESECSlidingTabContainerProtocol> slidingContainer;
@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) long long tabsCount;
@property (readonly, nonatomic) IESECSlidingTabButton *currentSelectedBtn;

- (id)slidingContainer;
- (void)slidingContainer:(id)arg0 didScroll:(id)arg1;
- (id)currentSelectedBtn;
- (void)setSelectedIndex:(long long)arg0;
- (void)reloadData;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1;
- (long long)tabsCount;

@optional

- (void)slidingContainer:(id)arg0 didScroll:(id)arg1 animated:(BOOL)arg2;

@end
