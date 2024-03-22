//
//     Generated by private class-dump
//

@class HTSLiveToolbarItem, UIView;
@protocol IESLiveBubbleGuide;

@interface IESLiveAnchorActivityFragment : IESLiveRoomComponent {
    HTSLiveToolbarItem *_item;
    UIView<IESLiveBubbleGuide> *_tipView;
}

@property (retain, nonatomic) HTSLiveToolbarItem *item;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentMount;
- (void)p_createActivityItem;
- (void)showPrompts:(id)arg0;
- (void)p_didClickActivityItem;
- (void)p_trackActivityCenterEntryWithActionType:(id)arg0;
- (id)item;
- (void).cxx_destruct;
- (void)setItem:(id)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;

@end