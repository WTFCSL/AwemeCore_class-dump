//
//     Generated by private class-dump
//

@class NSNumber, HGWindowConfig;

@interface HGPageConfig : NSObject <NSCopying> {
    BOOL _hideShareMenu;
    HGWindowConfig *_window;
    NSNumber *_swipeBackMode;
}

@property (copy, nonatomic) HGWindowConfig *window;
@property (retain, nonatomic) NSNumber *swipeBackMode;
@property (nonatomic, getter=isHideShareMenu) BOOL hideShareMenu;

- (id)swipeBackMode;
- (void)setSwipeBackMode:(id)arg0;
- (BOOL)isHideShareMenu;
- (void)setHideShareMenu:(BOOL)arg0;
- (unsigned long long)popGestureSwipeBackMode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setWindow:(id)arg0;
- (id)window;

@end
