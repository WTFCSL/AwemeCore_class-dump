//
//     Generated by private class-dump
//

@class IESLivePopupItem, UIScrollView;

@protocol IESLivePopupDelegate <NSObject>

@property (readonly, nonatomic) BOOL listDidReachTop;
@property (readonly, nonatomic) BOOL listDidReachLeft;
@property (readonly, nonatomic) BOOL listIsDragging;
@property (readonly, weak, nonatomic) IESLivePopupItem *item;
@property (readonly, weak, nonatomic) UIScrollView *insideListView;

- (id)insideListView;
- (BOOL)listIsDragging;
- (BOOL)listDidReachTop;
- (BOOL)listDidReachLeft;
- (id)item;

@end
