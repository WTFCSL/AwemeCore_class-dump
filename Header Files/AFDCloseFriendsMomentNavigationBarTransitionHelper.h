//
//     Generated by private class-dump
//

@class AFDCloseFriendsMomentNavigationItemStore, AFDCloseFriendsMomentNavigationBar;

@interface AFDCloseFriendsMomentNavigationBarTransitionHelper : NSObject {
    AFDCloseFriendsMomentNavigationBar *_navigationBar;
    AFDCloseFriendsMomentNavigationItemStore *_itemStore;
}

@property (weak, nonatomic) AFDCloseFriendsMomentNavigationBar *navigationBar;
@property (weak, nonatomic) AFDCloseFriendsMomentNavigationItemStore *itemStore;

- (id)itemStore;
- (void)setItemStore:(id)arg0;
- (void)setFeedContainViewAlpha:(double)arg0 animated:(BOOL)arg1;
- (void)setCameraContainViewAlpha:(double)arg0 animated:(BOOL)arg1;
- (void)setCameraContainViewHidden:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNavigationBar:(id)arg0;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;

@end
