//
//     Generated by private class-dump
//

@class AWEIMNoticeTabModelNew;

@interface AWEDYMenuTabView : UIButton {
    id /* block */ _tapAction;
    AWEIMNoticeTabModelNew *_tabItem;
}

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) AWEIMNoticeTabModelNew *tabItem;

- (void)onClick;
- (id)tabItem;
- (void)setTabItem:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg0;

@end