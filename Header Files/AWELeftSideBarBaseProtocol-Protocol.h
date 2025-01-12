//
//     Generated by private class-dump
//

@protocol AWELeftSideBarItemAbility, AWELeftSideBarItemContext, AWELeftSideBarEntranceViewAbility;

@protocol AWELeftSideBarBaseProtocol <AWELeftSideBarCommonProtocol, AWELeftSideBarEntranceViewProtocol, AWELeftSideBarEntranceViewClickProtocol, AWELeftSideBarCellProtocol, AWELeftSideBarBannerCellProtocol>

@property (readonly, nonatomic) id<AWELeftSideBarItemContext> context;
@property (readonly, nonatomic) id<AWELeftSideBarEntranceViewAbility> leftSideBarEntranceViewProxy;
@property (readonly, nonatomic) id<AWELeftSideBarItemAbility> leftSideBarProxy;

- (id)leftSideBarProxy;
- (id)leftSideBarEntranceViewProxy;
- (id)context;

@end
